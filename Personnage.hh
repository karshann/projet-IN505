#ifndef PERSONNAGE_HH
#define PERSONNAGE_HH

#include <iostream>
#include <string>
#include "Objet.hh"
using namespace std;

class Personnage : public Objet {
private:
  Objet o;
  string nom;

public:
  Personnage ();
  virtual ~Personnage ();
};


#endif // PERSONNAGE_HH
