#!/usr/bin/python3

import sys

def main():
    filename: str = sys.argv[1]
    p: int = 0
    q: int = 0
    n: str = 0

    with open(filename) as f:
        contents = f.read()

    for num in contents.splitlines():
        n = int(num)
        if n % 2 == 0:
            p, q = 2, n // 2
        else:
            for p in range(3, (n // 2) + 1, 2):
                if (n % p == 0):
                    q = n // p
                    break
        if (p > q):
            print("{:d}={:d}*{:d}".format(n, p, q))
        else:
            print("{:d}={:d}*{:d}".format(n, q, p))
    return (0)

if __name__ == "__main__":
    exit(main())
