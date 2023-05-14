clear all; close all; clc;
load('lab_8.mat');
if size(Y1, 2) > 0 & size(Y1, 1) > 0 & size(T, 2) > 0 
    disp('correctly imported variables')
end