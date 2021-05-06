#!/usr/bin/env python3
from heapq import heapify, heappush, heappop
T = int(input())
for _ in range(T):
    N, H, X = map(int, input().split())
    A = list(map(int, input().split()))
    D = list(map(int, input().split())) + [-1]
    q = [(-a, a, 0) for a in A]
    heapify(q)
    for _ in range(X):
        mdamage, a, idxD = heappop(q)
        damage = -mdamage
        H -= damage
        heappush(q, (-(a//D[idxD+1]), a, idxD+1))
    print("Yes" if H <= 0 else "No")
