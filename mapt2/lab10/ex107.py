def myfun1(var_inside):
    var_inside = 2
    print("var_inside myfun1:" + str(var_inside))

def myfun2(list_inside):
    list_inside[2] = 0
    print("list_inside myfun2:" + str(list_inside))

def myfun3(list_inside):
    new_list = list_inside.copy()
    list_inside[3] = 0
    print("list_inside myfun3:" + str(list_inside))
    return new_list

var_outside = 1
myfun1(var_outside)
print("var_outside:" + str(var_outside))
# variable passed to function is copied to different internal variable for this function and origianl variable is not mutated

listA_outside = [0,1,2,3,4,5,6,7]
listB_outside = listA_outside

print("listA_outside before:" + str(listA_outside))
myfun2(listA_outside)
print("listA_outside after:" + str(listA_outside))
print("listB_outside after:" + str(listB_outside))
# lists are passed to function by reference therefore original function was mutated

listC_outside = myfun3(listA_outside)
print("listA_outside after:" + str(listA_outside))
print("listC_outside after:" + str(listC_outside))
# listC is not mutated because it is copy of listA and is not refering to listA which was mutated