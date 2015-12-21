/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QComboBox *comboBox;
    QLineEdit *app_name;
    QLineEdit *app_loc;
    QLineEdit *app_desc;
    QLineEdit *app_versioning;
    QPushButton *save_shortcut;
    QPushButton *open_app_loc;
    QPushButton *app_img_load;
    QLineEdit *app_img_loc;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(300, 339);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 50, 281, 28));
        app_name = new QLineEdit(centralWidget);
        app_name->setObjectName(QStringLiteral("app_name"));
        app_name->setGeometry(QRect(10, 90, 281, 32));
        app_loc = new QLineEdit(centralWidget);
        app_loc->setObjectName(QStringLiteral("app_loc"));
        app_loc->setGeometry(QRect(10, 130, 191, 32));
        app_loc->setReadOnly(true);
        app_desc = new QLineEdit(centralWidget);
        app_desc->setObjectName(QStringLiteral("app_desc"));
        app_desc->setGeometry(QRect(10, 170, 281, 32));
        app_versioning = new QLineEdit(centralWidget);
        app_versioning->setObjectName(QStringLiteral("app_versioning"));
        app_versioning->setGeometry(QRect(10, 210, 281, 32));
        save_shortcut = new QPushButton(centralWidget);
        save_shortcut->setObjectName(QStringLiteral("save_shortcut"));
        save_shortcut->setGeometry(QRect(10, 250, 281, 32));
        open_app_loc = new QPushButton(centralWidget);
        open_app_loc->setObjectName(QStringLiteral("open_app_loc"));
        open_app_loc->setGeometry(QRect(210, 130, 81, 32));
        app_img_load = new QPushButton(centralWidget);
        app_img_load->setObjectName(QStringLiteral("app_img_load"));
        app_img_load->setGeometry(QRect(190, 10, 101, 31));
        app_img_loc = new QLineEdit(centralWidget);
        app_img_loc->setObjectName(QStringLiteral("app_img_loc"));
        app_img_loc->setGeometry(QRect(10, 10, 171, 31));
        app_img_loc->setReadOnly(true);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 300, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Linux Shortcut Creator", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "AudioVideo", 0)
         << QApplication::translate("MainWindow", "Audio", 0)
         << QApplication::translate("MainWindow", "Video", 0)
         << QApplication::translate("MainWindow", "Development", 0)
         << QApplication::translate("MainWindow", "Education", 0)
         << QApplication::translate("MainWindow", "Game", 0)
         << QApplication::translate("MainWindow", "Graphics", 0)
         << QApplication::translate("MainWindow", "Network", 0)
         << QApplication::translate("MainWindow", "Office", 0)
         << QApplication::translate("MainWindow", "Science", 0)
         << QApplication::translate("MainWindow", "Settings", 0)
         << QApplication::translate("MainWindow", "System", 0)
         << QApplication::translate("MainWindow", "Utility", 0)
        );
        app_name->setPlaceholderText(QApplication::translate("MainWindow", "Application Name", 0));
        app_loc->setPlaceholderText(QApplication::translate("MainWindow", "Application Location", 0));
        app_desc->setPlaceholderText(QApplication::translate("MainWindow", "Application Description", 0));
        app_versioning->setPlaceholderText(QApplication::translate("MainWindow", "Application Versioning", 0));
        save_shortcut->setText(QApplication::translate("MainWindow", "Save", 0));
        open_app_loc->setText(QApplication::translate("MainWindow", "Open", 0));
        app_img_load->setText(QApplication::translate("MainWindow", "Load Image", 0));
        app_img_loc->setPlaceholderText(QApplication::translate("MainWindow", "Icon Location", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
