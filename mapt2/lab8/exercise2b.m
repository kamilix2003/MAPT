%y1 (x) = x ^ 2 + 1
%y2 (x) = x ^ 3 + x ^ 2 + x + 1
%for x <-5, 5>,
clear all; close all; clc;

p1 = [1 0 1];
p2 = [1 1 1 1];
step = 0.01;
T = -5:step:5;

Y1 = polyval(p1, T);
Y2 = polyval(p2, T);

plot(T, Y1, T, Y2);
save('lab_8.mat',"T", "Y1", "Y2");
