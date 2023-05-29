from matplotlib import pyplot
import numpy as np
import math
def y1(x):
    return pow(x, 2) + 1
def y2(x):
    return pow(x, 3) + pow(x, 2) + x + 1
def npy1(X):
    return np.power(X, 2) + 1
def npy2(X):
    return np.power(X, 3) + np.power(X, 2) + X + 1

lower_bound = -5
upper_bound = 5
step = 0.1
steps = (abs(lower_bound) + abs(upper_bound))/step

X = []
Y1 = []
Y2 = []
x = lower_bound
while x <= upper_bound and x >= lower_bound:
    X.append(x)
    Y1.append(round(y1(x), 3))
    Y2.append(round(y2(x), 3))
    x = round(x+step,3)
pyplot.figure('python')
pyplot.plot(X, Y1, X, Y2)
pyplot.title('y1(x) and y2(x)')
pyplot.xlabel('x')
pyplot.ylabel('y')
pyplot.legend(['y1', 'y2'])
pyplot.show()

# numpy part
NPX = np.linspace(lower_bound, upper_bound, int(steps))
NPY1 = npy1(NPX)
NPY2 = npy2(NPX)
pyplot.figure('numpy')
pyplot.plot(NPX, NPY1, NPX, NPY2)
pyplot.title('y1(x) and y2(x) using numpy')
pyplot.xlabel('x')
pyplot.ylabel('y')
pyplot.legend(['y1', 'y2'])
pyplot.show()