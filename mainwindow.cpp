#include "mainwindow.h"
#include "./ui_mainwindow.h"

using namespace std;



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lcdNumber->display("");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked() //3
{
    if(counted==true){
        if(mark!="minus"){
            val="";
        }
        counted=false;
    }
    val+="3";
    ui->lcdNumber->display(val);
}


void MainWindow::on_pushButton_4_clicked() //1
{
    if(counted==true){
        if(mark!="minus"){
            val="";
        }
        counted=false;
    }
    val+="1";
    ui->lcdNumber->display(val);
}


void MainWindow::on_pushButton_12_clicked() //plus
{
    result =ui->lcdNumber->value();
    ui->lcdNumber->display("");
    val="";
    mark="plus";

}


void MainWindow::on_pushButton_11_clicked() //minus
{
    if(counted==true){
        val="";
    }
    val="";
    result =ui->lcdNumber->value();
    mark="minus";
    ui->lcdNumber->display("");
    val+="-";
    ui->lcdNumber->display(val);
}


void MainWindow::on_pushButton_clicked() // equals
{
    if(mark=="multiply" or mark=="minus"){
        result*=ui->lcdNumber->value();
        ui->lcdNumber->display(result);
        counted=true;
    }else{
        result +=ui->lcdNumber->value();
        ui->lcdNumber->display(result);
        counted=true;
    }

}


void MainWindow::on_pushButton_3_clicked()//2
{
    if(counted==true){
        if(mark!="minus"){
            val="";
        }
        counted=false;
    }
    val+="2";
    ui->lcdNumber->display(val);
}


void MainWindow::on_pushButton_6_clicked() //4
{
    if(counted==true){
        if(mark!="minus"){
            val="";
        }
        counted=false;
    }
    val+="4";
    ui->lcdNumber->display(val);
}


void MainWindow::on_pushButton_7_clicked() //5
{
    if(counted==true){
        if(mark!="minus"){
            val="";
        }
        counted=false;
    }
    val+="5";
    ui->lcdNumber->display(val);
}


void MainWindow::on_pushButton_5_clicked() //6
{
    if(counted==true){
        if(mark!="minus"){
            val="";
        }
        counted=false;
    }
    val+="6";
    ui->lcdNumber->display(val);
}


void MainWindow::on_pushButton_9_clicked() //7
{
    if(counted==true){
        if(mark!="minus"){
            val="";
        }
        counted=false;
    }
    val+="7";
    ui->lcdNumber->display(val);
}


void MainWindow::on_pushButton_10_clicked()//8
{
    if(counted==true){
        if(mark!="minus"){
            val="";
        }
        counted=false;
    }
    val+="8";
    ui->lcdNumber->display(val);
}


void MainWindow::on_pushButton_8_clicked()//9
{
    if(counted==true){
        if(mark!="minus"){
            val="";
        }
        counted=false;
    }
    val+="9";
    ui->lcdNumber->display(val);
}
void MainWindow::on_pushButton_14_clicked()//0
{
    if(counted==true){
        if(mark!="minus"){
            val="";
        }
        counted=false;
    }

    if(val[0]=="0"){

    }else{
        val+="0";
    }

    ui->lcdNumber->display(val);
}


void MainWindow::on_pushButton_16_clicked()
{
    val="";
    result=0;
    ui->lcdNumber->display(val);
}


void MainWindow::on_pushButton_15_clicked()
{
    if(val==""){

    }else{
        val+=".";
        ui->lcdNumber->display(val);
    }

}


void MainWindow::on_pushButton_13_clicked() //multiply
{
    if(counted==true){
        val="";
    }
    val="";
    result =ui->lcdNumber->value();
    mark="multiply";
    ui->lcdNumber->display("");
}

