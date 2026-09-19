from PySide6.QtWidgets import QApplication,QMainWindow #第一个管理整个GUI应用程序，第二个是提供的主窗口类，包含菜单、任务栏等


class Mywinow(QMainWindow):#继承自QT的主窗口
    def __init__(self):
        super().__init__()#调用父类,在装修自己的窗口之前，先让 Qt 把窗口的地基和框架建好

if __name__=='__main__':
    app=QApplication([])#创建QT应用程序对象
    window=Mywinow()
    window.show()#将窗口显示出来
    app.exec()#事件循环，等待用户交互