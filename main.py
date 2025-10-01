import sys, os, time, toml

from PyQt5.QtGui import *
from PyQt5.QtWidgets import *
from PyQt5.QtCore import *
from urllib.request import urlopen
from siteWidget import *
from pyqttoast import Toast, ToastPreset
from sitesConfig import *

initialTime = []
endTime = []
name = []
adress = []

def clearList():
    initialTime.clear()
    endTime.clear()
    name.clear()
    adress.clear()

def addSiteListToArray(initalTimeParam, endTimeParam, nameParam, adressParam):
    initialTime.append(initalTimeParam)
    endTime.append(endTimeParam)
    name.append(nameParam)
    adress.append(adressParam)

def openUrl(url, exitFunction):
    try:
        page = urlopen("https://" + url)
        return page
    except:
        os.system("notify-send 'Wrong Url'")

def addSiteClick(newsiteAdress, exitFunction):
    page = openUrl(newsiteAdress, exitFunction)
    try:
        htmlBytes = page.read()
    except:
        return

    title = ""

    try:
        html = htmlBytes.decode("utf-8")
        startIndex = html.find("<title>") + len("<title>")
        endIndex = html.find("</title>")
        title = html[startIndex:endIndex]
    except:
        os.system("notify-send 'Not possible for get site name' ")
        title = newsiteAdress

    print(title)
    os.system("bash input.sh '{}' '{}' '{}' '{}'".format(newsiteAdress, title, 0, 0))
    exitFunction()

class sitesConfigStrategy():
    def __init__(self, guiContext, index):
        self.guiContext = guiContext
        self.index = index
        self.paramList = [adress[index], name[index], initialTime[index], endTime[index]]

    def execConfigChanges(self, configClass):
        os.system(configClass.exec_(self.paramList))
        self.guiContext.loadList()

