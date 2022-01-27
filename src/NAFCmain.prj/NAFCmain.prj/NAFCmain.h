#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_NAFCmain.h"

class NAFCmain : public QMainWindow
{
    Q_OBJECT

public:
    NAFCmain(QWidget *parent = Q_NULLPTR);

private:
    Ui::NAFCmainClass ui;
};
