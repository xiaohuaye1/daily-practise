def fuc(bills):
    five=0
    ten=0
    twenty=0
    for bills in bills:
        if bills==5:
            five+=1
        elif bills==10:
            if five==0:
                return False
            else:
                five-=1
                ten+=1
        else:
            if five>0 and ten>0:
                five-=1
                ten-=1
            elif five>=3:
                five-=3
            else:
                return False
    return True
bills=[5,5,5,10,20]
a=[5,5,10,10,20]
print(fuc(bills))
print(fuc(a))