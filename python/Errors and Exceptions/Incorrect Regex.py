# Enter your code here. Read input from STDIN. Print output to STDOUT

import re

n= int (input())
for _ in range(n):
    try:
        a = re.compile(input())
        print("True")
    except Exception:
        print("False")