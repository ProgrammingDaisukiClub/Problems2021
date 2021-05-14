#!/usr/bin/env python3
import re
T = int(input())
for _ in range(T):
    N = int(input())
    S = input()
    print("Yes" if re.fullmatch(r"(mohu)+", S) else "No")
