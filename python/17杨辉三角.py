def yanghui(n):
    if n <= 0:
        return []
    triangle = []
    for i in range(n):
        row = [1]
        if i > 0:
            for j in range(1, i):
                row.append(triangle[i-1][j-1] + triangle[i-1][j])
            row.append(1)
        triangle.append(row)
    return triangle
def print_yanghui(triangle):
    max_width = len(' '.join(map(str, triangle[-1])))
    for row in triangle:
        row_str = ' '.join(map(str, row))
        print(row_str.center(max_width))

# 测试代码
if __name__ == "__main__":
    n = int(input("请输入杨辉三角的行数: "))
    triangle = yanghui(n)
    print_yanghui(triangle)
