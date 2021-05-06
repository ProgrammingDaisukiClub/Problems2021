#pragma GCC optimize("Ofast")
//#pragma GCC target("avx2")
#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
//#include<boost/multiprecision/cpp_int.hpp>
//#include<boost/multiprecision/cpp_dec_float.hpp>
//namespace mp=boost::multiprecision;
//#define mulint mp::cpp_int
//#define mulfloat mp::cpp_dec_float_100
struct __INIT{__INIT(){cin.tie(0);ios::sync_with_stdio(false);cout<<fixed<<setprecision(15);}} __init;
#define INF (1<<30)
#define LINF (lint)(1LL<<56)
#define endl "\n"
#define rep(i,n) for(lint (i)=0;(i)<(n);(i)++)
#define reprev(i,n) for(lint (i)=(n-1);(i)>=0;(i)--)
#define flc(x) __builtin_popcountll(x)
#define pint pair<int,int>
#define pdouble pair<double,double>
#define plint pair<lint,lint>
#define fi first
#define se second
#define all(x) x.begin(),x.end()
#define vec vector<lint>
#define nep(x) next_permutation(all(x))
typedef long long lint;
int dx[8]={1,1,0,-1,-1,-1,0,1};
int dy[8]={0,1,1,1,0,-1,-1,-1};
const int MAX_N=3e5+5;
template<class T>bool chmax(T &a,const T &b){if(a<b){a=b;return 1;}return 0;}
template<class T>bool chmin(T &a,const T &b){if(b<a){a=b;return 1;}return 0;}
//vector<int> bucket[MAX_N/1000];
constexpr int MOD=1000000007;
//constexpr int MOD=998244353;
/*#include<atcoder/all>
using namespace atcoder;
typedef __int128_t llint;*/

lint B[4000000];

void solve(){
    int N,H,X;
    cin >> N >> H >> X;
    int A[N],D[X];
    rep(i,N) cin >> A[i];
    rep(i,X) cin >> D[i];
    rep(i,N) rep(j,X) B[i*X+j]=A[i]/D[j];
    sort(B,B+N*X,greater<lint>());
    lint ans=accumulate(B,B+X,0LL);
    if(ans>=H) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main(void){
    int T;
    cin >> T;
    while(T--) solve();
}