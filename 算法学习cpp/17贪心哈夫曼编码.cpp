#include <iostream>
#include <vector>
#include <queue>

using namespace std;

typedef long long LL;

int n;
// 定义小顶堆（优先队列），保证每次取出的都是最小值
priority_queue<LL, vector<LL>, greater<LL>> heap;

int main()
{

    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        LL x; 
        cin >> x;
        heap.push(x); 
    }

    LL ret = 0;
    while(heap.size() > 1)
    {
        // 1. 取出当前最小的元素
        LL x = heap.top();
        heap.pop();

        // 2. 取出当前第二小的元素
        LL y = heap.top();
        heap.pop();

        // 3. 将合并的代价累加到总结果中
        ret += x + y;

        // 4. 将合并后的新节点重新放回堆中
        heap.push(x + y);
    }

    // 输出最终计算出的最小总代价（WPL）
    cout << ret << "\n";

    return 0;
}