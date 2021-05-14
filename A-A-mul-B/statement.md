# 問題文

2つの整数 $A, B$ の積を求めてください。

# 制約

## 共通

- $A, B$ は整数です。
- ${{ MIN_AB }} \leq A, B \leq {{ MAX_AB }}$

## Small

- $T = {{ MIN_T }}$ 

## Large

- $T = {{ MAX_T }}$

# 入力
1 つの入力ファイルは複数のテストケースからなります。  

入力ファイルの最初の一行目にはテストケースの個数 $T$ が記されます。  

2行目以降には、$T$ 個のテストケースが記述されており、各テストケースは次の形式で表されます。  

```
$A$ $B$
```

# 出力
各テストケースに対して、$A \times B$ を1行ずつ出力してください。

{{Sample}}

# サンプルプログラム

以下の内容は，Practice Contestの問題 A+B と同等です．理解できている人は読み飛ばして構いません．

## C

```
#include &lt;stdio.h&gt;

int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0){
        int a, b;
        scanf("%d %d", &a, &b);
        int answer = 0; // EDIT HERE
        printf("%d\n", answer);
    }
    return 0;
}
```

## Java

```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i=0; i < n; i++){
            int a = sc.nextInt();
            int b = sc.nextInt();
            System.out.println(0); // EDIT HERE
        }
        sc.close();
    }
}
```

## Python3

```
def main():
    T = int(input())
    for _ in range(T):
        A, B = map(int, input().split())
        print(0)  # edit here


if __name__ == '__main__':
    main()
```

# テストケースのダウンロード方法

1. 本画面の最下部にある提出フォームにおいて、フォーム左上で適切なデータセット(`Small` or `Large`)を選択して、
フォーム右上で`Smallのダウンロード`もしくは`Largeのダウンロード`を押す。

1. ダウンロードしたファイルをソースコードと同じディレクトリに移動して、`in.txt`にリネームする。(自分の開発環境を使用する場合)

# Answer Book[自分の開発環境を使用する場合の例]

## C言語

1. ソースコードをコンパイルする
    
    ```
    gcc main.c
    ```

    コンパイルでは必要に応じて、``-O2``や``-Wall``などのコンパイルオプションを使用するとよいかもしれない。

1. キーボード入力の代わりに`in.txt`を読み込んで、実行結果を`out.txt`に出力するように、プログラムを実行する

   ※ 実行ファイルと入力ファイルが同一ディレクトリにある必要があります

    コマンドプロンプトなどの場合
    ```
    ./a.out < in.txt > out.txt
    ```
    PowerShellの場合(拡張子がoutの場合は動かないため注意してください)
    ```
    cat in.txt | ./a.exe > out.txt
    ```

## Java

1. ソースコードをコンパイルする

    ```
    javac Main.java
    ```

1. キーボード入力の代わりに`in.txt`を読み込んで、実行結果を`out.txt`に出力するように、プログラムを実行する
 
   ※ 実行ファイルと入力ファイルが同一ディレクトリにある必要があります

    コマンドプロンプトなどの場合
    ```
    java Main < in.txt > out.txt
    ```
    PowerShellの場合
    ```
    cat in.txt | java Main > out.txt
    ```

## Python3

Python3では、プログラムをコンパイルする必要はありません。

1. キーボード入力の代わりに`in.txt`を読み込んで、実行結果を`out.txt`に出力するように、プログラムを実行する

   ※ 実行ファイルと入力ファイルが同一ディレクトリにある必要があります

    コマンドプロンプトなどの場合
    ```
    python3 a.py < in.txt > out.txt
    ```
    PowerShellの場合
    ```
    cat in.txt | python3 a.py > out.txt
    ```


## C++ / Ruby / 他

上記を参考に、自分で調べてください。

## 提出方法についての注意

解答を提出する際は、**上記のAnswer Bookを参考に、`in.txt`を入力して`out.txt`を出力するようにプログラムを実行して、`out.txt`の中身をテキストボックスに貼り付ける** 方法を強く推奨します。

*1. 実行結果を`out.txt`に出力せずに画面に表示してしまうと、表示される内容が多すぎて、画面からコピーすることが難しいためです。

*2. out.txtの内容をコピーした際に、一部の文字が選択範囲から抜けていた場合は不正解となります。出力内容が全てコピーされていることを確認してください。

*3. ファイル末尾の改行の有無は、正解不正解には影響しません。

# Answer Book[ブラウザ上での開発環境を使用する場合の例]
[Practice ContestのA問題、A＋B](https://wpcs2.herokuapp.com/contests/5/problems/19)における同じ名前の章を参考にしてください。
