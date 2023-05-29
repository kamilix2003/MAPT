import math
class Circle:
    _r = 0
    _a = 0
    _c = 0
    def __init__(self, r):
        self._r = r
    def area(self):
        if self._a == 0: self._a = math.pi * self._r * self._r
        return self._a
    def circ(self):
        if self._c == 0: self._c = 2 * math.pi * self._r
        return self._c
    def display(self):
        self.area()
        self.circ()
        print(f'Circle of radius: {self._r}\n area of circle: {round(self._a, 3)}\n circumference of circle {round(self._c, 3)}')

class Rectangle:
    _x = 0
    _y = 0
    _a = 0
    _c = 0
    def __init__(self, x, y):
        self._x = x
        self._y = y
    def area(self):
        if self._a == 0: self._a = self._y * self._x
        return self._a
    def circ(self):
        if self._c == 0: self._c = 2 * self._x + 2 * self._y
        return self._c
    def display(self):
        self.area()
        self.circ()
        print(f'Rectangle of sides: {self._x} and {self._y}\n area of rectangle: {round(self._a, 3)}\n circumference of rectangle {round(self._c, 3)}')


mycircle = Circle(3)
mycircle.display()

myrectangle = Rectangle(3,4)
myrectangle.display()