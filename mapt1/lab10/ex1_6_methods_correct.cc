#include "ex1_6_methods_correct.h"
Circle::Circle(float radius): radius_(radius) {};

void Circle::set_radius(float radius) {radius_ = radius;};

float Circle::read_radius() {return radius_;};
