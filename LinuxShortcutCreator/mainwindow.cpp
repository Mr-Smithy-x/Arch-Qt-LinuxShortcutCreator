#include "mainwindow.h"
#include "QDialog"
#include "QMessageBox"
#include "QFileDialog"
#include "ui_mainwindow.h"
#include "stdio.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_open_app_loc_clicked()
{
    QString file = QFileDialog::getOpenFileName(this, "Open Binary",QDir::homePath(),"*.*",0,0);
    if(file.length()>0){
        ui->app_loc->setText(file);
    }else{
        QMessageBox *q = new QMessageBox(this);
        q->setText("No file selected");
        q->setWindowTitle("Error");
        q->show();
    }
}

void MainWindow::on_save_shortcut_clicked()
{
    QString file = QFileDialog::getSaveFileName(this,"Save Shortcut", QDir::homePath().append("/.local/share/applications/"),"*.desktop",0,0);
    if(file.length()>0){
    QFile f(file + ".desktop");
    f.open( QIODevice::WriteOnly );
    QString text = "[Desktop Entry]\nVersion=" + ui->app_versioning->text();
    text.append("\nType=Application");
    text.append("\nName=" + ui->app_name->text());
    text.append("\nIcon=" + ui->app_img_loc->text());
    text.append("\nExec=\"" + ui->app_loc->text() + "\"");
    text.append("\nComment=" + ui->app_desc->text());
    text.append("\nCategories=" + ui->app_versioning->text() + ";");
    text.append("\nTerminal=false");
    f.write(text.toStdString().c_str());
    f.flush();
    f.close();

    QMessageBox *q = new QMessageBox(this);
    q->setText("Your shortcut has been created!");
    q->setWindowTitle("File Saved");
    q->show();
    }else{
        QMessageBox *q = new QMessageBox(this);
        q->setText("No file saved");
        q->setWindowTitle("Error");
        q->show();
    }
}

void MainWindow::on_app_img_load_clicked()
{
    QString file = QFileDialog::getOpenFileName(this, "Open Imagey",QDir::homePath(),"*.png",0,0);
    if(file.length()>0){
    ui->app_img_loc->setText(file);
    }else{
        QMessageBox *q = new QMessageBox(this);
        q->setText("No image selected");
        q->setWindowTitle("Error");
        q->show();
    }
}
