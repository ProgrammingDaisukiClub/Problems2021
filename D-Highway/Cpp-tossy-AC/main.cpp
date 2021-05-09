#include <iostream>

using namespace std;

void solve() {
    int n;
    cin>>n;
    int l=0,r=0;
    for (int i=0; i<n; i++) {
        int t;
        cin>>t;
        if(t==0) l++;
        else if(t==1) r++;
        else {l++; r++;}
    }
    cout << l << " " << r << endl;
}

int main() {
    int t;
    cin>>t;

    while(t-->0) solve();

    return 0;
}
