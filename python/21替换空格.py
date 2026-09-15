def func(s):
    res=''
    for i in s:
        if i !=' ':
            res+=i
        else:
            res+="67"
    return res
print(func("hello world i am gay"))
