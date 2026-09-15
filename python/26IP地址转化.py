def fuc(str):
    strs=str.split('.')
    res=''
    for i in strs:
        res+='{:08b}'.format(int(i))
    return res
print(fuc("212.23.32.12"))