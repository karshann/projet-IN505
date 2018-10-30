#include "Obstacle.hh"

Obstacle::Obstacle()
{
  srand((unsigned)time(0));
  this->type=(rand()%3);
  if(this->type>0) this->taille=this->type=(rand()%3)+1;
  else this->taille=1;
  o = Objet();
}

void Obstacle::setPv(int longueur, int largeur)
{
  int tmp = longueur*largeur;
  o.setPv(tmp);
}

void Obstacle::setObstacle(int longueur , int largeur)
{
    this->setPv(longueur,largeur);
    this->o.setPos(longueur, largeur);
}
