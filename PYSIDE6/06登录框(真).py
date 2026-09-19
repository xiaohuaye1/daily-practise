from PySide6.QtWidgets import QApplication,QMainWindow
from loginui import Ui_MainWindow
class Mywinow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.uia=Ui_MainWindow()
        self.uia.setupUi(self)
        self.uia.pushButton.clicked.connect(self.loginFuc)
    def loginFuc(self):
        #拿到账号
        account=self.uia.lineEdit.text()
        #拿到密码
        password=self.uia.lineEdit_2.text()

        if account=='123' and password=='321':
            print("success")
        else:
            print("failed")

        
if __name__=='__main__':
    app=QApplication([])
    window=Mywinow()
    window.show()
    app.exec()    