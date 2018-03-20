#include "interface.h"
#include "ui_interface.h"
#include <QTime>

interface::interface(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::interface)
{
    ui->setupUi(this);

    NbeDeRelance=Total=STotal1=STotal2=STotalInter=0;
    tot1=tot2=tot3=tot4=tot5=tot6=brelan=carre=full=pts=gds=yamm=chance=Bonus = 0;

    monCalcul.Lancer();

    AfficherDes();
    ScoreBoutons();


    ui->Texte->setText("Relancez ou Sélectionez un score.");

    ui->NouveauTour->setEnabled(false);
    ui->Relancer->setEnabled(true);

}

interface::~interface()
{
    delete ui;
}

void interface::on_Relancer_clicked()
{
    QTime time = QTime::currentTime();
    qsrand((uint)time.msec());

        if(ui->checkD1->checkState()==2)
        {
            monCalcul.d1=(qrand() % 6 + 1);
        }

        if(ui->checkD2->checkState()==2)
        {
            monCalcul.d2=(qrand() % 6 + 1);
        }

        if(ui->checkD3->checkState()==2)
        {
            monCalcul.d3=(qrand() % 6 + 1);
        }

        if(ui->checkD4->checkState()==2)
        {
            monCalcul.d4=(qrand() % 6 + 1);
        }

        if(ui->checkD5->checkState()==2)
        {
            monCalcul.d5=(qrand() % 6 + 1);
        }
        NbeDeRelance++;
        ui->Texte->setText("Relancez ou Sélectionez un score.");

        if (NbeDeRelance>=2)
        {
            ui->Texte->setText("Plus de relances. Sélectionez un score.");
            ui->Relancer->setEnabled(false);
        }

   AfficherDes();
   ScoreBoutons();

   ui->NouveauTour->setEnabled(false);
}



void interface::on_tot1_clicked()
{
   ui->NouveauTour->setEnabled(true);
   insertscore_tot1(monCalcul.NbDe1());

   STotal1=(STotal1+monCalcul.NbDe1());
   AffichageSTotal1(STotal1);

   STotalInter=(STotalInter+monCalcul.NbDe1());
   AffichageInter(STotalInter);

   Total=(Total+monCalcul.NbDe1());
   AffichageTotal(Total);

   DesactiverBoutons();
   tot1=1;
}

void interface::on_tot2_clicked()
{
   ui->NouveauTour->setEnabled(true);
   insertscore_tot2(monCalcul.NbDe2());

   STotal1=(STotal1+monCalcul.NbDe2());
   AffichageSTotal1(STotal1);

   STotalInter=(STotalInter+monCalcul.NbDe2());
   AffichageInter(STotalInter);

   Total=(Total+monCalcul.NbDe2());
   AffichageTotal(Total);

   DesactiverBoutons();
   tot2=1;
}

void interface::on_tot3_clicked()
{
   ui->NouveauTour->setEnabled(true);
   insertscore_tot3(monCalcul.NbDe3());

   STotal1=(STotal1+monCalcul.NbDe3());
   AffichageSTotal1(STotal1);

   STotalInter=(STotalInter+monCalcul.NbDe3());
   AffichageInter(STotalInter);

   Total=(Total+monCalcul.NbDe3());
   AffichageTotal(Total);

   DesactiverBoutons();
   tot3=1;
}

void interface::on_tot4_clicked()
{
   ui->NouveauTour->setEnabled(true);
   insertscore_tot4(monCalcul.NbDe4());

   STotal1=(STotal1+monCalcul.NbDe4());
   AffichageSTotal1(STotal1);

   STotalInter=(STotalInter+monCalcul.NbDe4());
   AffichageInter(STotalInter);

   Total=(Total+monCalcul.NbDe4());
   AffichageTotal(Total);

   DesactiverBoutons();
   tot4=1;
}

void interface::on_tot5_clicked()
{
   ui->NouveauTour->setEnabled(true);
   insertscore_tot5(monCalcul.NbDe5());

   STotal1=(STotal1+monCalcul.NbDe5());
   AffichageSTotal1(STotal1);

   STotalInter=(STotalInter+monCalcul.NbDe5());
   AffichageInter(STotalInter);

   Total=(Total+monCalcul.NbDe5());
   AffichageTotal(Total);

   DesactiverBoutons();
   tot5=1;
}

void interface::on_tot6_clicked()
{
   ui->NouveauTour->setEnabled(true);
   insertscore_tot6(monCalcul.NbDe6()) ;

   STotal1=(STotal1+monCalcul.NbDe6());
   AffichageSTotal1(STotal1);

   STotalInter=(STotalInter+monCalcul.NbDe6());
   AffichageInter(STotalInter);

   Total=(Total+monCalcul.NbDe6());
   AffichageTotal(Total);

   DesactiverBoutons();
   tot6=1;
}

