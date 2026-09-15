list=[]
a=int(input())
if a<=1:
    print("no")
else:
    for i in range (1,a):
        if a%i==0:
            list.append(i)
facotrsum=0
for j in list:
    facotrsum+=j
if facotrsum==a:
    print("yes")
else:
    print("no")