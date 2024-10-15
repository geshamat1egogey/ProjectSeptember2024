from math import *

print("Введите x:")
x = float(input())

print("Введите y:")
y = float(input())

s = log(cos(x))/log(1 + x**2)
f = ((x + 1)/(x - 1))**x + 18*x*y**2

print(s,f)