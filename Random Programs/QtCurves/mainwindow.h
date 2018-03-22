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
    void on_btnAstroid_clicked();

    void on_btnCycloid_clicked();

    void on_btnHuygens_clicked();

    void on_btnHypo_clicked();

    void on_btnLine_clicked();

    void on_spinScale_valueChanged(double scale);

    void on_spinInterval_valueChanged(double interval);

    void on_spinCount_valueChanged(int count);

    void on_btnBackground_clicked();

    void on_btnLineColor_clicked();

    void on_btnCircle_clicked();

    void on_btnEclipse_clicked();

    void on_btnFancyCurve_clicked();

    void on_btnStarFish_clicked();

    void on_btnCloud_clicked();

    void on_btnInvertedCloud_clicked();

private:
    Ui::MainWindow *ui;

    void update_ui();
};

#endif // MAINWINDOW_H
