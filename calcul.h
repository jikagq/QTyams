#ifndef CALCUL_H
#define CALCUL_H
#include <QWidget>

class Calcul
{


public:
    Calcul();
    void Lancer();
    void Afficher();
    int NbDe1();
    int NbDe2();
    int NbDe3();
    int NbDe4();
    int NbDe5();
    int NbDe6();
    int Brelan();
    int Carre();
    int Yam();
    int Full();
    int PtSuite();
    int GdSuite();
    int Chance();
    void Analyse();
    int d1,d2,d3,d4,d5;



private:
    int Nb1,Nb2,Nb3,Nb4,Nb5,Nb6,Bre;


};

#endif // CALCUL_H
