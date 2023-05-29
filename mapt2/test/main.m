step = 0.02;
T = -4:step:4;
Y1 = T.^2 +1;
Y2 = T.^3 + T.^2 + T +1;
plot(T, Y1, T, Y2);
title('y1(x), y2(x)')
legend('y1', 'y2')
ylabel('y')
xlabel('x')
grid on;