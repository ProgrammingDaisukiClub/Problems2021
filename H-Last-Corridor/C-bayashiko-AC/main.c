#include <stdio.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

void solve(){
    int N,H,T;
    scanf("%d%d%d",&N,&H,&T);
    int A[N],D[T+1];
    rep(i,N) scanf("%d",&A[i]);
    rep(i,N) scanf("%d",&D[i]);
    D[T]=-1;
    long long damage=0;
    int atk[N],cnt[N];
    rep(i,N) atk[i]=A[i],cnt[i]=0;
    while(T--){
        int maxi=0,plc=0;
        rep(i,N){
            if(maxi<atk[i]) maxi=atk[i],plc=i;
        }
        damage+=maxi;
        cnt[plc]++;
        atk[plc]=A[plc]/D[cnt[plc]];
    }
    printf(damage>=H?"Yes\n":"No\n");
}

int main(void){
    int T;
    scanf("%d\n",&T);
    while(T--) solve();
}