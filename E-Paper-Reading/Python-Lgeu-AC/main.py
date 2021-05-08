#!/usr/bin/env python3
T = int(input())
for _ in range(T):
    N = int(input())
    A = list(map(int, input().split()))
    fastest = min(A)
    A.remove(fastest)
    second_fastest = min(A)
    answer = fastest + second_fastest
    print(answer)
