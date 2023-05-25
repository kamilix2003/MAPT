import math
class square:
    name = 'square'
    a_ = 0
    C_ = 0
    A_ = 0
    
    def __init__(self,a):
        self.a_ = a

    def area(self):
        return  self.a_ * self.a_
    
    def circumference(self):
        return 4 * self.a_
    
    def display(self):
        if self.A_ != 0 and self.C_ != 0:
            print(f'{self.name} \n   area: {self.A_} \n   circumference: {self.C_}\n')
        print(f'{self.name} \n   area: {self.area()} \n   circumference: {self.circumference()}\n')