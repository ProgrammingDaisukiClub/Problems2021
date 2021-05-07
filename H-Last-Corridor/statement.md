# 問題文

整数 $N,H,X$ および正整数列 $(A_1,A_2,\ldots,A_N),(D_1,D_2,\ldots,D_X)$ が与えられます。   
ここで、 $D_1=1$ であることと $(D_1,D_2,\ldots,D_X)$ が単調非減少であることが保証されます。  
以下の $2$ つの条件を共に満たすような非負整数列 $(B_1,B_2,\ldots,B_N)$ は存在するでしょうか？  

存在するならば`Yes`、しないならば`No`と出力してください。  
* $\displaystyle\sum_{i=1}^{N}B_i\leq X$
* $\displaystyle\sum_{i=1}^{N}\sum_{j=1}^{B_i}\lfloor A_i/D_j \rfloor\geq H$  
  
  
なお、$\lfloor x \rfloor$は $x$ 以下の最大の整数を表します。例えば、$\lfloor 33.4 \rfloor=33,\lfloor 6 \rfloor=6$です。 


# 制約
## 共通
* $T$はテストケースの個数


## Small
* $T=10$
* $1\leq N\leq 5$
* $1\leq H\leq 100$
* $1\leq X\leq 5$
* $1\leq A_i\leq 100$
* $1=D_1\leq D_2\leq \ldots\leq D_X \leq10$

## Large
* $T=50$
* $1\leq N\leq 2000$
* $1\leq H\leq 10^9$
* $1\leq X\leq 2000$
* $1\leq A_i\leq 10^9$
* $1=D_1\leq D_2\leq \ldots\leq D_X \leq10^9$


# 入力
1 つの入力ファイルは複数のテストケースからなります。

入力ファイルの最初の一行目にはテストケースの個数 $T$ が記されます。

2行目以降には、$T$ 個のテストケースが記述されており、各テストケースは次の形式で表されます。


```
$N H X$
$A_1 A_2 \ldots A_N$
$D_1 D_2 \ldots D_X$

```

# 出力
各テストケースに対して、答えを1行ずつ出力してください。

# 入力例
```
3
3 10 5
1 3 5
1 2 3 4 5
3 40 3
3 7 10
1 4 4
6 92 23
12 5 8 4 1 7
1 1 1 1 2 2 2 2 3 3 3 3 4 5 6 7 8 9 10 100 1000 10000 100000
```

# 出力例
```
Yes
No
Yes
```
 $1$ 個目のテストケースでは、例えば $(B_1,B_2,B_3)=(2,1,2)$ などが条件を満たします。実際、  
* $\displaystyle\sum_{i=1}^{3}B_i=2+1+2=5\leq 5$
* $\displaystyle\sum_{i=1}^{3}\sum_{j=1}^{B_i}\lfloor A_i/D_j \rfloor=\lfloor1/1\rfloor+\lfloor1/2\rfloor+\lfloor3/1\rfloor+\lfloor5/1\rfloor+\lfloor5/2\rfloor=1+0+3+5+2=11\geq 10$  
  
であり、確かに $2$ つの条件を共に満たしていることが分かります。よって、`Yes`と出力するのが正解です。  
 $2$ 個目のテストケースでは、条件を満たすようなものは存在しません。`No`と出力するのが正解です。  
 $3$ 個目のテストケースでは、例えば $(B_1,B_2,B_3,B_4,B_5,B_6)=(14,0,0,0,0,0)$ などが条件を満たすので、`Yes`と出力するのが正解です。
