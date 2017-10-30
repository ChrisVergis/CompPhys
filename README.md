# CompPhys

Lattice: 
Class that helps building an Lx*Ly lattice. Can be used as:

    #include "Lattice.h"    
    /* .... */
    Lattice* mLat = new Lattice(7., 4.);
    
The default constructor sets Lx=Ly=1.0 .

So far contains the setter methods to manually set the Lx,Ly. Eg:

    mLat->setX(5.5);
    mLat->setY(3.0);
    
Will set Lx from 7. to 5.5 and Ly from 4. to 3.0.
