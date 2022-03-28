# Enter your code here. Read input from STDIN. Print output to STDOUT


R, C = map(int, input().split())

for i in range(int(R/2)):
    string = ".|." * (2 * i + 1)
    x = string.center(C, '-')
    print(x)

print("WELCOME".center(C, '-'))

for i in reversed(range(int(R/2))):
    string = ".|." * (2 * i + 1)
    x = string.center(C, '-')
    print(x)