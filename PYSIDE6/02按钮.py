from PySide6.QtWidgets import QApplication,QMainWindow,QPushButton

class Mywinow(QMainWindow):
    def __init__(self):
        super().__init__()
        btn=QPushButton('点我',self)#QPushButton 的第二个参数是它要依附的“父控件”
        btn.setGeometry(100,100,200,100)
        btn.setToolTip('牛逼')
        btn.setText('reset')
if __name__=='__main__':
    app=QApplication([])
    window=Mywinow()
    window.show()
    app.exec()