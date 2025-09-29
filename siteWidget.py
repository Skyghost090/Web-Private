from PyQt5.QtWidgets import QSlider
from PyQt5.QtCore import *

class configSiteWidgetsConstructor:
    def Slider(context, initValue):
        customSlider = QSlider(context)
        customSlider.setOrientation(Qt.Horizontal)
        customSlider.setValue(initValue)
        customSlider.setRange(0, 24)
        customSlider.setFixedWidth(550)
        return customSlider