class MainWindow(QMainWindow):
    def versionSessionDialog(self):
        os.system("xdg-open https://github.com/Skyghost090/Lsfg-Gui")

    def newSiteDialog(self):
        customDialog = QDialog(self)
        customDialog.setFixedSize(400,125)
        customDialog.setWindowTitle("Website adress")
        label = QLabel("Site Adress:", customDialog)
        label.setGeometry(15,20, 275, 30)
        lineEdit = QLineEdit(customDialog)
        lineEdit.setGeometry(100,20, 275, 30)

        def exitFunction():
            customDialog.close()
            self.loadList()

        okButton = QPushButton("Ok", customDialog)
        okButton.clicked.connect(lambda: addSiteClick(lineEdit.text(), exitFunction))
        okButton.setGeometry(300, 75, 75, 25)
        customDialog.exec_()

    def clear_(self):
        for i in reversed(range(self.vboxLayout.count())):
            self.vboxLayout.itemAt(i).widget().close()

    def addSiteWidget(self, name, index):
        self.siteButton = QPushButton("\n{}\n".format(name))
        self.siteButton.setFixedWidth(550)
        self.siteButton.clicked.connect(lambda: self.configArea(index))
        self.vboxLayout.addWidget(self.siteButton)

    def createSitesWidgets(self):
        clearList()
        i = 0
        with open("list.toml", "r+") as file_:
            config = toml.load(file_)
        for site in config['site']:
            print("added")
            self.addSiteWidget(site['name'], i)
            addSiteListToArray(site['initTime'], site['endTime'], str(site['name']), str(site['adress']))
            i = i + 1

    def loadList(self):
        self.clear_()
        try:
            self.createSitesWidgets()
        except:
            self.nothingIcon = QLabel("")
            self.nothingIcon.setPixmap(QIcon.fromTheme("dialog-warning").pixmap(QSize(100,100)))
            self.nothingIcon.setAlignment(Qt.AlignCenter)
            self.nothingLabel = QLabel("""\n\n\nChoose Sites Wisely\nNot every website is safe or reliable.\nFiltering protects you from miss information\nand online risks. Stay smart — use trusted\nsources only.""")
            self.nothingLabel.setFixedWidth(550)
            self.nothingLabel.setStyleSheet("font-size: 17px")
            self.nothingLabel.setAlignment(Qt.AlignHCenter)
            self.vboxLayout.addWidget(self.nothingIcon)
            self.vboxLayout.addWidget(self.nothingLabel)

        print("{} {}".format(initialTime, endTime))

    def updateFinalValue(self):
        self.finalHourLabel.setText("Final Time: {}".format(self.finalHourSlider.value()))
        self.siteConfig.paramList[3] = self.finalHourSlider.value()

    def updateInitialValue(self):
        self.initialHourLabel.setText("Initial Time: {}".format(self.initialHourSlider.value()))
        self.siteConfig.paramList[2] = self.initialHourSlider.value()

    def configArea(self, index):
        self.clear_()

        self.siteConfig = sitesConfigStrategy(self, index)
        self.exit = QPushButton("\nReturn to Home\n")
        self.exit.setFixedWidth(550)
        self.exit.clicked.connect(lambda: self.siteConfig.execConfigChanges(saveChanges()))
        self.remove = QPushButton("\nRemove Site\n")
        self.remove.setFixedWidth(550)
        self.remove.clicked.connect(lambda: self.siteConfig.execConfigChanges(removeButtonAction()))
        self.initialHourLabel = QLabel("Initial Time: {}".format(initialTime[index]))
        self.initialHourLabel.setFixedHeight(10)
        self.initialHourSlider = configSiteWidgetsConstructor.Slider(self, initialTime[index])
        self.initialHourSlider.valueChanged.connect(lambda: self.updateInitialValue())

        self.finalHourLabel = QLabel("Final Time: {}".format(endTime[index]))
        self.finalHourLabel.setFixedHeight(10)
        self.finalHourSlider = configSiteWidgetsConstructor.Slider(self, endTime[index])
        self.finalHourSlider.valueChanged.connect(lambda: self.updateFinalValue())

        self.vboxLayout.addWidget(self.initialHourLabel)
        self.vboxLayout.addWidget(self.initialHourSlider)
        self.vboxLayout.addWidget(self.finalHourLabel)
        self.vboxLayout.addWidget(self.finalHourSlider)
        self.vboxLayout.addWidget(self.remove)
        self.vboxLayout.addWidget(self.exit)

    def toolbar(self):
        self.menuToolbar = self.menuBar()
        self.configMenu = self.menuToolbar.addMenu('&Config')
        self.aboutMenu = self.menuToolbar.addMenu('&About')
        self.versionSession = QAction('&Version', self)
        self.versionSession.setShortcut('Ctrl+V')
        self.versionSession.triggered.connect(self.versionSessionDialog)
        self.aboutMenu.addAction(self.versionSession)
        self.newdirectorySession = QAction('&Add New Site', self)
        self.newdirectorySession.setShortcut('Ctrl+N')
        self.newdirectorySession.triggered.connect(self.newSiteDialog)
        self.configMenu.addAction(self.newdirectorySession)

    def __init__(self):
        super().__init__()
        self.setGeometry(200, 200, 600, 400)
        self.setWindowTitle("WebPrivate")

        self.toolbar()

        self.hboxLayout = QHBoxLayout(self)
        self.vboxLayout = QVBoxLayout(self)
        self.widgetVbox = QWidget()
        self.widgetVbox.setLayout(self.vboxLayout)
        self.widgetVbox.setMinimumHeight(215)

        self.loadList()
        self.scroll = QScrollArea()
        self.scroll.setWidget(self.widgetVbox)
        self.scroll.setAlignment(Qt.AlignHCenter)
        self.setCentralWidget(self.scroll)

app = QApplication(sys.argv)

window = MainWindow()
window.show()

app.exec()
