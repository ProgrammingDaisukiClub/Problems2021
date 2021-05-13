#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool ok() {
    int n,h,x;
    cin>>n >> h >> x;
    vector<int> a(n), d(x);
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<x; i++) cin >> d[i];

    vector<int> atk;
    for (int i=0; i<n; i++) for (int j=0; j<x; j++) atk.push_back(a[i] / d[j]);
    sort(begin(atk), end(atk));
    reverse(begin(atk), end(atk));
    for (int i=0; i<x; i++) h -= atk[i];

    return h <= 0;
}

void solve() {
    cout << (ok() ? "Yes" : "No") << endl;
}

int main() {
    int t;
    cin>>t;

    while(t-->0) solve();

    return 0;
}
