from PySide6.QtWidgets import QApplication,QMainWindow,QPushButton

class Mywinow(QMainWindow):
    def __init__(self):
        super().__init__()
        btn=QPushButton('点我',self)
        btn.setGeometry(100,100,200,100)
        btn.clicked.connect(self.hello)#button的一个clicked信号

    def hello(self):
        print("fuck u")
if __name__=='__main__':
    app=QApplication([])
    window=Mywinow()
    window.show()
    app.exec()