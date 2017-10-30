#ifndef LATTICE_H
#define LATTICE_H

class Lattice
{
private:
  double Lx,Ly;
public:
  Lattice();
  Lattice(double lx, double ly);
  
  setX(double x);
  setY(double y);

};

#endif
