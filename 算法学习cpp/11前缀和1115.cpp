#include <iostream>
#include <vector>
#include <algorithm> // 必须包含，为了 max 和 min
using namespace std;

int main(){
    int n;
    cin >> n; // 修正1：一定要先输入 n
    vector<int> a(n + 1); 
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    
    // 前缀和数组，大小也是 n+1，且初始化为 0（vector 默认就是 0）
    vector<long long> c(n + 1, 0); 
    
    for(int i = 1; i <= n; i++){
        c[i] = c[i-1] + a[i]; // 现在不会越界了，c[0] 也是 0
    }
    
    long long ret = -1e20;
    long long premin = 0; // 历史中最小的 c[i]
    
    for(int i = 1; i <= n; i++){
        ret = max(ret, c[i] - premin);
        premin = min(premin, c[i]); //现在 c 和 premin 都是 long long，类型一致
    }
    
    cout << ret << endl;
    return 0;
}