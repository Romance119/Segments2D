#include "Point2.h"

Point2::Point2() : x(0), y(0) {}
Point2::Point2(float x, float y) : x(x), y(y) {}

float Point2::getX() const { return x; }
float Point2::getY() const { return y; }
void Point2::setX(float x) { this->x = x; }
void Point2::setY(float y) { this->y = y; }

Vector2 Point2::sub(const Point2 &p) const {
  return Vector2(x - p.x, y - p.y);
}

Point2 Point2::add(const Vector2 &v) const {
  return Point2(x + v.getX(), y + v.getY());
}

void Point2::print() const {
  std::cout << "{" << x << ", " << y << "}" << std::endl;
}
