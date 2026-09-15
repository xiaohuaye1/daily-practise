list=[]
a=int(input())
y=2
while a>=y:
    if a%y==0:
        list.append(y)
        a//=y
    else:
        y+=1
print(list)