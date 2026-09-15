list_fenmu = [0] * 21
list_fenmu[1] = 1
list_fenmu[2] = 2
list_fenzi = [0] * 21
list_fenzi[1] = 2
list_fenzi[2] = 3
sum=0

for i in range(3, 21):
    list_fenmu[i] = list_fenmu[i-1] + list_fenmu[i-2]
    list_fenzi[i]=list_fenzi[i-1]+list_fenzi[i-2]
    sum+=list_fenzi[i]/list_fenmu[i]
sum+=3.5
print(sum)
#############################################################
up=2
down=1
sum2=0
for i in range(20):
    sum2+=up/down
    a=down
    down=up
    up=up+a
print(sum2)

