#ifndef INTERFACE_H
#define INTERFACE_H

#include <QWidget>
#include "calcul.h"

namespace Ui {
class interface;
}

class interface : public QWidget
{
    Q_OBJECT

    friend class Calcul;

public:
    interface(QWidget *parent = 0);
    ~interface();
    void afficheDe1(int);
    void afficheDe2(int);
    void afficheDe3(int);
    void afficheDe4(int);
    void afficheDe5(int);

    void setnom_tot1(int rescalc);
    void setnom_tot2(int rescalc);
    void setnom_tot3(int rescalc);
    void setnom_tot4(int rescalc);
    void setnom_tot5(int rescalc);
    void setnom_tot6(int rescalc);
    void setnom_brelan(int rescalc);
    void setnom_carre(int rescalc);
    void setnom_full(int rescalc);
    void setnom_pts(int rescalc);
    void setnom_gds(int rescalc);
    void setnom_yams(int rescalc);
    void setnom_chance(int rescalc);

    void ActiverBoutons();
    void DesactiverBoutons();
    void AfficherDes();
    void ScoreBoutons();

    void insertscore_tot1(int score);
    void insertscore_tot2(int score);
    void insertscore_tot3(int score);
    void insertscore_tot4(int score);
    void insertscore_tot5(int score);
    void insertscore_tot6(int score);
    void insertscore_brelan(int score);
    void insertscore_carre(int score);
    void insertscore_full(int score);
    void insertscore_pts(int score);
    void insertscore_gds(int score);
    void insertscore_yams(int score);
    void insertscore_chance(int score);

   void AffichageTotal(int score);
   void AffichageSTotal1(int score);
   void AffichageSTotal2(int score);
   void AffichagePtsBonus(int score);
   void AffichageInter(int score);

    Calcul monCalcul;
    int NbeDeRelance, Total, STotal1, STotal2,STotalInter;
    bool tot1,tot2,tot3,tot4,tot5,tot6,brelan,carre,full,pts,gds,yamm,chance,Bonus;


private slots:
    void on_Relancer_clicked();
    void on_tot1_clicked();
    void on_tot2_clicked();
    void on_tot3_clicked();
    void on_tot4_clicked();
    void on_tot5_clicked();
    void on_tot6_clicked();
    void on_brelan_clicked();
    void on_carre_clicked();
    void on_full_clicked();
    void on_pts_clicked();
    void on_gds_clicked();
    void on_yams_clicked();
    void on_chance_clicked();

    void on_NouveauTour_clicked();

private:
    Ui::interface *ui;
};

#endif // INTERFACE_H
