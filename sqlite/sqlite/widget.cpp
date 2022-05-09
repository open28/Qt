#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");//创建数据库类型
    db.setDatabaseName("ljy.db");//创建数据库文件
    db.open();
    sql = new QSqlQuery();
    sql->exec("create table user1(username,password)");
    //sql->exec("insert into user1(username,password) values('刘金玉','123')");
    qmode = new QSqlQueryModel();
    qmode->setQuery("select * from user1");
    ui->tableView->setModel(qmode);
    qmode->setHeaderData(0,Qt::Horizontal,"用户名");
    qmode->setHeaderData(1,Qt::Horizontal,"密码	");
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    QString username = ui->lineEdit->text();
    QString password = ui-> lineEdit_2->text();
    QString commend = "insert into user1(username,password) values('"+username+"','"+password+"')";
    sql->exec(commend);
    qmode->setQuery("select * from user1");
    //ui->tableView->setModel(qmode);
    QMessageBox::about(this,"消息","登陆成功");
    //connect();
}


void Widget::on_tableView_clicked(const QModelIndex &index)
{
    QString username = index.siblingAtColumn(0).data().toString();//获取第零列的当前点击行的数据
    QString password = index.siblingAtColumn(1).data().toString();
    ui->lineEdit->setText(username);
    ui->lineEdit_2->setText(password);
    currentline = index;

}


void Widget::on_pushButton_2_clicked()
{
    QString username = ui->lineEdit->text();
    QString password = ui-> lineEdit_2->text();
    QString commend = "update user1 set password = '"+password+"' where username = '"+username+"'";
    sql->exec(commend);
    qmode->setQuery("select * from user1");
}


void Widget::on_pushButton_3_clicked()
{
   // QString username = ui->lineEdit->text();
    QString username = currentline.siblingAtColumn(0).data().toString();
    QString commend = "delete from user1 where username = '"+username+"'";
    sql->exec(commend);
    qmode->setQuery("select * from user1");
}