void interface::on_brelan_clicked()
{
   ui->NouveauTour->setEnabled(true);
   insertscore_brelan(monCalcul.Brelan()) ;

   STotal2=(STotal2+monCalcul.Brelan());
   AffichageSTotal2(STotal2);

   Total=(Total+monCalcul.Brelan());
   AffichageTotal(Total);

   DesactiverBoutons();
   brelan=1;
}

void interface::on_carre_clicked()
{
   ui->NouveauTour->setEnabled(true);
   insertscore_carre(monCalcul.Carre()) ;

   STotal2=(STotal2+monCalcul.Carre());
   AffichageSTotal2(STotal2);

   Total=(Total+monCalcul.Carre());
   AffichageTotal(Total);

   DesactiverBoutons();
   carre=1;
}

void interface::on_full_clicked()
{
   ui->NouveauTour->setEnabled(true);
   insertscore_full(monCalcul.Full())  ;

   STotal2=(STotal2+monCalcul.Full());
   AffichageSTotal2(STotal2);

   Total=(Total+monCalcul.Full());
   AffichageTotal(Total);

   DesactiverBoutons();
   full=1;
}

void interface::on_pts_clicked()
{
   ui->NouveauTour->setEnabled(true);
   insertscore_pts(monCalcul.PtSuite())  ;

   STotal2=(STotal2+monCalcul.PtSuite());
   AffichageSTotal2(STotal2);

   Total=(Total+monCalcul.PtSuite());
   AffichageTotal(Total);

   DesactiverBoutons();
   pts=1;
}

void interface::on_gds_clicked()
{
   ui->NouveauTour->setEnabled(true);
   insertscore_gds(monCalcul.GdSuite()) ;

   STotal2=(STotal2+monCalcul.GdSuite());
   AffichageSTotal2(STotal2);

   Total=(Total+monCalcul.GdSuite());
   AffichageTotal(Total);

   DesactiverBoutons();
   gds=1;
}

void interface::on_yams_clicked()
{
   ui->NouveauTour->setEnabled(true);
   insertscore_yams(monCalcul.Yam());

   STotal2=(STotal2+monCalcul.Yam());
   AffichageSTotal2(STotal2);

   Total=(Total+monCalcul.Yam());
   AffichageTotal(Total);

   DesactiverBoutons();
   yamm=1;
}



void interface::on_chance_clicked()
{
   ui->NouveauTour->setEnabled(true);
   insertscore_chance(monCalcul.Chance());

   STotal2=(STotal2+monCalcul.Chance());
   AffichageSTotal2(STotal2);

   Total=(Total+monCalcul.Chance());
   AffichageTotal(Total);

   DesactiverBoutons();
   chance=1;
}


void interface::on_NouveauTour_clicked()
{
    monCalcul.Lancer();

    AfficherDes();
    ScoreBoutons();
    ActiverBoutons();

    NbeDeRelance=0;
    ui->Texte->setText("Relancez ou Sélectionez un score.");
    ui->NouveauTour->setEnabled(false);
    ui->Relancer->setEnabled(true);

    if (STotal1>=65)
        {
            if (Bonus==0)
            {
                Total=Total+35;
                AffichageTotal(Total);
                STotalInter=STotalInter+35;
                AffichageInter(STotal1);
                AffichagePtsBonus(35);
                Bonus=1;
            }

        }
 }



void interface::ActiverBoutons()
{
    if(tot1==0)
    {
        ui->tot1->setEnabled(true);
    }
    if(tot2==0)
    {
        ui->tot2->setEnabled(true);
    }
    if(tot3==0)
    {
        ui->tot3->setEnabled(true);
    }
    if(tot4==0)
    {
        ui->tot4->setEnabled(true);
    }
    if(tot5==0)
    {
        ui->tot5->setEnabled(true);
    }
    if(tot6==0)
    {
        ui->tot6->setEnabled(true);
    }
    if(brelan==0)
    {
        ui->brelan->setEnabled(true);
    }
    if(carre==0)
    {
        ui->carre->setEnabled(true);
    }
    if(full==0)
    {
        ui->full->setEnabled(true);
    }
    if(pts==0)
    {
        ui->pts->setEnabled(true);
    }
    if(gds==0)
    {
        ui->gds->setEnabled(true);
    }
    if(yamm==0)
    {
        ui->yams->setEnabled(true);
    }
    if(chance==0)
    {
        ui->chance->setEnabled(true);
    }

}

