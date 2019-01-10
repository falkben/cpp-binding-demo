#include "Rectangle.h"

#include <pybind11/pybind11.h>

namespace py = pybind11;

PYBIND11_MODULE(rect, m)
{
    py::class_<Rectangle>(m, "Rectangle")
    {
        m.def(py::init<int x0, int y0, int x1, int y1>());
        m.def(py::init<>());
        m.def("getArea", &getArea, "gets the area");
    }
}