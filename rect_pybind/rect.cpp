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
        .def("add", &Rectangle::add, "");
}

} // namespace shapes