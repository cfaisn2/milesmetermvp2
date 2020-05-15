//
// Created by eric on 04/05/2020.
//

#include <QtWidgets/QFormLayout>
#include "Fenetre.h"

Fenetre::Fenetre():QFrame() {
    QFormLayout *layout=new QFormLayout(); //instanciation du qFormLayout
    metervalue=new QLabel("0");
    milesvalue=new QLabel("0");
    meterslider=new QSlider();
    meterslider->setOrientation(Qt::Orientation::Horizontal);
    milesslider=new QSlider();
    milesslider->setOrientation(Qt::Orientation::Horizontal);
    /****************ajout dans les lignes du layout***********************/
    layout->addRow(new QLabel("Kilomètres"));
    layout->addRow(metervalue, meterslider);
    layout->addRow(new QLabel("Miles"));
    layout->addRow(milesvalue, milesslider);
    this->setLayout(layout); //a ne pas oublier

}

QSlider *Fenetre::getMeterslider() const {
    return meterslider;
}

QSlider *Fenetre::getMilesslider() const {
    return milesslider;
}

QLabel *Fenetre::getMetervalue() const {
    return metervalue;
}

QLabel *Fenetre::getMilesvalue() const {
    return milesvalue;
}

Fenetre::~Fenetre() {
delete (metervalue);
delete (meterslider);
delete(milesvalue);
delete(milesslider);
}
