#!/usr/bin/env python3
T = int(input())
for testcase in range(1, T+1):
    A, B = map(int, input().split())
    print(f"Case #{testcase}: {A * B}")
