# Enter your code here. Read input from STDIN. Print output to STDOUT

import math

ab= int(input())
bc= int(input())

ac = math.hypot(ab,bc)     #to calculate hypotenuse


#sin theta =cm/bc

theta= round( math.degrees(math.acos(bc/ac)))


print(str(theta)+chr(176))

