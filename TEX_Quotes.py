import sys


def main():
    flag = 0
    for c in sys.stdin.read():
        if c == '"':
            flag = flag * -1
            if flag == - 1:
                print("``")
            else:
                print("''")
        else:
            print(c)

main()