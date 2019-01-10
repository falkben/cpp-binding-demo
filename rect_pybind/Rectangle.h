#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <vector>
#include <iostream>
#include "Square.h"

namespace shapes
{
class Rectangle
{
public:
  int x0, y0, x1, y1;

  Rectangle(){};

  Rectangle(int x0, int y0, int x1, int y1)
  {
    this->x0 = x0;
    this->y0 = y0;
    this->x1 = x1;
    this->y1 = y1;
  };

  ~Rectangle(){};

  int getArea()
  {
    return (this->x1 - this->x0) * (this->y1 - this->y0);
  };

  void getSize(int *width, int *height)
  {
    (*width) = x1 - x0;
    (*height) = y1 - y0;
  };

  void move(int dx, int dy)
  {
    this->x0 += dx;
    this->y0 += dy;
    this->x1 += dx;
    this->y1 += dy;
  };

  int sumVec(std::vector<int> sv)
  {
    int tot = 0;

    int svs = sv.size();
    std::cout << "vector length " << svs << std::endl;
    for (int ii = 0; ii < svs; ii++)
    {
      tot = tot + sv.at(ii);
    }
    return tot;
  };
  int add()
  {
    Square sq;
    return (sq.addsides(this->x0, this->x1, this->y0, this->y1));
  };
};
} // namespace shapes

#endif