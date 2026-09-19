from PySide6.QtWidgets import QApplication,QMainWindow
from loginui import Ui_MainWindow
class Mywinow(QMainWindow):#继承QMainwindow，拥有其能力
    def __init__(self):
        super().__init__()#先把爸爸 QMainWindow 初始化一下
        self.uia=Ui_MainWindow()#示把这个对象保存到当前窗口的 ui 属性里
        self.uia.setupUi(self)#组装
        
if __name__=='__main__':
    app=QApplication([])
    window=Mywinow()
    window.show()
    app.exec()    