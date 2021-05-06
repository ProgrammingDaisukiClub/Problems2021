#!/usr/bin/env python3
T = int(input())
for _ in range(T):
    A, B, M = map(int, input().split())
    print(A if A % M > B % M else B)
