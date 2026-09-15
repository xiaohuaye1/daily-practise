import random
def guess():
    b = random.randint(1, 100)
    a=int(input("plz guess"))
    while(a):
        if a>b:
            print("大了")
            a=int(input())
        elif a<b:
            print("xi熬了")
            a=int(input())
        elif a==b:
            print("bingo")
            break
if __name__=="__main__":
    guess()