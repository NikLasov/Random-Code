#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QColorDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    update_ui();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::update_ui()
{
    this->ui->spinScale->setValue(this->ui->renderArea->Scale());
    this->ui->spinInterval->setValue(this->ui->renderArea->Interval());
    this->ui->spinCount->setValue(this->ui->renderArea->stepCount());
}

void MainWindow::on_btnAstroid_clicked()
{
    this->ui->renderArea->SetShape(RenderArea::Astroid);
    this->ui->renderArea->repaint();
    update_ui();
}

void MainWindow::on_btnCycloid_clicked()
{
    this->ui->renderArea->SetShape(RenderArea::Cycloid);
    this->ui->renderArea->repaint();
    update_ui();
}

void MainWindow::on_btnHuygens_clicked()
{
    this->ui->renderArea->SetShape(RenderArea::HuygensCycloid);
    this->ui->renderArea->repaint();
    update_ui();
}

void MainWindow::on_btnHypo_clicked()
{
    this->ui->renderArea->SetShape(RenderArea::HypoCycloid);
    this->ui->renderArea->repaint();
    update_ui();    \
}

void MainWindow::on_btnLine_clicked()
{
    this->ui->renderArea->SetShape(RenderArea::Line);
    this->ui->renderArea->repaint();
    update_ui();
}

void MainWindow::on_spinScale_valueChanged(double scale)
{
   this->ui->renderArea->setScale(scale);

}

void MainWindow::on_spinInterval_valueChanged(double interval)
{
    this->ui->renderArea->setInterval(interval);
}

void MainWindow::on_spinCount_valueChanged(int count)
{
    this->ui->renderArea->setStepCount(count);
}

void MainWindow::on_btnBackground_clicked()
{
    QColor color = QColorDialog::getColor(ui->renderArea->backgroundColor(),this,"Select Color");
    ui->renderArea->setBackgroundColor(color);
}

void MainWindow::on_btnLineColor_clicked()
{
    QColor color = QColorDialog::getColor(ui->renderArea->shapeColor(),this,"Select Color");
    ui->renderArea->setShapeColor(color);
}

void MainWindow::on_btnCircle_clicked()
{
    this->ui->renderArea->SetShape(RenderArea::Circle);
    this->ui->renderArea->repaint();
    update_ui();
}

void MainWindow::on_btnEclipse_clicked()
{
    this->ui->renderArea->SetShape(RenderArea::Eclipse);
    this->ui->renderArea->repaint();
    update_ui();
}

void MainWindow::on_btnFancyCurve_clicked()
{
    this->ui->renderArea->SetShape(RenderArea::FancyCurve);
    this->ui->renderArea->repaint();
    update_ui();
}

void MainWindow::on_btnStarFish_clicked()
{
    this->ui->renderArea->SetShape(RenderArea::StarFish);
    this->ui->renderArea->repaint();
    update_ui();
}

void MainWindow::on_btnCloud_clicked()
{
    this->ui->renderArea->SetShape(RenderArea::Cloud);
    this->ui->renderArea->repaint();
    update_ui();
}

void MainWindow::on_btnInvertedCloud_clicked()
{
    this->ui->renderArea->SetShape(RenderArea::InvertedCloud);
    this->ui->renderArea->repaint();
    update_ui();
}
