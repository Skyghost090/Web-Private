class removeButtonAction():
    def exec_(self, paramList):
        print(paramList[1])
        return "pkexec --keep-cwd bash remove.sh '{}'".format(paramList[0])

class saveChanges():
    def exec_(self, paramList):
        return "bash remove.sh '{}'; bash input.sh '{}' '{}' '{}' '{}'".format(paramList[0], paramList[0], paramList[1], paramList[2], paramList[3])
