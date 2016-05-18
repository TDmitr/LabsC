#include "webform.h"
#include "ui_webform.h"
#include <QtWebKitWidgets/QWebView>
#include <QUrl>
#include <QNetworkProxyFactory>

WebForm::WebForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WebForm)
{
    ui->setupUi(this);
    QNetworkProxyFactory::setUseSystemConfiguration(true);
        QWebSettings::globalSettings()->setAttribute(QWebSettings::PluginsEnabled, true);
        QWebSettings::globalSettings()->setAttribute(QWebSettings::AutoLoadImages, true);

    ui->webView->load(QUrl("http://megogo.net/ru/view/22783-zhil-byl-pes.html"));

}

WebForm::~WebForm()
{
    delete ui;
}
