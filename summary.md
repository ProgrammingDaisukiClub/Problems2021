# Project Status

このファイルは markdownify_full plugin により自動生成されています (rev.f4775e4 Merge pull request #25 from ProgrammingDaisukiClub/tossy, uploaded by emtsubasa @ DESKTOP-K8H6ARU)

## Summary

問題|担当|解答|入力|出力|入検|出検
:---|:---|:---|:---|:---|:---|:---
A: A times B|toma| :white_check_mark: 3+1| :white_check_mark: 13| :white_check_mark: 3/3| :white_check_mark: | :wavy_dash: 
B: Max mod M|Hyado,tomato,tsubasa| :white_check_mark: 4+1| :white_check_mark: 13| :white_check_mark: 4/4| :white_check_mark: | :wavy_dash: 
C: MIRA HQ|shiro,bayashiko| :white_check_mark: 4+0| :white_check_mark: 13| :white_check_mark: 4/4| :white_check_mark: | :wavy_dash: 
D: 車の集計|kumachan,Lgeu| :white_check_mark: 4+0| :white_check_mark: 13| :white_check_mark: 4/4| :white_check_mark: | :wavy_dash: 
E: 論文サーベイ|tsubasa,suzu| :white_check_mark: 6+0| :white_check_mark: 13| :white_check_mark: 6/6| :white_check_mark: | :wavy_dash: 
F: もふもふもふふ|suzu,tsubasa| :white_check_mark: 5+1| :white_check_mark: 13| :white_check_mark: 5/5| :white_check_mark: | :wavy_dash: 
G: 文字列の問題|Lgeu,kumachan| :white_check_mark: 4+3| :white_check_mark: 13| :white_check_mark: 4/4| :white_check_mark: | :wavy_dash: 
H: さいごのかいろう|bayashiko,shiro| :white_check_mark: 4+1| :x: 3| :white_check_mark: 4/4| :white_check_mark: | :wavy_dash: 
I: The Best Base|Hyado,tomato| :white_check_mark: 4+2| :white_check_mark: 13| :white_check_mark: 4/4| :white_check_mark: | :x: 

## Environments

- gcc
	- gcc (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0
Copyright (C) 2017 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

- g++
	- g++ (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0
Copyright (C) 2017 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

- javac
	- javac 11.0.10
- java
	- openjdk version "11.0.10" 2021-01-19
OpenJDK Runtime Environment (build 11.0.10+9-Ubuntu-0ubuntu1.18.04)
OpenJDK 64-Bit Server VM (build 11.0.10+9-Ubuntu-0ubuntu1.18.04, mixed mode, sharing)

## Detail

### A: A times B

testcase|in|diff|md5|C toma AC|Cpp tossy AC|Python Lgeu WA|Python tsubasa AC|Comments
|:---|:---|:---|:---|:---|:---|:---|:---|:---
large|523B|418B|`1aec8df`| :white_check_mark: 0.02s| :white_check_mark: 0.03s| :x: Wrong Answer| :white_check_mark: 0.06s|
random test0|525B|424B|`710ee75`| :white_check_mark: 0.02s| :white_check_mark: 0.03s| :x: Wrong Answer| :white_check_mark: 0.09s|
random test1|531B|432B|`16059e7`| :white_check_mark: 0.02s| :white_check_mark: 0.06s| :x: Wrong Answer| :white_check_mark: 0.08s|
random test2|534B|438B|`39c538f`| :white_check_mark: 0.02s| :white_check_mark: 0.03s| :x: Wrong Answer| :white_check_mark: 0.07s|
random test3|546B|429B|`661c99b`| :white_check_mark: 0.02s| :white_check_mark: 0.02s| :x: Wrong Answer| :white_check_mark: 0.06s|
random test4|530B|423B|`aab5fe5`| :white_check_mark: 0.02s| :white_check_mark: 0.02s| :x: Wrong Answer| :white_check_mark: 0.06s|
random test5|531B|432B|`1d7d487`| :white_check_mark: 0.02s| :white_check_mark: 0.03s| :x: Wrong Answer| :white_check_mark: 0.07s|
random test6|530B|424B|`5a6d2dd`| :white_check_mark: 0.02s| :white_check_mark: 0.02s| :x: Wrong Answer| :white_check_mark: 0.07s|
random test7|526B|418B|`b0b6554`| :white_check_mark: 0.02s| :white_check_mark: 0.03s| :x: Wrong Answer| :white_check_mark: 0.11s|
random test8|526B|424B|`3fe82b9`| :white_check_mark: 0.03s| :white_check_mark: 0.04s| :x: Wrong Answer| :white_check_mark: 0.08s|
random test9|529B|430B|`ec01acf`| :white_check_mark: 0.02s| :white_check_mark: 0.03s| :x: Wrong Answer| :white_check_mark: 0.06s|
sample|20B|12B|`318e5ea`| :white_check_mark: 0.02s| :white_check_mark: 0.02s| :x: Wrong Answer| :white_check_mark: 0.07s|
small|93B|68B|`802fa8b`| :white_check_mark: 0.02s| :white_check_mark: 0.03s| :x: Wrong Answer| :white_check_mark: 0.05s|

### B: Max mod M

testcase|in|diff|md5|C toma AC|C toma WA|Cpp tossy AC|Java suzu AC|Python Lgeu AC|Comments
|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---
large|883B|298B|`d4624cc`| :white_check_mark: 0.02s| :x: Wrong Answer| :white_check_mark: 0.03s| :white_check_mark: 0.29s| :white_check_mark: 0.06s|
random test0|884B|296B|`342c5c8`| :white_check_mark: 0.02s| :x: Wrong Answer| :white_check_mark: 0.04s| :white_check_mark: 0.21s| :white_check_mark: 0.06s|
random test1|885B|299B|`65969a3`| :white_check_mark: 0.02s| :x: Wrong Answer| :white_check_mark: 0.02s| :white_check_mark: 0.24s| :white_check_mark: 0.07s|
random test2|878B|300B|`e089a84`| :white_check_mark: 0.02s| :x: Wrong Answer| :white_check_mark: 0.03s| :white_check_mark: 0.25s| :white_check_mark: 0.06s|
random test3|882B|297B|`aff7309`| :white_check_mark: 0.02s| :x: Wrong Answer| :white_check_mark: 0.02s| :white_check_mark: 0.20s| :white_check_mark: 0.06s|
random test4|879B|299B|`7030fc8`| :white_check_mark: 0.02s| :x: Wrong Answer| :white_check_mark: 0.02s| :white_check_mark: 0.21s| :white_check_mark: 0.06s|
random test5|884B|298B|`ddf6e7e`| :white_check_mark: 0.02s| :x: Wrong Answer| :white_check_mark: 0.02s| :white_check_mark: 0.22s| :white_check_mark: 0.06s|
random test6|879B|296B|`e646fbe`| :white_check_mark: 0.02s| :x: Wrong Answer| :white_check_mark: 0.02s| :white_check_mark: 0.27s| :white_check_mark: 0.07s|
random test7|888B|300B|`6d64d68`| :white_check_mark: 0.02s| :x: Wrong Answer| :white_check_mark: 0.02s| :white_check_mark: 0.25s| :white_check_mark: 0.07s|
random test8|883B|299B|`d41c5a9`| :white_check_mark: 0.02s| :x: Wrong Answer| :white_check_mark: 0.02s| :white_check_mark: 0.29s| :white_check_mark: 0.07s|
random test9|877B|298B|`2329b66`| :white_check_mark: 0.02s| :x: Wrong Answer| :white_check_mark: 0.03s| :white_check_mark: 0.21s| :white_check_mark: 0.06s|
sample|20B|6B|`67a3c6e`| :white_check_mark: 0.01s| :x: Wrong Answer| :white_check_mark: 0.02s| :white_check_mark: 0.15s| :white_check_mark: 0.05s|
small|93B|29B|`50da551`| :white_check_mark: 0.02s| :x: Wrong Answer| :white_check_mark: 0.02s| :white_check_mark: 0.19s| :white_check_mark: 0.05s|

### C: MIRA HQ

testcase|in|diff|md5|C shiro AC|Cpp tossy AC|Python Lgeu AC|Python suzu AC|Comments
|:---|:---|:---|:---|:---|:---|:---|:---|:---
large|24453B|32692B|`759919a`| :white_check_mark: 0.02s| :white_check_mark: 0.06s| :white_check_mark: 0.07s| :white_check_mark: 0.07s|
random test0|29513B|47855B|`d359206`| :white_check_mark: 0.02s| :white_check_mark: 0.15s| :white_check_mark: 0.08s| :white_check_mark: 0.06s|
random test1|29501B|47869B|`8f9ff59`| :white_check_mark: 0.02s| :white_check_mark: 0.10s| :white_check_mark: 0.07s| :white_check_mark: 0.07s|
random test2|29471B|47863B|`b514f1a`| :white_check_mark: 0.02s| :white_check_mark: 0.12s| :white_check_mark: 0.06s| :white_check_mark: 0.08s|
random test3|29557B|47891B|`2f16d93`| :white_check_mark: 0.02s| :white_check_mark: 0.11s| :white_check_mark: 0.06s| :white_check_mark: 0.07s|
random test4|29491B|47843B|`3537b8e`| :white_check_mark: 0.02s| :white_check_mark: 0.12s| :white_check_mark: 0.06s| :white_check_mark: 0.06s|
random test5|29522B|47864B|`fc3f9ba`| :white_check_mark: 0.02s| :white_check_mark: 0.09s| :white_check_mark: 0.06s| :white_check_mark: 0.06s|
random test6|29461B|47868B|`e21ff3d`| :white_check_mark: 0.02s| :white_check_mark: 0.10s| :white_check_mark: 0.07s| :white_check_mark: 0.07s|
random test7|29521B|47819B|`fb40a8e`| :white_check_mark: 0.02s| :white_check_mark: 0.10s| :white_check_mark: 0.06s| :white_check_mark: 0.07s|
random test8|29480B|47855B|`0c99d2e`| :white_check_mark: 0.02s| :white_check_mark: 0.10s| :white_check_mark: 0.07s| :white_check_mark: 0.06s|
random test9|29538B|47882B|`c98ca1e`| :white_check_mark: 0.02s| :white_check_mark: 0.09s| :white_check_mark: 0.08s| :white_check_mark: 0.06s|
sample|15B|8B|`50d40d1`| :white_check_mark: 0.02s| :white_check_mark: 0.02s| :white_check_mark: 0.09s| :white_check_mark: 0.05s|
small|142B|145B|`5f619d4`| :white_check_mark: 0.02s| :white_check_mark: 0.02s| :white_check_mark: 0.11s| :white_check_mark: 0.07s|

### D: 車の集計

testcase|in|diff|md5|C kumachan AC|Cpp tossy AC|JS Lgeu AC|Python Lgeu AC|Comments
|:---|:---|:---|:---|:---|:---|:---|:---|:---
large|1050894B|975B|`7e80c57`| :white_check_mark: 0.07s| :white_check_mark: 0.12s| :white_check_mark: 0.50s| :white_check_mark: 0.21s|
random test0|1006212B|956B|`27bdec6`| :white_check_mark: 0.08s| :white_check_mark: 0.11s| :white_check_mark: 0.50s| :white_check_mark: 0.20s|
random test1|1083661B|980B|`a5f005c`| :white_check_mark: 0.08s| :white_check_mark: 0.11s| :white_check_mark: 0.52s| :white_check_mark: 0.22s|
random test2|1019051B|963B|`07b290c`| :white_check_mark: 0.07s| :white_check_mark: 0.13s| :white_check_mark: 0.51s| :white_check_mark: 0.20s|
random test3|1059748B|954B|`09275e0`| :white_check_mark: 0.08s| :white_check_mark: 0.11s| :white_check_mark: 0.53s| :white_check_mark: 0.21s|
random test4|1030320B|977B|`b505d9d`| :white_check_mark: 0.08s| :white_check_mark: 0.10s| :white_check_mark: 0.57s| :white_check_mark: 0.19s|
random test5|909799B|956B|`3573b6f`| :white_check_mark: 0.06s| :white_check_mark: 0.09s| :white_check_mark: 0.51s| :white_check_mark: 0.18s|
random test6|982866B|965B|`ac46693`| :white_check_mark: 0.07s| :white_check_mark: 0.10s| :white_check_mark: 0.56s| :white_check_mark: 0.20s|
random test7|1027627B|972B|`f4ba1ce`| :white_check_mark: 0.07s| :white_check_mark: 0.10s| :white_check_mark: 0.55s| :white_check_mark: 0.23s|
random test8|934489B|951B|`eadb503`| :white_check_mark: 0.08s| :white_check_mark: 0.09s| :white_check_mark: 0.50s| :white_check_mark: 0.18s|
random test9|1029319B|966B|`3b255bb`| :white_check_mark: 0.08s| :white_check_mark: 0.10s| :white_check_mark: 0.69s| :white_check_mark: 0.22s|
sample|12B|4B|`3b7128b`| :white_check_mark: 0.02s| :white_check_mark: 0.02s| :white_check_mark: 0.45s| :white_check_mark: 0.06s|
small|5280B|283B|`9bad4a2`| :white_check_mark: 0.02s| :white_check_mark: 0.02s| :white_check_mark: 0.42s| :white_check_mark: 0.11s|

### E: 論文サーベイ

testcase|in|diff|md5|C suzu AC|C tsubasa AC|Cpp tossy AC|Java suzu AC|Java suzu AC sort|Python Lgeu AC|Comments
|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---
large|1434923B|2216B|`e8cce92`| :white_check_mark: 0.20s| :white_check_mark: 0.10s| :white_check_mark: 0.14s| :white_check_mark: 0.68s| :white_check_mark: 0.83s| :white_check_mark: 0.49s|
random test0|1452232B|2210B|`05f5fb0`| :white_check_mark: 0.20s| :white_check_mark: 0.10s| :white_check_mark: 0.17s| :white_check_mark: 0.66s| :white_check_mark: 0.74s| :white_check_mark: 0.42s|
random test1|1455006B|2236B|`a22ccb7`| :white_check_mark: 0.19s| :white_check_mark: 0.08s| :white_check_mark: 0.19s| :white_check_mark: 0.70s| :white_check_mark: 0.89s| :white_check_mark: 0.55s|
random test2|1466715B|2211B|`65d03d6`| :white_check_mark: 0.19s| :white_check_mark: 0.09s| :white_check_mark: 0.16s| :white_check_mark: 0.69s| :white_check_mark: 0.88s| :white_check_mark: 1.12s|
random test3|1439948B|2237B|`eaa19c2`| :white_check_mark: 0.19s| :white_check_mark: 0.08s| :white_check_mark: 0.16s| :white_check_mark: 0.84s| :white_check_mark: 1.62s| :white_check_mark: 0.42s|
random test4|1444586B|2237B|`5d86a7d`| :white_check_mark: 0.20s| :white_check_mark: 0.08s| :white_check_mark: 0.13s| :white_check_mark: 0.77s| :white_check_mark: 2.27s| :white_check_mark: 0.48s|
random test5|1455705B|2236B|`62f9688`| :white_check_mark: 0.19s| :white_check_mark: 0.06s| :white_check_mark: 0.16s| :white_check_mark: 0.80s| :white_check_mark: 2.70s| :white_check_mark: 0.42s|
random test6|1452273B|2198B|`9d81605`| :white_check_mark: 0.20s| :white_check_mark: 0.11s| :white_check_mark: 0.15s| :white_check_mark: 0.72s| :white_check_mark: 1.68s| :white_check_mark: 0.41s|
random test7|1452285B|2200B|`f6abb22`| :white_check_mark: 0.22s| :white_check_mark: 0.10s| :white_check_mark: 0.16s| :white_check_mark: 0.68s| :white_check_mark: 2.38s| :white_check_mark: 0.41s|
random test8|1454760B|2205B|`6fd5eba`| :white_check_mark: 0.23s| :white_check_mark: 0.08s| :white_check_mark: 0.15s| :white_check_mark: 0.66s| :white_check_mark: 1.49s| :white_check_mark: 0.46s|
random test9|1445390B|2214B|`e77b0f9`| :white_check_mark: 0.45s| :white_check_mark: 0.09s| :white_check_mark: 0.14s| :white_check_mark: 0.88s| :white_check_mark: 1.26s| :white_check_mark: 0.35s|
sample|54B|9B|`9034287`| :white_check_mark: 0.03s| :white_check_mark: 0.03s| :white_check_mark: 0.02s| :white_check_mark: 0.29s| :white_check_mark: 0.29s| :white_check_mark: 0.14s|
small|454B|37B|`0556f37`| :white_check_mark: 0.04s| :white_check_mark: 0.02s| :white_check_mark: 0.02s| :white_check_mark: 0.35s| :white_check_mark: 0.79s| :white_check_mark: 0.13s|

### F: もふもふもふふ

testcase|in|diff|md5|Bash Lgeu AC|C suzu AC|C suzu WA|Cpp tossy AC|Java tsubasa ac|Python Lgeu AC|Comments
|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---
large|53895B|3522B|`66dd2eb`| :white_check_mark: 0.12s| :white_check_mark: 0.02s| :x: Wrong Answer| :white_check_mark: 0.04s| :white_check_mark: 0.39s| :white_check_mark: 0.08s|
random test0|55128B|3521B|`7d4332a`| :white_check_mark: 0.07s| :white_check_mark: 0.02s| :x: Wrong Answer| :white_check_mark: 0.04s| :white_check_mark: 0.32s| :white_check_mark: 0.09s|
random test1|54771B|3524B|`48d9b6c`| :white_check_mark: 0.08s| :white_check_mark: 0.02s| :x: Wrong Answer| :white_check_mark: 0.03s| :white_check_mark: 0.27s| :white_check_mark: 0.10s|
random test2|54780B|3541B|`362647e`| :white_check_mark: 0.08s| :white_check_mark: 0.02s| :x: Wrong Answer| :white_check_mark: 0.03s| :white_check_mark: 0.32s| :white_check_mark: 0.08s|
random test3|55401B|3505B|`05f789b`| :white_check_mark: 0.06s| :white_check_mark: 0.02s| :x: Wrong Answer| :white_check_mark: 0.03s| :white_check_mark: 0.31s| :white_check_mark: 0.08s|
random test4|54370B|3502B|`50999af`| :white_check_mark: 0.05s| :white_check_mark: 0.02s| :x: Wrong Answer| :white_check_mark: 0.03s| :white_check_mark: 0.27s| :white_check_mark: 0.10s|
random test5|55413B|3477B|`c0d7dec`| :white_check_mark: 0.09s| :white_check_mark: 0.02s| :x: Wrong Answer| :white_check_mark: 0.04s| :white_check_mark: 0.28s| :white_check_mark: 0.09s|
random test6|54124B|3516B|`94fab1e`| :white_check_mark: 0.06s| :white_check_mark: 0.02s| :x: Wrong Answer| :white_check_mark: 0.04s| :white_check_mark: 0.25s| :white_check_mark: 0.09s|
random test7|55110B|3474B|`ce13560`| :white_check_mark: 0.06s| :white_check_mark: 0.02s| :x: Wrong Answer| :white_check_mark: 0.04s| :white_check_mark: 0.26s| :white_check_mark: 0.08s|
random test8|55628B|3505B|`7f7dc0e`| :white_check_mark: 0.05s| :white_check_mark: 0.02s| :x: Wrong Answer| :white_check_mark: 0.04s| :white_check_mark: 0.27s| :white_check_mark: 0.08s|
random test9|56002B|3519B|`53bc35d`| :white_check_mark: 0.05s| :white_check_mark: 0.02s| :x: Wrong Answer| :white_check_mark: 0.04s| :white_check_mark: 0.28s| :white_check_mark: 0.09s|
sample|47B|11B|`9e57534`| :white_check_mark: 0.06s| :white_check_mark: 0.02s| :x: Wrong Answer| :white_check_mark: 0.02s| :white_check_mark: 0.17s| :white_check_mark: 0.08s|
small|258B|37B|`d6d8054`| :white_check_mark: 0.06s| :white_check_mark: 0.02s| :x: Wrong Answer| :white_check_mark: 0.02s| :white_check_mark: 0.17s| :white_check_mark: 0.07s|

### G: 文字列の問題

testcase|in|diff|md5|C Lgeu AC|C Lgeu WA1|C Lgeu WA2|C Lgeu WA3|Cpp tossy AC|Java kumachan AC|Python Lgeu AC|Comments
|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---
large|18840B|3361B|`d2ad555`| :white_check_mark: 0.02s| :x: Wrong Answer| :x: Wrong Answer| :x: Wrong Answer| :white_check_mark: 0.04s| :white_check_mark: 0.48s| :white_check_mark: 0.10s|
random test0|18860B|3358B|`df390b4`| :white_check_mark: 0.02s| :x: Wrong Answer| :x: Wrong Answer| :x: Wrong Answer| :white_check_mark: 0.03s| :white_check_mark: 0.30s| :white_check_mark: 0.11s|
random test1|18891B|3347B|`a192d47`| :white_check_mark: 0.02s| :x: Wrong Answer| :x: Wrong Answer| :x: Wrong Answer| :white_check_mark: 0.06s| :white_check_mark: 0.31s| :white_check_mark: 0.09s|
random test2|18872B|3360B|`b8a2d77`| :white_check_mark: 0.02s| :x: Wrong Answer| :x: Wrong Answer| :x: Wrong Answer| :white_check_mark: 0.06s| :white_check_mark: 0.28s| :white_check_mark: 0.08s|
random test3|18874B|3361B|`ddc8afb`| :white_check_mark: 0.02s| :x: Wrong Answer| :x: Wrong Answer| :x: Wrong Answer| :white_check_mark: 0.06s| :white_check_mark: 0.28s| :white_check_mark: 0.09s|
random test4|18870B|3361B|`7ed5ce6`| :white_check_mark: 0.02s| :x: Wrong Answer| :x: Wrong Answer| :x: Wrong Answer| :white_check_mark: 0.06s| :white_check_mark: 0.30s| :white_check_mark: 0.12s|
random test5|18818B|3354B|`c28c8b5`| :white_check_mark: 0.02s| :x: Wrong Answer| :x: Wrong Answer| :x: Wrong Answer| :white_check_mark: 0.05s| :white_check_mark: 0.27s| :white_check_mark: 0.09s|
random test6|18879B|3345B|`9751894`| :white_check_mark: 0.02s| :x: Wrong Answer| :x: Wrong Answer| :x: Wrong Answer| :white_check_mark: 0.05s| :white_check_mark: 0.30s| :white_check_mark: 0.09s|
random test7|18881B|3365B|`d04ce5e`| :white_check_mark: 0.02s| :x: Wrong Answer| :x: Wrong Answer| :x: Wrong Answer| :white_check_mark: 0.04s| :white_check_mark: 0.27s| :white_check_mark: 0.09s|
random test8|18854B|3380B|`c3df8c6`| :white_check_mark: 0.02s| :x: Wrong Answer| :x: Wrong Answer| :x: Wrong Answer| :white_check_mark: 0.04s| :white_check_mark: 0.26s| :white_check_mark: 0.10s|
random test9|18861B|3347B|`4fe62a6`| :white_check_mark: 0.02s| :x: Wrong Answer| :x: Wrong Answer| :x: Wrong Answer| :white_check_mark: 0.04s| :white_check_mark: 0.29s| :white_check_mark: 0.08s|
sample|82B|28B|`fbe9d20`| :white_check_mark: 0.02s| :x: Wrong Answer| :x: Wrong Answer| :x: Wrong Answer| :white_check_mark: 0.02s| :white_check_mark: 0.18s| :white_check_mark: 0.06s|
small|364B|68B|`e72a04e`| :white_check_mark: 0.02s| :x: Wrong Answer| :x: Wrong Answer| :x: Wrong Answer| :white_check_mark: 0.02s| :white_check_mark: 0.19s| :white_check_mark: 0.06s|

### H: さいごのかいろう

testcase|in|diff|md5|C bayashiko AC|C bayashiko AC2|Cpp tossy AC|Cpp tossy WA|Python Lgeu AC|Comments
|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---
large|804776B|176B|`5fdf37e`| :white_check_mark: 0.09s| :white_check_mark: 0.79s| :white_check_mark: 1.35s| :x: Wrong Answer| :white_check_mark: 0.15s|
sample|127B|11B|`11587fc`| :white_check_mark: 0.02s| :white_check_mark: 0.02s| :white_check_mark: 0.02s| :white_check_mark: 0.02s| :white_check_mark: 0.06s|
small|191B|35B|`60043dc`| :white_check_mark: 0.02s| :white_check_mark: 0.02s| :white_check_mark: 0.02s| :white_check_mark: 0.02s| :white_check_mark: 0.06s|

### I: The Best Base

testcase|in|diff|md5|C shiro AC|C tsubasa AC|Cpp Lgeu TLE|Cpp tossy AC|Python Lgeu AC|Python Lgeu WA|Comments
|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---
large|263652B|398B|`c66b417`| :white_check_mark: 0.09s| :white_check_mark: 0.08s| :x: Time Limit Exceeded| :white_check_mark: 0.10s| :white_check_mark: 6.08s| :x: Wrong Answer|
random test0|269384B|399B|`7ceb900`| :white_check_mark: 0.10s| :white_check_mark: 0.07s| :x: Time Limit Exceeded| :white_check_mark: 0.11s| :white_check_mark: 6.89s| :x: Wrong Answer|
random test1|277053B|400B|`9aac204`| :white_check_mark: 0.10s| :white_check_mark: 0.08s| :x: Time Limit Exceeded| :white_check_mark: 0.10s| :white_check_mark: 6.35s| :x: Wrong Answer|
random test2|274923B|400B|`cb1ed91`| :white_check_mark: 0.09s| :white_check_mark: 0.08s| :x: Time Limit Exceeded| :white_check_mark: 0.10s| :white_check_mark: 6.25s| :x: Wrong Answer|
random test3|260784B|399B|`3159c5a`| :white_check_mark: 0.09s| :white_check_mark: 0.08s| :x: Time Limit Exceeded| :white_check_mark: 0.11s| :white_check_mark: 7.10s| :x: Wrong Answer|
random test4|276323B|399B|`8f1aea6`| :white_check_mark: 0.09s| :white_check_mark: 0.10s| :x: Time Limit Exceeded| :white_check_mark: 0.10s| :white_check_mark: 7.40s| :x: Wrong Answer|
random test5|265397B|400B|`5bb34f0`| :white_check_mark: 0.09s| :white_check_mark: 0.08s| :x: Time Limit Exceeded| :white_check_mark: 0.11s| :white_check_mark: 6.57s| :x: Wrong Answer|
random test6|267028B|398B|`3dd73c0`| :white_check_mark: 0.10s| :white_check_mark: 0.10s| :x: Time Limit Exceeded| :white_check_mark: 0.14s| :white_check_mark: 6.32s| :x: Wrong Answer|
random test7|265895B|399B|`ce2d0b8`| :white_check_mark: 0.09s| :white_check_mark: 0.09s| :x: Time Limit Exceeded| :white_check_mark: 0.12s| :white_check_mark: 6.23s| :x: Wrong Answer|
random test8|273305B|399B|`d9fed54`| :white_check_mark: 0.09s| :white_check_mark: 0.08s| :x: Time Limit Exceeded| :white_check_mark: 0.14s| :white_check_mark: 6.55s| :x: Wrong Answer|
random test9|271619B|399B|`277100e`| :white_check_mark: 0.10s| :white_check_mark: 0.08s| :x: Time Limit Exceeded| :white_check_mark: 0.12s| :white_check_mark: 6.67s| :x: Wrong Answer|
sample|34B|2B|`1eb3097`| :white_check_mark: 0.02s| :white_check_mark: 0.02s| :white_check_mark: 0.02s| :white_check_mark: 0.02s| :white_check_mark: 0.06s| :white_check_mark: 0.08s|
small|754B|26B|`eac196d`| :white_check_mark: 0.02s| :white_check_mark: 0.02s| :white_check_mark: 0.02s| :white_check_mark: 0.03s| :white_check_mark: 0.07s| :x: Wrong Answer|

