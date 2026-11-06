#pragma once

#include "Vector2.h"
#include <iostream>

class Point2 {
private:
  float x, y;

public:
  Point2();
  Point2(float x, float y);

  float getX() const;
  float getY() const;
  void setX(float x);
  void setY(float y);

  Vector2 sub(const Point2 &p) const;
  Point2 add(const Vector2 &v) const;
  void print() const;
};
