#!/usr/bin/env python3
T = int(input())
for _ in range(T):
    N = int(input())
    L = list(map(int, input().split()))
    answer = []
    misw = 0
    for l in L:
        misw += l
        answer.append(misw)
    print(*answer)
