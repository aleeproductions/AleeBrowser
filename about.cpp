#include "about.h"
#include "ui_about.h"
#include <QtWebKitWidgets/QWebView>

About::About(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);
}

About::~About()
{
    delete ui;
}
