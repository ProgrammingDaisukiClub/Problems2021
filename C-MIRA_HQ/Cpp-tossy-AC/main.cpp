#include <iostream>

using namespace std;

void solve() {
    int n;
    cin>>n;
    int cnt = 0;
    for (int i=0; i<n; i++) {
        int l;
        cin>>l;
        cnt += l;
        cout << cnt << " \n"[i==n-1];
    }
}

int main() {
    int t;
    cin>>t;

    while(t-->0) solve();

    return 0;
}
