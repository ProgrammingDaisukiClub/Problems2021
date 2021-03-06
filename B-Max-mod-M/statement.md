# 問題文
3つの整数 $A,B,M$ が与えられます。  
$A,B$ のうち、 $M$ で割った余りが大きくなる方の値を出力してください。  
ただし、 $A,B$ を $M$ で割った余りが互いに異なるような入力のみが与えられます。  

# 制約
## 共通
* 入力は全て整数
* ${{MIN_AB}} \leq A,B \leq {{MAX_AB}}$  
* ${{MIN_M}} \leq M \leq {{MAX_M}}$  
* $A,B$ を $M$ で割った余りは互いに異なります。

## Small
* $T={{MIN_T}}$

## Large
* $T={{MAX_T}}$  

# 入力
1 つの入力ファイルは複数のテストケースからなります。

入力ファイルの最初の一行目にはテストケースの個数 $T$ が記されます。

2行目以降には、$T$ 個のテストケースが記述されており、各テストケースは次の形式で表されます。
```
$A$ $B$ $M$
```

# 出力
各テストケースに対して、答えを1行ずつ出力してください。

{{sample}}

$A=1$ , $B=2$ , $M=3$ の場合、$A$ , $B$ を $3$ で割った余りはそれぞれ $1$ , $2$となるため、余りが大きい方の数である $2$ を出力します。  

$A=3$ , $B=5$ , $M=3$ の場合、$A$ , $B$ を $3$ で割った余りはそれぞれ $0$ , $2$となるため、余りが大きい方の数である $5$ を出力します。 

$A=4$ , $B=8$ , $M=5$ の場合、$A$ , $B$ を $5$ で割った余りはそれぞれ $4$ , $3$となるため、余りが大きい方の数である $4$ を出力します。 


# ヒント 
$X$ を $Y$ で割った余りを計算する方法は、多くのプログラミング言語で実装されています。  
剰余演算と呼ばれ、$X \% Y$ と記述します。
