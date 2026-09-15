def func(s):
    res=''
    for i in s:
        if res=='':
            res+=i
        elif res[-1]==i:
            res=res[:-1 ]
        else:
            res+=i
    return res
print(func("abcacb"))



