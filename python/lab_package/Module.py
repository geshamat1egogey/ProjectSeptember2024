from math import *

def inp():
    return float(input())

def outp(x, y):
    print(x, y)

def funcS(x):
    s = log(cos(x))/log(1 + x**2)
    return s

def funcF(x, y, f):
    f[0] = ((x + 1)/(x - 1))**x + 18*x*y**2
    
def funcSF(x, y, s, f):
    s[0] = log(cos(x))/log(1 + x**2)
    f[0] = ((x + 1)/(x - 1))**x + 18*x*y**2
    