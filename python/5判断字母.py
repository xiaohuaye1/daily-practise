a=input()
result=a.isalpha()
if result:
    print("字母")
else:
    print("非字母")


b=input()
if ord(b)<=90 and ord(b)>=65:
    print("大写")
elif ord(b)>=97 and ord(b)<=122:
    print("小写")
elif ord(b)==32:
    print("space")
elif ord(b)>=48 and ord(b)<=57:
    print("数字") 
else:
    print("不是")


c=input()
if len(c) == 1:
    ascii_code = ord(b)
    if ascii_code in range(65, 91):      
        print("大写")
    elif ascii_code in range(97, 123):   
        print("小写")
    elif ascii_code == 32:               
        print("space")
    elif ascii_code in range(48, 58):    
        print("数字")
    else:
        print("其他字符")
