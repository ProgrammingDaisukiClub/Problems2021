#!/usr/bin/env python3
import re
T = int(input())
for _ in range(T):
    A, B, C, D, E = map(int, input().split())
    print("Yes" if A == B + C + D and C + D == E else "No")
