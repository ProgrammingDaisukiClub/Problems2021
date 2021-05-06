#!/usr/bin/env python3
T = int(input())
for _ in range(T):
    N = int(input())
    X = list(map(int, input().split()))
    L = R = 0
    for x in X:
        if x == 0:
            L += 1
        elif x == 1:
            R += 1
        else:
            L += 1
            R += 1
    print(L, R)
