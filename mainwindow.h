#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QtCore>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public slots:
    void Mouse_Pressed();
    void showMousePosition(QPoint& pos);
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_show_axes_clicked();

    void on_Draw_clicked();

    void swap(int &a, int &b);

    void on_set_point1_clicked();

    void on_set_point2_clicked();

    void on_pushButton_clicked();
    void interpolate();

//    void breseham_slope_less_than_1(int x1,int y1,int x2,int y2);

//    void bresenham_slope_greater_than_1(int x1,int y1,int x2,int y2);


//    void on_draw_grid_clicked();

//    void on_grid_size_valueChanged(int arg1);
    void point(int x,int y,int r,int g,int blue);
    void delay();
    void DDA_for_Polygon(int x1,int y1,int x2,int y2);
    void boundaryfillutil(int x, int y, QRgb edgecolour, int r, int g, int b,int gridsize);

    void floodfillutil(int x, int y, int r, int g, int b,int gridsize);

    void on_fill_button_clicked();

private:
    Ui::MainWindow *ui;
    QPoint p1,p2;
//    void point(int,int);
};

#endif // MAINWINDOW_H
