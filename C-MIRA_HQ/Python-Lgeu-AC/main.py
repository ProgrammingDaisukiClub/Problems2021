#!/usr/bin/env python3
T = int(input())
for _ in range(T):
    N = int(input())
    ans = sum(map(int, input().split()))
    print(ans)
