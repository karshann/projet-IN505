#include "Objet.hh"

Objet::Objet()
{
  p= Position();
  this->Pv=0;
}


void Objet::setPos(int longueur, int largeur)
{
  this->p.initialisation(longueur, largeur);
}

int Objet::getPv()
{
  return Pv;
}

void Objet::setPv(int pv)
{
  this->Pv=pv;
}