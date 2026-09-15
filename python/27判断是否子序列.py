def fuc(s,t):
    c=''
    n=0
    if len(s)>len(t):
        return False
    for i in t:
        if i==s[n]:
            c+=i
            n+=1
    if s==c:
        return True
    return False
print(fuc("gay","im gy"))