void interface::DesactiverBoutons()
{
    ui->tot1->setEnabled(false);
    ui->tot2->setEnabled(false);
    ui->tot3->setEnabled(false);
    ui->tot4->setEnabled(false);
    ui->tot5->setEnabled(false);
    ui->tot6->setEnabled(false);
    ui->brelan->setEnabled(false);
    ui->carre->setEnabled(false);
    ui->full->setEnabled(false);
    ui->pts->setEnabled(false);
    ui->gds->setEnabled(false);
    ui->yams->setEnabled(false);
    ui->chance->setEnabled(false);
    ui->Relancer->setEnabled(false);
}

void interface::AfficherDes()
{
    afficheDe1(monCalcul.d1);
    afficheDe2(monCalcul.d2);
    afficheDe3(monCalcul.d3);
    afficheDe4(monCalcul.d4);
    afficheDe5(monCalcul.d5);
}

void interface::ScoreBoutons()
{
    setnom_tot1(monCalcul.NbDe1());
    setnom_tot2(monCalcul.NbDe2());
    setnom_tot3(monCalcul.NbDe3());
    setnom_tot4(monCalcul.NbDe4());
    setnom_tot5(monCalcul.NbDe5()) ;
    setnom_tot6(monCalcul.NbDe6()) ;
    setnom_brelan(monCalcul.Brelan()) ;
    setnom_carre(monCalcul.Carre()) ;
    setnom_full(monCalcul.Full())  ;
    setnom_pts(monCalcul.PtSuite())  ;
    setnom_gds(monCalcul.GdSuite()) ;
    setnom_yams(monCalcul.Yam());
    setnom_chance(monCalcul.Chance());
}

void interface::setnom_tot1(int rescalc)
{
    QString s = QString::number(rescalc);
    ui->tot1->setText( s);
}
void interface::setnom_tot2(int rescalc)
{
    QString s = QString::number(rescalc);
    ui->tot2->setText( s);
}
void interface::setnom_tot3(int rescalc)
{
    QString s = QString::number(rescalc);
    ui->tot3->setText( s);
}
void interface::setnom_tot4(int rescalc)
{
    QString s = QString::number(rescalc);
    ui->tot4->setText( s);
}
void interface::setnom_tot5(int rescalc)
{
    QString s = QString::number(rescalc);
    ui->tot5->setText( s);
}
void interface::setnom_tot6(int rescalc)
{
    QString s = QString::number(rescalc);
    ui->tot6->setText( s);
}
void interface::setnom_brelan(int rescalc)
{
    QString s = QString::number(rescalc);
    ui->brelan->setText( s);
}
void interface::setnom_carre(int rescalc)
{
    QString s = QString::number(rescalc);
    ui->carre->setText( s);
}
void interface::setnom_full(int rescalc)
{
    QString s = QString::number(rescalc);
    ui->full->setText( s);
}
void interface::setnom_pts(int rescalc)
{
    QString s = QString::number(rescalc);
    ui->pts->setText( s);
}
void interface::setnom_gds(int rescalc)
{
    QString s = QString::number(rescalc);
    ui->gds->setText( s);
}
void interface::setnom_yams(int rescalc)
{
    QString s = QString::number(rescalc);
    ui->yams->setText( s);
}
void interface::setnom_chance(int rescalc)
{
    QString s = QString::number(rescalc);
    ui->chance->setText( s);
}

void interface::afficheDe1(int d1)
{
   QImage image(":/new/images/"+ QString::number(d1,10));
   ui->D1->setPixmap(QPixmap::fromImage(image));
}

void interface::afficheDe2(int d2)
{
   QImage image(":/new/images/"+ QString::number(d2,10));
   ui->D2->setPixmap(QPixmap::fromImage(image));
}

void interface::afficheDe3(int d3)
{
   QImage image(":/new/images/"+ QString::number(d3,10));
   ui->D3->setPixmap(QPixmap::fromImage(image));
}

void interface::afficheDe4(int d4)
{
   QImage image(":/new/images/"+ QString::number(d4,10));
   ui->D4->setPixmap(QPixmap::fromImage(image));
}

void interface::afficheDe5(int d5)
{
   QImage image(":/new/images/"+ QString::number(d5,10));
   ui->D5->setPixmap(QPixmap::fromImage(image));
}

void interface::insertscore_tot1(int score)
{
   QString c = QString::number(score);
    QTableWidgetItem *setdes = new QTableWidgetItem( c);
    ui->score->setItem(-1, 2, setdes);
    setdes->setTextAlignment(5);
    setdes->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

}

