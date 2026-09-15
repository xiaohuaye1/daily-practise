import random
# 生成0.0到1.0之间的随机浮点数（不包含1.0）
a = random.random()
# 生成1到10之间的随机整数（包含1和10）
b = random.randint(1, 10)
# 生成1到9之间的随机整数（包含1，不包含10）
c = random.randrange(1, 10)
print(a, b, c)