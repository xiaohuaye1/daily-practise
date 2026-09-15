def fuc(str):
    for i in range(len(str)):
        if str[i] in str[i+1:]:
            return False
    return True
