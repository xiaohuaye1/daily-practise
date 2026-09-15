import string
import time
with open('400_hanzi.txt', 'r', encoding='utf-8') as f:
    content = f.read().strip()
    # 字符串本身就是字符序列，可以直接遍历
    hanzi_list = list(content)  # 或者直接 for ch in content
a = "姚诺贤傻逼"
temp=''
for ch in a:
    for i in hanzi_list:
        print(temp+i)
        time.sleep(0.002)
        if i==ch:
            temp+=ch
            break
