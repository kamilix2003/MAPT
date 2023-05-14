clear all; close all; clc;

figure(4);
step = 0.1;
T = -5:step:5;
[Y1, Y2] = exercise2a_function(T);
subplot(2, 1, 1);
plot(T, Y1, T, Y2);

Y1 = 0*T;
Y2 = 0*T;
for i=1:size(T, 2)
    [y1, y2] = exercise2_function1(T(i));
    Y1(i) = y1;
    Y2(i) = y2;
end
subplot(2, 1, 2);
plot(T, Y1, T, Y2);