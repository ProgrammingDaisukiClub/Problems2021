#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    int a,b,m;
    cin>>a>>b>>m;
    cout << (a%m > b%m ? a : b)  << endl;
}

int main() {
    int t;
    cin>>t;

    while(t-->0) solve();

    return 0;
}
