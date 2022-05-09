#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QPixmap>
#include <QTimer>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QLabel labImg;
    QLabel *labdesc;
    QTimer *ptimer;
    QPixmap *pm;
    int num = 1;
    QString path = ":/new/prefix1/img/";
private slots:
    void myfunc();
};
#endif // MAINWINDOW_H
