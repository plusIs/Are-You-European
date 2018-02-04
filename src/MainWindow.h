//
// Created by plusl on 2018/2/4.
//

#ifndef ARE_YOU_EUROPEAN_MAINWINDOW_H
#define ARE_YOU_EUROPEAN_MAINWINDOW_H
#include <QtWidgets/QMainWindow>
#include <QListWidget>

#include "ui_MainWindow.h"

#include "LotteryList.h"


class MainWindow : public QMainWindow{
    Q_OBJECT
public:
    MainWindow(QMainWindow* parent = 0);
    ~MainWindow();


private slots:
    /*void on_contactListWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);
    void on_searchLineEdit_returnPressed();
    void on_removePushButton_clicked();
    void on_editPushButton_clicked();
    void on_addPushButton_clicked();
    void on_nameLineEdit_editingFinished();*/
    void on_funPushButton_clicked();


private:
    Ui::MainWindow *ui;
    LotteryList *lotteryList;
    //bool edit = false;

};

void msleep(unsigned int msecs);

#endif //ARE_YOU_EUROPEAN_MAINWINDOW_H
