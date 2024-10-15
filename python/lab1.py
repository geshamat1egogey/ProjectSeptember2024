import Module

print("Введите x:")
x = Module.inp()

print("Введите y:")
y = Module.inp()

s_list = [0]
f_list = [0]
s_list[0] = Module.funcS(x)
Module.funcF(x, y, f_list)
Module.funcSF(x, y, s_list, f_list)

Module.outp(s_list[0], f_list[0])