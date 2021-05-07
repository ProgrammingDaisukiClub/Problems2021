#!/usr/bin/env python3
dys = [0, 1, 0, -1]
dxs = [1, 0, -1, 0]
T = int(input())
for _ in range(T):
    N = int(input())
    A = [input() for _ in range(N)]
    sum_distances = [[0] * N for _ in range(N)]
    Q = int(input())
    for _ in range(Q):
        R, C = map(int, input().split())
        searched = [[False] * N for _ in range(N)]
        q = [(R - 1, C - 1, 0)]
        for r, c, distance in q:
            if searched[r][c]:
                continue
            searched[r][c] = True
            sum_distances[r][c] += distance
            for dy, dx in zip(dys, dxs):
                r_next = r + dy
                c_next = c + dx
                if 0 <= r_next < N and 0 <= c_next < N and A[r_next][c_next] == ".":
                    q.append((r_next, c_next, distance + 1))
    ans = min(dyx for dy, Ay in zip(sum_distances, A) for dyx, Ayx in zip(dy, Ay) if Ayx == ".")
    print(ans)
