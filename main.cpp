//
// Created by kabir on 02/02/21.
//
#include <QApplication>

#include "calculator.h"

int main(int argc, char *argv[])
{
#ifdef Q_OS_ANDROID
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QApplication app(argc, argv);
    Calculator calc;
    calc.show();
    return app.exec();
}

