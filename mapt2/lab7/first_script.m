clear all; close all;

%t = -10:10;

%plot(t, t.*t);

[y, y_size] = first_function(5);
plot(-y_size:y_size, y);