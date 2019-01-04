from libcpp.vector cimport vector

cdef extern from "Rectangle.cpp":
    pass

cdef extern from "Rectangle.h" namespace "shapes":
    cdef cppclass Rectangle:
        Rectangle() except +
        Rectangle(int, int, int, int) except +
        int x0, y0, x1, y1
        int getArea()
        void getSize(int* width, int* height)
        int sumVec(vector[int])
        void move(int, int)