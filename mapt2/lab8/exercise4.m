clear all; close all; clc;
step = 0.01;
X = -5:step:5;
Y = -5:step:5;
[Z] = exercise4_function(X, Y);
% surf(X, Y, Z);
mesh(X, Y, Z);
print('mesh.png','-dpng')