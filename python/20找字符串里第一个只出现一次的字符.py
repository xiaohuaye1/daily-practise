str="helloworld"
a=-1
mp = dict()
for i in str:
    if i in mp:
        mp[i] += 1
    else:
        mp[i] = 1
for i in range(len(str)):
    if mp[str[i]]==1:
        a=i
        break
print(a)