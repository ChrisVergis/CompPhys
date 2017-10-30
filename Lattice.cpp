#include "Lattice.h"

Lattice::Lattice() : Lx(1.),Ly(1.) { }
Lattice::Lattice(double x,double y) : Lx(x), Ly(y) { }

Lattice::setX(double x){  Lx = x; }
Lattice::setY(double y){  Ly = y; }
