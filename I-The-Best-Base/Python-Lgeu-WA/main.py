#!/usr/bin/env python3
dys = [0, 1, 0, -1]
dxs = [1, 0, -1, 0]
T = int(input())
for _ in range(T):
    N = int(input())
    A = [list(input()) for _ in range(N)]
    Q = int(input())
    RC = []
    for _ in range(Q):
        R, C = map(int, input().split())
        R -= 1
        C -= 1
        RC.append([R, C])
        A[R][C] = "*"
    answer = float("inf")
    for r, c in RC:
        searched = [[False] * N for _ in range(N)]
        q = [(R, C, 0)]
        visit_count = 0
        a = 0
        for r, c, distance in q:
            if searched[r][c]:
                continue
            searched[r][c] = True
            if A[r][c] == "*":
                visit_count += 1
                a += distance
                if visit_count == Q:
                    break
            for dy, dx in zip(dys, dxs):
                r_next = r + dy
                c_next = c + dx
                if 0 <= r_next < N and 0 <= c_next < N and A[r_next][c_next] != "#":
                    q.append((r_next, c_next, distance + 1))
        answer = min(answer, a)
    print(answer)
