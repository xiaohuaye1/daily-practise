def lcs(str1,str2):
    res=''
    left=0
    for i in range(len(str1)+1):
        if str1[left:i+1] in str2:
            res=str1[left:i+1]
        else:
            left+=1
    return res
