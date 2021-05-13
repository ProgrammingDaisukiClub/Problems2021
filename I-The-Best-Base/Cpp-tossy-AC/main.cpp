#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<string> m(n);
    for (int i=0; i<n; i++) cin >> m[i];

    int q;
    cin>>q;
    vector<int> r(q), c(q);
    for (int i=0; i<q; i++) {
        cin >> r[i] >> c[i];
        r[i]--;
        c[i]--;
    }

    vector<vector<vector<int>>> dists(q, vector<vector<int>>(n, vector<int>(n, 1234567890)));

    for (int i=0; i<q; i++) {
        vector<vector<int>> &d = dists[i];
        d[r[i]][c[i]] = 0;
        queue<pair<int,int>> togo;
        togo.push({r[i],c[i]});
        while(!togo.empty()) {
            int cx = togo.front().first, cy = togo.front().second;
            togo.pop();
            int dx[] = {0,0,1,-1};
            int dy[] = {1,-1,0,0};
            for(int k=0; k<4; k++) {
                int nx = cx + dx[k], ny = cy + dy[k];
                if (nx >= 0 && nx < n && ny >= 0 && ny < n && m[nx][ny]== '.' && d[nx][ny] > d[cx][cy]+1) {
                    d[nx][ny] = d[cx][cy] + 1;
                    togo.push({nx, ny});
                }
            }
        }
    }

    int ans = 1234567890;
    for (int x=0; x<n; x++) for (int y=0; y<n; y++) if (m[x][y]=='.') {
        int cur = 0;
        for (int i=0; i<q; i++) cur += dists[i][x][y];
        ans = min(ans, cur);
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin>>t;

    while(t-->0) solve();

    return 0;
}
