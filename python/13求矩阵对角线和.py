# 创建3x3矩阵
a = []
for i in range(3):
    a.append([])

# 填充矩阵数据
for i in range(3):
    row = list(map(int, input().split()))
    a[i] = row

# 计算主对角线和（从左上到右下）
main_diag_sum = 0
for i in range(3):
    main_diag_sum += a[i][i]

# 计算副对角线和（从右上到左下）
anti_diag_sum = 0
for i in range(3):
    anti_diag_sum += a[i][2-i]

print(f"\n矩阵:")
for row in a:
    print(row)
print(f"主对角线和: {main_diag_sum}")
print(f"副对角线和: {anti_diag_sum}")