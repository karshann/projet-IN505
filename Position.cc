#include "Position.hh"

Position::Position()
{
  this->posx=0;
  this->posy=0;
}

int Position::GetPosX()
{
  return this->posx;
}

int Position::GetPosY()
{
  return this->posy;
}

void Position::setPosX(int longueur)
{
  srand((unsigned)time(0));
  int rnd=(rand()%longueur);
}
void Position::setPosY(int largeur)
{
  srand((unsigned)time(0));
  int rnd=(rand()%largeur);
}

void Position::initialisation(int longueur , int largeur)
{
  this->setPosX(longueur);
  this->setPosY(largeur);
}
