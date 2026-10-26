#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    int n = max(a.size(), b.size());
    if (a.size() > b.size()) {
        b = string(a.size() - b.size(), '0') + b; 
    }
    if (b.size() > a.size()) {
        a = string(b.size() - a.size(), '0') + a; 
    }
    string ans(n + 1, '0');
    int carry = 0; 
    
    // 3. 从后往前加
    for(int j = n - 1; j >= 0; j--){
        int pos1 = a[j] - '0';
        int pos2 = b[j] - '0';
        
        // 当前位相加 + 上一位的进位
        int sum = pos1 + pos2 + carry; 
        
        // 存入当前位：必须转成字符（+ '0'）
        ans[j + 1] = (sum % 10) + '0'; 
        // 计算新的进位
        carry = sum / 10; 
    }
    
    // 4. 最高位（下标为 0 的位置）填入最后的进位
    ans[0] = carry + '0'; 
    
    // 5. 输出
    if (ans[0] == '0') {
        // 如果 ans[0] 是 '0'，说明没进位，从下标 1 开始输出
        for(int i = 1; i <= n; i++) {
            cout << ans[i];
        }
    } else {
        // 有进位，直接输出全部
        cout << ans;
    }
    cout << endl;
    
    return 0;
}