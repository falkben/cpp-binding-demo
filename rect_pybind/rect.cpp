#include "Rectangle.h"

#include <pybind11/pybind11.h>

namespace py = pybind11;

namespace shapes
{

PYBIND11_MODULE(rect, m)
{
    py::class_<Rectangle>(m, "Rectangle")
        .def(py::init<>())
        .def(py::init<int, int, int, int>())
        .def("getArea", &Rectangle::getArea, "gets the area")
        .def("getSize", &Rectangle::getSize, "")
        .def("move", &Rectangle::move, "")
        .def("sumVec", &Rectangle::sumVec, "")
        .def("add", &Rectangle::add, "")
        .def_readwrite("x0", &Rectangle::x0)
        .def_readwrite("x1", &Rectangle::x1)
        .def_readwrite("y0", &Rectangle::y0)
        .def_readwrite("y1", &Rectangle::y1);
}

} // namespace shapes