#include "Lattice.h"

Lattice::Lattice() : Lx(1.),Ly(1.) { }
Lattice::Lattice(double lx,double ly) : Lx(lx), Ly(ly) { }

Lattice::setX(double x){  Lx = x; }
Lattice::setY(double y){  Ly = y; }
