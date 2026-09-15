def fuc(a):
    if a==1:
        return 1
    else:
        return a*fuc(a-1)
a=int(input())
result=fuc(a)
print(result)