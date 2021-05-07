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
* $T={{SMALL_T}}$
* ${{MIN_N}}\leq N\leq {{SMALL_N}}$
* ${{MIN_H}}\leq H\leq {{SMALL_H}}$
* ${{MIN_X}}\leq X\leq {{SMALL_X}}$
* ${{MIN_A}}\leq A_i\leq {{SMALL_A}}$
* ${{MIN_D}}=D_1\leq D_2\leq \ldots\leq D_X \leq {{SMALL_D}}$

## Large
* $T={{MAX_T}}$
* ${{MIN_N}}\leq N\leq {{MAX_N}}$
* ${{MIN_H}}\leq H\leq {{MAX_H}}$
* ${{MIN_X}}\leq X\leq {{MAX_X}}$
* ${{MIN_A}}\leq A_i\leq {{MAX_A}}$
* ${{MIN_D}}=D_1\leq D_2\leq \ldots\leq D_X \leq {{MAX_D}}$


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

{{sample}}

 $1$ 個目のテストケースでは、例えば $(B_1,B_2,B_3)=(2,1,2)$ などが条件を満たします。実際、  
* $\displaystyle\sum_{i=1}^{3}B_i=2+1+2=5\leq 5$
* $\displaystyle\sum_{i=1}^{3}\sum_{j=1}^{B_i}\lfloor A_i/D_j \rfloor=\lfloor1/1\rfloor+\lfloor1/2\rfloor+\lfloor3/1\rfloor+\lfloor5/1\rfloor+\lfloor5/2\rfloor=1+0+3+5+2=11\geq 10$  
  
であり、確かに $2$ つの条件を共に満たしていることが分かります。よって、`Yes`と出力するのが正解です。  
 $2$ 個目のテストケースでは、条件を満たすようなものは存在しません。`No`と出力するのが正解です。  
 $3$ 個目のテストケースでは、例えば $(B_1,B_2,B_3,B_4,B_5,B_6)=(14,0,0,0,0,0)$ などが条件を満たすので、`Yes`と出力するのが正解です。
