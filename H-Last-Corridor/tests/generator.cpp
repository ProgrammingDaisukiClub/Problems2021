#include"testlib.h"
#include"constraints.h"
#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

void small_case(){
    string filename="small.in";
    ofstream of(filename);
    int T=10;
    of << T << endl;
    while(T--){
        int N=rnd.next(1,5);
        int H=rnd.next(1,100);
        int X=rnd.next(1,5);
        int A[N];
        rep(i,N) A[i]=rnd.next(1,100);
        int D[X];
        D[0]=1;
        for(int i=1;i<X;i++) D[i]=rnd.next(1,10);
        sort(D,D+X);
        of << N << " " << H << " " << X << endl;
        rep(i,N-1) of << A[i] << " ";
        of << A[N-1] << endl;
        rep(i,X-1) of << D[i] << " ";
        of << D[X-1] << endl;
    }
    of.close();
}
void large_case(){
    string filename="large.in";
    ofstream of(filename);
    int T=50;
    of << T << endl;
    while(T--){
        int N=rnd.next(1,MAX_N);
        int H=rnd.next(1,MAX_H);
        int X=rnd.next(1,MAX_X);
        int A[N];
        rep(i,N) A[i]=rnd.next(1,MAX_A);
        int D[X+1];
        D[0]=1;
        for(int i=1;i<X;i++) D[i]=rnd.next(1,MAX_D);
        sort(D,D+X);
        D[X]=-1;
        long long damage=0;
        int atk[N],cnt[N];
        rep(i,N) atk[i]=A[i],cnt[i]=0;
        rep(i,X){
            int maxi=0,plc=0;
            rep(j,N){
                if(maxi<atk[j]) maxi=atk[j],plc=j;
            }
            damage+=maxi;
            cnt[plc]++;
            atk[plc]=A[plc]/D[cnt[plc]];
        }

        if(damage+1<=MAX_H && damage>=1) H=rnd.next(0,1)%2?damage:damage+1;

        of << N << " " << H << " " << X << endl;
        rep(i,N-1) of << A[i] << " ";
        of << A[N-1] << endl;
        rep(i,X-1) of << D[i] << " ";
        of << D[X-1] << endl;
    }
    of.close();
}

int main(int argc,char *argv[]){
    registerGen(argc, argv, 1);
    small_case();
    large_case();
}