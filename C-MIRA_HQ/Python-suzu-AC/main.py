#!/usr/local/bin/python3
# -*- coding: utf-8 -*-

def main():
    T = int(input())
    for _ in range(T):
        N = int(input())
        L = list(map(int, input().split()))
        print(sum(L))


if __name__ == '__main__':
    main()
