#include <iostream>
#include <QtWidgets/QApplication>
#include "Presenter.h"
#include "Settings.h"

int Settings::maxrange=16400;
int Settings::minrange=0;
int main(int argc, char *argv[])

{
    QApplication app(argc, argv);


    Presenter *p=new Presenter();

    return app.exec();
}
