#Bohdan Vakaliuk FICT 2019 All rights are reserved. ©

import random
size = int(input("Enter size: "))
matrix = [[random.randrange(-10,10) for y in range(size)] for x in range(size)]
print(matrix)

#finding the biggest element
max_el = -11
big_x = 0
big_y = 0
for a in range(size):
    for b in range(size):
        if abs(matrix[a][b]) > max_el:
            max_el = abs(matrix[a][b])
            big_x = a
            big_y = b
print(max_el)
print(big_x)
print(big_y)

# changing the matrix
del matrix[big_x]
for i in range(size - 1):
    del matrix[i][big_y]
print(matrix)
