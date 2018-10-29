#include <iostream>
#include <String.h>
using namespace std;



class Personnage : public Objet {
private:
  Objet o;
  String nom;

public:
  Personnage (arguments);
  virtual ~Personnage ();
};
