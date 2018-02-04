//
// Created by plusl on 2018/2/4.
//

#include "MainWindow.h"
#include <QTime>

MainWindow::MainWindow(QMainWindow* parent)
        : QMainWindow(parent),
          ui(new Ui::MainWindow) {
    this->ui->setupUi(this);
    for (int i = 0; i < 5; ++i) {
        this->ui->lotteryListWidget->item(i)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);

    }
    this->lotteryList = new LotteryList();
    this->lotteryList->loadFromFile("data.txt");

    //this->ui->circleLabel->setPixmap(QPixmap(":/images/circle.png").scaled(80, 80));
}

MainWindow::~MainWindow()
{
    delete this->ui;
    delete this->lotteryList;
}

void MainWindow::on_funPushButton_clicked() {
    static LotteryList::iterator nowIterator = this->lotteryList->begin();
    static bool stop = false;
    LotteryList::iterator tmpIterator;
    if (this->ui->funPushButton->text() == "Start") {
        stop  = false;
        this->ui->funPushButton->setText("Stop");
        while(stop == false) {
            tmpIterator = nowIterator;
            nowIterator = this->lotteryList->nextItreator(nowIterator);
            for (int i = 0; i < 5; ++i) {
                this->ui->lotteryListWidget->item(i)->setText(tmpIterator->c_str());
                tmpIterator = this->lotteryList->nextItreator(tmpIterator);
            }
            msleep(1000);
        }

        this->ui->funPushButton->setEnabled(true);
        this->ui->funPushButton->setText("Start");

    } else {
        this->ui->funPushButton->setEnabled(false);
        stop = true;
    }



}

void msleep(unsigned int msecs) {
    QTime reachTime = QTime::currentTime().addMSecs(msecs);
    while(QTime::currentTime() < reachTime)
    {
        QApplication::processEvents(); //让Qt去处理未处理的事件
    }
}
