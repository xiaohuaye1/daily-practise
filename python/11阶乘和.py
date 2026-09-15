def jiecheng(a):
    if a==1:
        return 1
    else:
        return a*jiecheng(a-1)
    
sum=0
for i in range(1,21):
    sum+=jiecheng(i)
print(sum)


import math
sum2=0
for j in range(1,21):
    sum2+=math.factorial(j)
print(sum2)