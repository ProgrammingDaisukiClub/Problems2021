#include <iostream>
#include <string>

using namespace std;

bool ok() {
    string s;
    cin>>s;
    if (s.size() % 4 != 0) return false;
    for (int i=0; i<s.size(); i++) {
        if (s[i] != "mohu"[i%4]) return false;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    cout << (ok() ? "Yes" : "No") << endl;
}

int main() {
    int t;
    cin>>t;

    while(t-->0) solve();

    return 0;
}