/********************************************************************************
** Form generated from reading UI file 'webform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEBFORM_H
#define UI_WEBFORM_H

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WebForm
{
public:
    QWebView *webView;

    void setupUi(QWidget *WebForm)
    {
        if (WebForm->objectName().isEmpty())
            WebForm->setObjectName(QStringLiteral("WebForm"));
        WebForm->resize(1200, 600);
        webView = new QWebView(WebForm);
        webView->setObjectName(QStringLiteral("webView"));
        webView->setGeometry(QRect(0, 0, 1200, 600));
        webView->setAcceptDrops(true);
        webView->setUrl(QUrl(QStringLiteral("about:blank")));
        webView->setZoomFactor(1);

        retranslateUi(WebForm);

        QMetaObject::connectSlotsByName(WebForm);
    } // setupUi

    void retranslateUi(QWidget *WebForm)
    {
        WebForm->setWindowTitle(QApplication::translate("WebForm", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class WebForm: public Ui_WebForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEBFORM_H
