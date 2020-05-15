//
// Created by eric on 04/05/2020.
//

#include "Data.h"

Data::Data() : QObject() {
   //code construction
} //constructeur appel le constructeur de QObject

float Data::getTaux() const {
    return taux;
}

void Data::setTaux(float taux) {
    Data::taux = taux;
    emit tauxsetted();
}
