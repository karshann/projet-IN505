#include <iostream>
using namespace std;

class Position
{
   private :
    int posx;
    int posy;

  public :
    Position()
    {
      this->posx=0;
      this->posy=0;
    }

    int GetPosX()
    {
      return this->posx;
    }
    int GetPosY()
    {
      return this->posy;
    }
    void setPosX(int longueur)
    {
      srand((unsigned)time(0));
      int rnd=(rand()%longueur);
    }
    void setPosY(int largeur)
    {
      srand((unsigned)time(0));
      int rnd=(rand()%largeur);
    }
    void initialisation(int longueur , int largeur){
      this->posx=setPosX(longueur);
      this->posy=setPosY(largeur
    }
    ]

};
