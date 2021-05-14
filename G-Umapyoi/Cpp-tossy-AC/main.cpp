#include <iostream>

using namespace std;

bool ok() {
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;

    if (a != b + c + d) return false;
    if (c + d != e) return false;

    return true;
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
