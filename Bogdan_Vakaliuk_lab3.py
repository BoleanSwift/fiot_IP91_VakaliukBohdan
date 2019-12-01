from math import *
x = 0.56
znam = 0
for n in range (1,100):
    znam += sin(x) / n**2
y = round (znam,5)
print(y)