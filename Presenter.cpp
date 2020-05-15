//
// Created by eric on 04/05/2020.
//

#include <QtWidgets/QMessageBox>
#include "Presenter.h"
#include "Settings.h"

Presenter::Presenter():QObject() {
fenetre=new Fenetre();
data=new Data();



QObject::connect(fenetre->getMeterslider(),&QSlider::valueChanged, this, &Presenter::updatelabelmiles);
QObject::connect(fenetre->getMilesslider(),&QSlider::valueChanged, this, &Presenter::updatelabelmetres);
QObject::connect(data,&Data::tauxsetted, this, &Presenter::showframe);

data->setTaux(1.640);

fenetre->getMeterslider()->setRange(Settings::minrange,Settings::maxrange);
fenetre->getMilesslider()->setRange(Settings::minrange,Settings::maxrange/data->getTaux());

}

void Presenter::updatelabelmiles() {
    fenetre->getMetervalue()->setText(QString::number(fenetre->getMeterslider()->value()));
    fenetre->getMilesslider()->setValue(fenetre->getMetervalue()->text().toInt() / data->getTaux());
}
void Presenter::showframe() {

        QMessageBox::information(fenetre, "Informations", "Les données sont chargées");

    fenetre->show();
}

void Presenter::updatelabelmetres() {
    fenetre->getMilesvalue()->setText(QString::number(fenetre->getMilesslider()->value()));
    fenetre->getMeterslider()->setValue(fenetre->getMilesvalue()->text().toInt()*data->getTaux());

}

Presenter::~Presenter() {
    delete(fenetre);
    delete(data);
    delete(this);

}
