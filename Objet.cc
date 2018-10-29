<<<<<<< HEAD
class Objet : public Position {
private:
  Pos

public:
  Objet (arguments);
  virtual ~Objet ();
=======
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
>>>>>>> c125b7e47d11771f84859898772992599f0d5f48
};
