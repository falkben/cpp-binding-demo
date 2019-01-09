from libcpp.vector cimport vector

# cdef public from "Square.cpp":
#     pass

# cdef extern from "Square.h" namespace "shapes":
#     cdef cppclass Square:
#         int addsides(int& a, int& b, int& c, int& d)

cdef extern from "Rectangle.cpp":
    pass

cdef extern from "Rectangle.h" namespace "shapes":
    cdef cppclass Rectangle:
        Rectangle() except +
        Rectangle(int, int, int, int) except +
        int x0, y0, x1, y1
        int getArea()
        int add()
        void getSize(int* width, int* height)
        int sumVec(vector[int])
        void move(int, int)