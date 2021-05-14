#!/usr/local/bin/python3
# -*- coding: utf-8 -*-

def main():
    T = int(input())
    for _ in range(T):
        N = int(input())
        L = list(map(int, input().split()))
        ans = 0
        for i in range(N):
            if i != 0:
                print(end=" ")
            ans += L[i]
            print(ans, end="")
        print()


if __name__ == '__main__':
    main()
