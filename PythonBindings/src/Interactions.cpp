//
// Created by johnny on 6/30/24.
//
#include <pybind11/pybind11.h>
#include "include/Interactions.h"

Interactions::Interactions(int x) {
   this->bleep = x;
}

int Interactions::get_x() {
    return this->bleep;  // Assuming 'x' is a member variable
}

/*U
namespace py = pybind11;

PYBIND11_MODULE(sparkle_ui, m) {

}


 */