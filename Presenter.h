//
// Created by eric on 04/05/2020.
//

#ifndef MILESMETERMVP_PRESENTER_H
#define MILESMETERMVP_PRESENTER_H


#include <QtCore/QObject>
#include "Fenetre.h"
#include "Data.h"

class Presenter : public QObject{
Q_OBJECT
private:
    Fenetre *fenetre;
    Data *data;


public:
    Presenter(); //new sur fenetre et data et connection entre les signaux et les slots

    virtual ~Presenter(); //prevoir delete

public slots:
    void updatelabelmiles(); //update miles
    void updatelabelmetres(); //udpafe metre
    void showframe(); //affiche frame



};


#endif //MILESMETERMVP_PRESENTER_H
