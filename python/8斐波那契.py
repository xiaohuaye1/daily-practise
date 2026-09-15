def fib(n):
    if n == 1 or n == 2:
        return 1
    else:
        return fib(n-1) + fib(n-2)

print(f"递归方法计算fib(10): {fib(10)}")

# 使用列表的迭代方法
list_fib = [0] * 11  # 创建长度为11的列表，索引0-10
list_fib[1] = 1
list_fib[2] = 1

for i in range(3, 11):
    list_fib[i] = list_fib[i-1] + list_fib[i-2]

print(f"迭代方法计算fib(10): {list_fib[10]}")