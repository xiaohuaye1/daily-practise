from PySide6.QtWidgets import QApplication,QMainWindow,QLabel,QLineEdit
from PySide6.QtCore import Qt

class Mywinow(QMainWindow):
    def __init__(self):
        super().__init__()
        lb=QLabel('我是一个标签',self)
        lb.setText('我是修改后的文字')
        lb.setAlignment(Qt.AlignmentFlag.AlignCenter)#居中，但流格式才行
if __name__=='__main__':
    app=QApplication([])
    window=Mywinow()
    window.show()
    app.exec()