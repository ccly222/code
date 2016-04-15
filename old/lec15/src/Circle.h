#pragma once

#include "Shape.h"

// A circle specified by its center and radius.
class Circle : public Shape
{
public:
    // Constructs a circle with the given center position and radius.
    Circle(posn center, double radius);

    bool contains(posn) const override;

private:
    posn center_;
    double radius_;
};