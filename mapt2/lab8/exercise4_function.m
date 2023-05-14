function [Z] = exercise4_function(x, y)
[X, Y] = meshgrid(x, y);
Z = X.^3 + (Y + 1).^2 +1;
end

