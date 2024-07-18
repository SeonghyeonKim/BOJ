from decimal import *
getcontext().prec=34
a, b, c = map(int, input().split())
a = Decimal(a)
b = Decimal(b)
c = Decimal(c)
print(a*b/c)