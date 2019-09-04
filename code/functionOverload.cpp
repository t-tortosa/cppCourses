int somme(int a, int b) {
  /* Somme de deux entiers */
  return a + b;
}
int somme(int a, int b, int c) {
  /* Somme de trois entiers */
  return a + b + c;
}

#include <iostream>

int main() {
  int somme1 = somme(1, 2);
  int somme2 = somme(1, 2, 4);

  std::cout << "1 + 2 = " << somme1 << std::endl;
  std::cout << "1 + 2 + 3 = " << somme2 << std::endl;
}

class Point {
public:
  Point(x, y);
  Point somme(Point A);

  int xPoint;
  int yPoint;
}

Point::Point(x, y) {
  xPoint = x;
  yPoint = y;
}

Point Point::somme(Point A) {
  return pointSomme(A.xPoint + xPoint, A.yPoint + yPoint);
}

int main() {
  Point A(1, 1);
  Point B(2, 2);

  /* C aura pour coefficient la somme
   * des coefficients de A et de B
   */
  Point C = A.somme(B);
}

class Point {
public:
  Point(x, y);
  Point operator+(Point A);

  int xPoint;
  int yPoint;
}

Point::Point(x, y) {
  xPoint = x;
  yPoint = y;
}

Point Point::operator+(Point A) {
  return pointSomme(A.xPoint + xPoint, A.yPoint + yPoint);
}

int main() {
  Point A(1, 1);
  Point B(2, 2);

  /* C aura pour coefficient la somme
   * des coefficients de A et de B
   */
  Point C = A.somme(B);
}