#include <iostream>
#include <algorithm>
using namespace std;
const int N = 1e5 + 10;
int a[N];
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + 1 + n);
    int mid = a[(n + 1) / 2];
    long long ans = 0;
    for (int i = 1; i <= n; i++)
        ans += abs((long long)mid - a[i]);
    cout << ans << endl;
}