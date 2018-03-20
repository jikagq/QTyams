#include "calcul.h"
#include <stdlib.h>
#include <iostream>
#include <QtGlobal>
#include <QTime>


using namespace std;

// Déclaration des variables globales


Calcul::Calcul()
{
}

void Calcul::Lancer()
{
    QTime time = QTime::currentTime();
    qsrand((uint)time.msec());

    //d1=1;d2=2;d3=3 ; d4=4;d5=5;

    d1=(qrand() % 6+1);
    d2=(qrand() % 6+1);
    d3=(qrand() % 6+1);
    d4=(qrand() % 6+1);
    d5=(qrand() % 6+1);

}

void Calcul::Afficher()
{
   cout << endl << d1 << d2 << d3 << d4 << d5 << endl ;
}

int Calcul::NbDe1()
{
    Nb1=0;
    if(d1 == 1) Nb1++;
    if(d2 == 1) Nb1++;
    if(d3 == 1) Nb1++;
    if(d4 == 1) Nb1++;
    if(d5 == 1) Nb1++;

    return Nb1*1;
}

int Calcul::NbDe2()
{
    Nb2=0;
    if(d1 == 2) Nb2++;
    if(d2 == 2) Nb2++;
    if(d3 == 2) Nb2++;
    if(d4 == 2) Nb2++;
    if(d5 == 2) Nb2++;

    return Nb2*2;
}

int Calcul::NbDe3()
{
    Nb3=0;
    if(d1 == 3) Nb3++;
    if(d2 == 3) Nb3++;
    if(d3 == 3) Nb3++;
    if(d4 == 3) Nb3++;
    if(d5 == 3) Nb3++;

    return Nb3*3;
}

int Calcul::NbDe4()
{
    Nb4=0;
    if(d1 == 4) Nb4++;
    if(d2 == 4) Nb4++;
    if(d3 == 4) Nb4++;
    if(d4 == 4) Nb4++;
    if(d5 == 4) Nb4++;

    return Nb4*4;
}

int Calcul::NbDe5()
{
    Nb5=0;
    if(d1 == 5) Nb5++;
    if(d2 == 5) Nb5++;
    if(d3 == 5) Nb5++;
    if(d4 == 5) Nb5++;
    if(d5 == 5) Nb5++;

    return Nb5*5;
}

int Calcul::NbDe6()
{
    Nb6=0;
    if(d1 == 6) Nb6++;
    if(d2 == 6) Nb6++;
    if(d3 == 6) Nb6++;
    if(d4 == 6) Nb6++;
    if(d5 == 6) Nb6++;

    return Nb6*6;
}

int Calcul::Brelan()
{
    int i=0;
    if (Nb1>=3) i=1;
    if (Nb2>=3) i=2;
    if (Nb3>=3) i=3;
    if (Nb4>=3) i=4;
    if (Nb5>=3) i=5;
    if (Nb6>=3) i=6;

    if (i==0)
    {
        return 0;
    }

    else
    {
        Bre = 1;
        return 20+d1+d2+d3+d4+d5;
    }
}

int Calcul::Carre()
{
    int i=0;
    if (Nb1>=4) i=1;
    if (Nb2>=4) i=2;
    if (Nb3>=4) i=3;
    if (Nb4>=4) i=4;
    if (Nb5>=4) i=5;
    if (Nb6>=4) i=6;

    if (i==0)
    {
        return 0;
    }

    else
    {
        return 30+d1+d2+d3+d4+d5;
    }
}

int Calcul::Yam()
{
    int i=0;
    if (Nb1==5) i=1;
    if (Nb2==5) i=2;
    if (Nb3==5) i=3;
    if (Nb4==5) i=4;
    if (Nb5==5) i=5;
    if (Nb6==5) i=6;

    if (i==0)
    {
        return 0;
    }

    else
    {
        return 50+d1+d2+d3+d4+d5;
    }
}

int Calcul::Full()
{
    if(Bre == 1 && (Nb1==2 || Nb2==2 || Nb3==2 || Nb4==2 || Nb5==2 || Nb6==2 ))
    {
        Bre= 0;
        return 25+d1+d2+d3+d4+d5;
    }

    else
    {
        Bre= 0;
        return 0;
    }
}

int Calcul::Chance()
{
    return d1+d2+d3+d4+d5;
}

int Calcul::PtSuite()
{
    if ( ( (Nb1>=1 && Nb2>=1 && Nb3>=1 && Nb4>=1) || (Nb2>=1 && Nb3>=1 && Nb4>=1 && Nb5>=1)  || (Nb3>=1 && Nb4>=1 && Nb5>=1 && Nb6>=1 )) )
    {
        return 30;
    }
    else
    {
        return 0;
    }
}

int Calcul::GdSuite()
{
    if ( (Nb1==1 && Nb2==1 && Nb3==1 && Nb4==1 && Nb5==1) || (Nb2==1 && Nb3==1 && Nb4==1 && Nb5==1 && Nb6==1 ))
    {
        return 40;
    }
    else
    {
        return 0;
    }
}



