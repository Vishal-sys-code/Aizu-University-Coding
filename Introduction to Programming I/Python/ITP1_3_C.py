import sys

def main():
    for line in sys.stdin:
        a, b = map(int, line.split())
        if a == 0 and b == 0:
            break
        if a > b:
            a, b = b, a
        print(a, b)

if __name__ == "__main__":
    main()