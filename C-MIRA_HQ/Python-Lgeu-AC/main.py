#!/usr/bin/env python3
T = int(input())
for _ in range(T):
    N = int(input())
    L = list(map(int, input().split()))
    misw = 0
    for l in L:
        misw += l
        print(misw)
