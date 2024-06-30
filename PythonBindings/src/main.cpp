#include <pybind11/pybind11.h>
#include "include/Interactions.h"

int add(int i, int j) {
    return i + j;
}

// Change 'example' to 'sparklebeat_ui'
PYBIND11_MODULE(sparkle_ui, m) {
    m.def("add", &add, "A function that adds two numbers");

    pybind11::class_<Interactions>(m, "Interactions")
    .def(pybind11::init<int>())
    .def("get_x", &Interactions::get_x);
}
