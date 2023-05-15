%y1 (x) = x ^ 2 + 1
%y2 (x) = x ^ 3 + x ^ 2 + x + 1
%for x <-5, 5>,
clear all; close all;
t = -5:0.01:5;
y1 = t.^2 +1;
y2 = t.^3 + t.^2 + t +1;
y1_indexes = 1:1:size(y1,2);
figure (2);
plot (y1, 'r.');
hold on;
plot (y1, 'r-');
plot (y1_indexes, y1, 'b*');

title ('Title of the chart, e.g. y_1 plotted with two types of tags')
xlabel ('X-axis')
ylabel ('Y-axis')
grid on;
legend('y1', 'y2', 'y3')

figure (3);
plot(y1, 'b');
plot(y2, 'r');