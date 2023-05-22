L1 = [1, 2, 3, 5]
L2 = L1 # defining by reference not by copy like in c++
print(L2)
print(id(L1))
print(id(L2)) # both variable are refering to the same piece of memory
L2[2:] = [0, 0, 0, 0, 0, 0] # by mutating one variable changes are seen in both variable
print(id(L2))
print(L1)
print(L2)

print('\n ---------------- ')
L1 = [1, 2, 3, 5] # overwriting variable with const assignes new id/adress in memory
L2 = L1
print(id(L1))
print(id(L2))
L2 = [0, 0, 0, 0, 0] # overwriting variable that is refering to different variable "breaks" reference and assignes new id
print(L1)
print(L2)
print(id(L2))