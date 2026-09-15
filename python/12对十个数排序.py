# 获取用户输入，按空格分割，并将每个字符串转换为整数
a = map(int, input().split())
a=list(a)
a.sort()
print(a)