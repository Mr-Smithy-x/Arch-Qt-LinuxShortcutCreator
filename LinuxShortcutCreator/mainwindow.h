#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_open_app_loc_clicked();

    void on_save_shortcut_clicked();

    void on_app_img_load_clicked();

private:
    Ui::MainWindow *ui;
    QString icon;
};

#endif // MAINWINDOW_H
