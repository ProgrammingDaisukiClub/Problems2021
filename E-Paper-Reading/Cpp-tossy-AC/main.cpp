#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i=0; i<n; i++) {
        cin>> v[i];
    }
    sort(begin(v), end(v));
    cout << v[0] + v[1] << endl;
}

int main() {
    int t;
    cin>>t;

    while(t-->0) solve();

    return 0;
}
