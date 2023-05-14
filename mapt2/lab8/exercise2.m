%% main
clear all; close all; clc;

step = 0.01;
x = -5:step:5;
Y1 = 0*x;
Y2 = 0*x;

for i=1:size(x, 2)
    [y1, y2] = exercise3_function1(x(i));
    Y1(i) = y1;
    Y2(i) = y2;
end
 figure(1);
 subplot(2, 1, 1);
 plot(x, Y1, x, Y2);
 title('Ex1 graph');
 xlabel ('X-axis')
 ylabel ('Y-axis')
 legend('y1', 'y2');
 grid on;
 subplot(2, 1, 2);
 plot(x, Y1, x, Y2);
 title('Ex2 graph');
 xlabel ('X-axis')
 ylabel ('Y-axis')
 legend('y1', 'y2');
 grid on;