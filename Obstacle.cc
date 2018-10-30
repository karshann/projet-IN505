
#include <iostream>
using namespace std;

#define BUISSON 0
#define ARBRE  1
#define ROCHER 2
class Obsctacle : public Objet{
private:
  Objet o;
  int type;
  int taille;

public:
  Obsctacle ()
  {
    srand((unsigned)time(0));
    this->type=(rand()%3);
    if(this->type>0) this->taille=this->type=(rand()%3)+1;
    else this->taille=1;
    this->o=new Objet();
  }
  virtual ~Obsctacle(){};

  void setPv(int longueur, int largeur)
  {
    this->o.setPv(longueur*largeur);
  }
  void setObstacle(int longueur , int largeur)
  {
    this->setPv(longueur,largeur);
    this->o.setPos(longueur, largeur);
  }
};
