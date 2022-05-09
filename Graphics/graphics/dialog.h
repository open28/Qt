#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
//#include <QCore>
#include <QtGui>
#include <QGraphicsScene>
#include <QtCore>
#include <QGraphicsRectItem>
QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Dialog *ui;
    QGraphicsScene * scene;
    QGraphicsEllipseItem * ellipse;
    QGraphicsRectItem * rect;
};
#endif // DIALOG_H
