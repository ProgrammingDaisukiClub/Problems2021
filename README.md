# Problems2021
Problems for Waseda CS orientation 2021

**[作業進捗MD](summary.md)**

## 命名規則等
#### ブランチ名
```
[A-J]-ハイフン区切り問題名
```

例
```
A-A-plus-B
```

#### ディレクトリ構成
```
[A-J]-ハイフン区切り問題名
    statement.md
    PROBLEM
    言語-解いた人の名前-想定されるステータス(AC,WA,TLE)
        main.拡張子
        SOLUTION
```

#### PRタイトル
```
feat(problem[A-J]): 問題名
```

例
```
feat(problemA): A plus B
```

#### 注意事項
テストケース数は定数で作成  
問題文は全てですます調にする  
テストケースは1MBにおさめる  
TLは10秒に設定  
**問題文は制約含め日本語で(追加事項)**
**数式は前後にスペースを入れる(例:文字 $A$ 文字)**

## 担当
| 問題名 | 難易度 | 原案・問題文 | generator | validator | 備考,TODO |
|---------------------------|--------------|----------------------|-----------|------|---------|
| A: [AtimesB](./A-A-mul-B/statement.md) | 5-5 | tomato(Answerbook) | - | 昨年と同じ |
| B: [Max mod M](./B-Max-mod-M/statement.md) | 10-100 | Hyado | tomato | tsubasa | 問題文にヒント欄を用意し、%演算を明記する。 |
| C: [MIRA HQ](./C-MIRA_HQ/statement.md) | 10-100 | shiro | shiro | bayashiko | 最後に総和を出力する問題に変更 |
| D: [車の集計](./D-Highway/statement.md) | 20-200 | kumachan | kumachan | lgeu | 入力は数字で |
| E: [論文サーベイ](./E-Paper-Reading/statement.md) | 30-300 | tsubasa | tsubasa | suzu | 2本読む設定に |
| F: [mohumohu](./F-Mohumohumohuhu/statement.md) | 30-400 | suzu | suzu | tsubasa | (mohu)+のみを許す設定 |
| G: [うまぴょい](./G-Umapyoi/statement.md) | 40-400 | lgeu | lgeu | kumachan |  |
| H: [さいごのかいろう](./H-Last-Corridor/statement.md) | 60-650 | bayashiko | bayashiko | shiro |  |
| I: [The Best Base](./I-The-Best-Base/statement.md) | 60-700 | Hyado | Hyado | tomato | グリッドにする |
<!-- | J: [トレジャーハンター](./J-Okashi/statement.md) | 50-700-500 | yamad | tsubasa | - | -->
