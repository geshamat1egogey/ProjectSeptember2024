from math import *
def funcS(x):
    s = log(cos(x))/log(1 + x**2)
    return s

def funcF(x,y):
    f = ((x + 1)/(x - 1))**x + 18*x*y**2
    return f