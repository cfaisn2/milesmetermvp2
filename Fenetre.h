//
// Created by eric on 04/05/2020.
//

#ifndef MILESMETERMVP_FENETRE_H
#define MILESMETERMVP_FENETRE_H


#include <QtWidgets/QSlider>
#include <QtWidgets/QLabel>

class Fenetre:public QFrame{
Q_OBJECT
private:
    QSlider *meterslider;
    QSlider *milesslider;
    QLabel *metervalue;
    QLabel *milesvalue;

public:
    virtual ~Fenetre(); //destructeur

    Fenetre();

    QSlider *getMeterslider() const;

    QSlider *getMilesslider() const;

    QLabel *getMetervalue() const;

    QLabel *getMilesvalue() const;


};


#endif //MILESMETERMVP_FENETRE_H
