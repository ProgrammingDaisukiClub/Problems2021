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

## 担当
| 問題名 | 難易度 | 原案・問題文 | generator | validator | 備考,TODO |
|---------------------------|--------------|----------------------|-----------|------|---------|
| A: [AtimesB](./A-A-mul-B/statement.md) | 5-5 | tomato(Answerbook) | - | 昨年と同じ |
| B: Max mod M |  | Hyado | tomato | tsubasa | 問題文にヒント欄を用意し、%演算を明記する。 |
| C: MIRA HQ |  | shiro | shiro | bayashiko | 最後に総和を出力する問題に変更 |
| D: 車の集計 |  | kumachan | kumachan | lgeu | 入力は数字で |
| E: 論文サーベイ |  | tsubasa | tsubasa | suzu | 2本読む設定に |
| F: mohumohu |  | suzu | suzu | tsubasa | (mohu)+のみを許す設定 |
| G: うまぴょい |  | lgeu | lgeu | kumachan |  |
| H: さいごのかいろう |  | bayashiko | bayashiko | shiro |  |
| I: The Best Base |  | Hyado | Hyado | tomato | グリッドにする |
<!-- | J: [トレジャーハンター](./J-Okashi/statement.md) | 50-700-500 | yamad | tsubasa | - | -->