void interface::insertscore_tot2(int score)
{
    QString c = QString::number(score);
     QTableWidgetItem *setdes = new QTableWidgetItem( c);
     ui->score->setItem(0, 2, setdes);
     setdes->setTextAlignment(5);
     setdes->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
}

void interface::insertscore_tot3(int score)
{
    QString c = QString::number(score);
     QTableWidgetItem *setdes = new QTableWidgetItem( c);
     ui->score->setItem(1, 2, setdes);
     setdes->setTextAlignment(5);
     setdes->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
}

void interface::insertscore_tot4(int score)
{
    QString c = QString::number(score);
     QTableWidgetItem *setdes = new QTableWidgetItem( c);
     ui->score->setItem(2, 2, setdes);
     setdes->setTextAlignment(5);
     setdes->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
}

void interface::insertscore_tot5(int score)
{
    QString c = QString::number(score);
     QTableWidgetItem *setdes = new QTableWidgetItem( c);
     ui->score->setItem(3, 2, setdes);
     setdes->setTextAlignment(5);
     setdes->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
}

void interface::insertscore_tot6(int score)
{
    QString c = QString::number(score);
     QTableWidgetItem *setdes = new QTableWidgetItem( c);
     ui->score->setItem(4, 2, setdes);
     setdes->setTextAlignment(5);
     setdes->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
}

void interface::insertscore_brelan(int score)
{
    QString c = QString::number(score);
     QTableWidgetItem *setdes = new QTableWidgetItem( c);
     ui->score->setItem(9, 2, setdes);
     setdes->setTextAlignment(5);
     setdes->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
}

void interface::insertscore_carre(int score)
{
    QString c = QString::number(score);
     QTableWidgetItem *setdes = new QTableWidgetItem( c);
     ui->score->setItem(10, 2, setdes);
     setdes->setTextAlignment(5);
     setdes->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
}

void interface::insertscore_full(int score)
{
    QString c = QString::number(score);
     QTableWidgetItem *setdes = new QTableWidgetItem( c);
     ui->score->setItem(11, 2, setdes);
     setdes->setTextAlignment(5);
     setdes->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
}

void interface::insertscore_pts(int score)
{
    QString c = QString::number(score);
     QTableWidgetItem *setdes = new QTableWidgetItem( c);
     ui->score->setItem(12, 2, setdes);
     setdes->setTextAlignment(5);
     setdes->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
}

void interface::insertscore_gds(int score)
{
    QString c = QString::number(score);
     QTableWidgetItem *setdes = new QTableWidgetItem( c);
     ui->score->setItem(13, 2, setdes);
     setdes->setTextAlignment(5);
     setdes->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
}

void interface::insertscore_yams(int score)
{
    QString c = QString::number(score);
     QTableWidgetItem *setdes = new QTableWidgetItem( c);
     ui->score->setItem(14, 2, setdes);
     setdes->setTextAlignment(5);
     setdes->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
}

void interface::insertscore_chance(int score)
{
    QString c = QString::number(score);
     QTableWidgetItem *setdes = new QTableWidgetItem( c);
     ui->score->setItem(15, 2, setdes);
     setdes->setTextAlignment(5);
     setdes->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
}

void interface::AffichageTotal(int score)
{
    QString c = QString::number(score);
     QTableWidgetItem *setdes = new QTableWidgetItem( c);
     ui->score->setItem(17, 2, setdes);
     setdes->setTextAlignment(5);
     setdes->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
}

void interface::AffichageSTotal1(int score)
{
    QString c = QString::number(score);
     QTableWidgetItem *setdes = new QTableWidgetItem( c);
     ui->score->setItem(5, 2, setdes);
     setdes->setTextAlignment(5);
     setdes->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

}

void interface::AffichageSTotal2(int score)
 {
         QString c = QString::number(score);
          QTableWidgetItem *setdes = new QTableWidgetItem( c);
          ui->score->setItem(16, 2, setdes);
          setdes->setTextAlignment(5);
          setdes->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
 }

void interface::AffichageInter(int score)
 {
         QString c = QString::number(score);
          QTableWidgetItem *setdes = new QTableWidgetItem( c);
          ui->score->setItem(7, 2, setdes);
          setdes->setTextAlignment(5);
          setdes->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
 }

void interface::AffichagePtsBonus(int score)
 {
        QString c = QString::number(score);
        QTableWidgetItem *setdes = new QTableWidgetItem( c);
        ui->score->setItem(6, 2, setdes);
        setdes->setTextAlignment(5);
        setdes->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
 }
