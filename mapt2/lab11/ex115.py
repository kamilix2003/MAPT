import math
class square:
    a_ = 0
    A_ = 0
    def __init__(self,a):
        self.a_ = a

    def areaSQ(self):
        return  self.a_ * self.a_

class cicle:
    r_ = 0
    
    def __init__(self,r):
        self.r_ = r
        
    def area(self):
        return math.pi * pow(self.r_,2)
    
class equilateral_trangle:
    a_ = 0
    
    def __intit__(self, a):
        self.a_ = a
    

obj = square(5)
print(obj.a_)
obj.A_ = obj.areaSQ()
print(obj.A_)