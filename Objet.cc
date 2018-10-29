#include <iostream>
using namespace std;

class Objet : public Position {
private:
  Position p;
  int Pv;

public:
  Objet()
  {
    this->p=new Position();
    this->Pv=0;
  }
  virtual ~Objet (){};
  void setPos(int longueur, int largeur)
  {
      this->p.initialisation(longueur, largeur);
  }
  void setPv() = 0;
};
