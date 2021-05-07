## 問題文
もふふはもふもふです。  
ところで、「mohu」「mohumohu」「mohumohumohu」のように、「mohu」の1回以上の繰り返しによって作られた文字列をもふもふな文字列と呼びます。  
一方、「mo」と「hu」から作られていても「mohu」の繰り返しではない文字列、「humo」「mohuhu」「humohumo」などはもふもふな文字列ではありません。  
与えられた長さ$N$の文字列 $S$ がもふもふな文字列かどうか判定してください。  

## 制約
### 共通
- $T$ はテストケースの個数です。  
- $S$ は「mo」「hu」のみで構成されています。  
- $N$ は偶数です。

### Small
$T = 10$  
$2 \leq N \leq 40$  

### Large
$T = 1000$  
$2 \leq N \leq 100$  

## 入力
1 つの入力ファイルは複数のテストケースからなります。

入力ファイルの最初の一行目にはテストケースの個数 $T$ が記されます。

2行目以降には、$T$ 個のテストケースが記述されており、各テストケースは次の形式で表されます。
```
$N$
$S$
```

## 出力
各テストケースに対して、 $S$ がもふもふな文字列なら「Yes」を、そうでなければ「No」を出力してください。  

## 入力例
```
3
4
mohu
16
mohumohumohumohu
14
mohumohumohuhu
```

## 出力例
```
Yes
Yes
No
```
入力例は3つのテストケースからなります。  
1つ目のテストケースは、「mohu」そのものなのでもふもふな文字列です。  
2つ目のテストケースは、「mohu」を4回繰り返したものなのでもふもふな文字列です。  
3つ目のテストケースは、最後の「mohuhu」がもふもふな文字列のルールを満たしていません。  