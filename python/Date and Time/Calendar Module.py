# Enter your code here. Read input from STDIN. Print output to STDOUT

import calendar

MONTH, DAY, YEAR = map(int, input().split())

print(calendar.day_name[calendar.weekday(YEAR, MONTH, DAY)].upper())