#ifndef OBSTACLE_HH
#define OBSTACLE_HH

#include <iostream>
#include "Objet.cc"
using namespace std;

#define BUISSON 0
#define ARBRE  1
#define ROCHER 2
class  Obstacle : public Objet{
private:
  Objet o;
  int type;
  int taille;

public:
    Obstacle ();
    virtual ~Obstacle(){};

    void setPv(int longueur, int largeur);
    void setObstacle(int longueur , int largeur);
};



#endif // OBSTACLE_HH
