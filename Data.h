//
// Created by eric on 04/05/2020.
//

#ifndef MILESMETERMVP_DATA_H
#define MILESMETERMVP_DATA_H


#include <QtCore/QObject>

class Data : public QObject
{
Q_OBJECT
private:
    float taux;
public:
    Data();

    float getTaux() const;

    void setTaux(float taux); //emit

public: signals:
    void tauxsetted();
};


#endif //MILESMETERMVP_DATA_H
