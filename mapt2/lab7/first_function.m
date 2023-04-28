function [sum, diff, detA, detB] = first_function(A, B)
sum = A + B;
diff = abs(A-B);
detA = det(A);
detB = det(B);
end