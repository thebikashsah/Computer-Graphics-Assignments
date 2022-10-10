/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <my_label.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    my_label *frame;
    QLabel *mouse_movement;
    QLabel *label_3;
    QLabel *mouse_pressed;
    QLabel *label_5;
    QFrame *x_axis;
    QFrame *y_axis;
    QGroupBox *groupBox;
    QPushButton *set_point1;
    QPushButton *set_point2;
    QRadioButton *draw_line;
    QGroupBox *groupBox_5;
    QRadioButton *bresenham;
    QRadioButton *dda;
    QLabel *label;
    QLabel *time_box;
    QGroupBox *groupBox_2;
    QSpinBox *grid_size;
    QRadioButton *draw_grid;
    QPushButton *Draw;
    QPushButton *pushButton;
    QRadioButton *interpolate;
    QGroupBox *groupBox_4;
    QRadioButton *draw_circle;
    QSpinBox *circle_radius;
    QGroupBox *groupBox_3;
    QRadioButton *midpoint_cirlce;
    QRadioButton *bresenham_circle;
    QRadioButton *polar_circle;
    QLabel *label_2;
    QLabel *time_box_3;
    QCheckBox *show_axes;
    QGroupBox *groupBox_6;
    QRadioButton *draw_ellipse;
    QSpinBox *ellipse_a;
    QSpinBox *ellipse_b;
    QGroupBox *groupBox_7;
    QRadioButton *midpoint_ellipse;
    QRadioButton *polar_ellipse;
    QLabel *time_box_2;
    QLabel *label_4;
    QGroupBox *groupBox_8;
    QRadioButton *draw_polygon;
    QGroupBox *groupBox_9;
    QRadioButton *scanline;
    QRadioButton *flood;
    QRadioButton *boundary;
    QPushButton *fill_button;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1102, 736);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        frame = new my_label(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 700, 700));
        frame->setCursor(QCursor(Qt::CrossCursor));
        frame->setMouseTracking(true);
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        frame->setFrameShape(QFrame::Box);
        frame->setLineWidth(1);
        mouse_movement = new QLabel(centralWidget);
        mouse_movement->setObjectName(QString::fromUtf8("mouse_movement"));
        mouse_movement->setGeometry(QRect(830, 40, 111, 31));
        mouse_movement->setFrameShape(QFrame::Panel);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(810, 10, 131, 20));
        label_3->setFrameShadow(QFrame::Plain);
        label_3->setTextFormat(Qt::AutoText);
        mouse_pressed = new QLabel(centralWidget);
        mouse_pressed->setObjectName(QString::fromUtf8("mouse_pressed"));
        mouse_pressed->setGeometry(QRect(970, 40, 111, 31));
        mouse_pressed->setFrameShape(QFrame::Panel);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(970, 10, 101, 20));
        x_axis = new QFrame(centralWidget);
        x_axis->setObjectName(QString::fromUtf8("x_axis"));
        x_axis->setGeometry(QRect(0, 225, 700, 1));
        x_axis->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 255);"));
        x_axis->setFrameShape(QFrame::HLine);
        x_axis->setFrameShadow(QFrame::Sunken);
        y_axis = new QFrame(centralWidget);
        y_axis->setObjectName(QString::fromUtf8("y_axis"));
        y_axis->setGeometry(QRect(225, 0, 1, 700));
        y_axis->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(85, 255, 255);"));
        y_axis->setFrameShape(QFrame::VLine);
        y_axis->setFrameShadow(QFrame::Sunken);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(710, 180, 391, 151));
        set_point1 = new QPushButton(groupBox);
        set_point1->setObjectName(QString::fromUtf8("set_point1"));
        set_point1->setGeometry(QRect(20, 60, 111, 23));
        set_point2 = new QPushButton(groupBox);
        set_point2->setObjectName(QString::fromUtf8("set_point2"));
        set_point2->setGeometry(QRect(20, 90, 111, 23));
        draw_line = new QRadioButton(groupBox);
        draw_line->setObjectName(QString::fromUtf8("draw_line"));
        draw_line->setGeometry(QRect(20, 30, 111, 17));
        groupBox_5 = new QGroupBox(groupBox);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(270, 20, 120, 131));
        bresenham = new QRadioButton(groupBox_5);
        bresenham->setObjectName(QString::fromUtf8("bresenham"));
        bresenham->setGeometry(QRect(10, 10, 99, 20));
        dda = new QRadioButton(groupBox_5);
        dda->setObjectName(QString::fromUtf8("dda"));
        dda->setGeometry(QRect(10, 30, 99, 20));
        label = new QLabel(groupBox_5);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 60, 81, 31));
        time_box = new QLabel(groupBox_5);
        time_box->setObjectName(QString::fromUtf8("time_box"));
        time_box->setGeometry(QRect(10, 90, 81, 21));
        time_box->setFrameShape(QFrame::Box);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(710, 530, 391, 121));
        grid_size = new QSpinBox(groupBox_2);
        grid_size->setObjectName(QString::fromUtf8("grid_size"));
        grid_size->setGeometry(QRect(110, 10, 42, 22));
        draw_grid = new QRadioButton(groupBox_2);
        draw_grid->setObjectName(QString::fromUtf8("draw_grid"));
        draw_grid->setGeometry(QRect(10, 10, 99, 20));
        Draw = new QPushButton(groupBox_2);
        Draw->setObjectName(QString::fromUtf8("Draw"));
        Draw->setGeometry(QRect(60, 60, 101, 41));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(240, 60, 101, 41));
        interpolate = new QRadioButton(groupBox_2);
        interpolate->setObjectName(QString::fromUtf8("interpolate"));
        interpolate->setGeometry(QRect(240, 10, 101, 17));
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(710, 70, 391, 111));
        draw_circle = new QRadioButton(groupBox_4);
        draw_circle->setObjectName(QString::fromUtf8("draw_circle"));
        draw_circle->setGeometry(QRect(20, 30, 101, 17));
        circle_radius = new QSpinBox(groupBox_4);
        circle_radius->setObjectName(QString::fromUtf8("circle_radius"));
        circle_radius->setGeometry(QRect(160, 30, 46, 20));
        groupBox_3 = new QGroupBox(groupBox_4);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(250, 20, 120, 91));
        midpoint_cirlce = new QRadioButton(groupBox_3);
        midpoint_cirlce->setObjectName(QString::fromUtf8("midpoint_cirlce"));
        midpoint_cirlce->setGeometry(QRect(10, 0, 99, 20));
        bresenham_circle = new QRadioButton(groupBox_3);
        bresenham_circle->setObjectName(QString::fromUtf8("bresenham_circle"));
        bresenham_circle->setGeometry(QRect(10, 20, 99, 20));
        polar_circle = new QRadioButton(groupBox_3);
        polar_circle->setObjectName(QString::fromUtf8("polar_circle"));
        polar_circle->setGeometry(QRect(10, 40, 99, 20));
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 80, 81, 31));
        time_box_3 = new QLabel(groupBox_4);
        time_box_3->setObjectName(QString::fromUtf8("time_box_3"));
        time_box_3->setGeometry(QRect(120, 80, 81, 21));
        time_box_3->setFrameShape(QFrame::Box);
        show_axes = new QCheckBox(centralWidget);
        show_axes->setObjectName(QString::fromUtf8("show_axes"));
        show_axes->setGeometry(QRect(720, 10, 91, 21));
        groupBox_6 = new QGroupBox(centralWidget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(710, 330, 391, 101));
        draw_ellipse = new QRadioButton(groupBox_6);
        draw_ellipse->setObjectName(QString::fromUtf8("draw_ellipse"));
        draw_ellipse->setGeometry(QRect(10, 30, 99, 20));
        ellipse_a = new QSpinBox(groupBox_6);
        ellipse_a->setObjectName(QString::fromUtf8("ellipse_a"));
        ellipse_a->setGeometry(QRect(20, 60, 42, 22));
        ellipse_b = new QSpinBox(groupBox_6);
        ellipse_b->setObjectName(QString::fromUtf8("ellipse_b"));
        ellipse_b->setGeometry(QRect(90, 60, 42, 22));
        groupBox_7 = new QGroupBox(groupBox_6);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(270, 20, 120, 80));
        midpoint_ellipse = new QRadioButton(groupBox_7);
        midpoint_ellipse->setObjectName(QString::fromUtf8("midpoint_ellipse"));
        midpoint_ellipse->setGeometry(QRect(10, 10, 99, 20));
        polar_ellipse = new QRadioButton(groupBox_7);
        polar_ellipse->setObjectName(QString::fromUtf8("polar_ellipse"));
        polar_ellipse->setGeometry(QRect(10, 30, 99, 20));
        time_box_2 = new QLabel(groupBox_7);
        time_box_2->setObjectName(QString::fromUtf8("time_box_2"));
        time_box_2->setGeometry(QRect(10, 50, 81, 21));
        time_box_2->setFrameShape(QFrame::Box);
        label_4 = new QLabel(groupBox_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(190, 60, 81, 31));
        groupBox_8 = new QGroupBox(centralWidget);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(710, 430, 391, 91));
        draw_polygon = new QRadioButton(groupBox_8);
        draw_polygon->setObjectName(QString::fromUtf8("draw_polygon"));
        draw_polygon->setGeometry(QRect(10, 40, 121, 20));
        groupBox_9 = new QGroupBox(groupBox_8);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(140, 20, 131, 71));
        scanline = new QRadioButton(groupBox_9);
        scanline->setObjectName(QString::fromUtf8("scanline"));
        scanline->setGeometry(QRect(10, 0, 101, 20));
        flood = new QRadioButton(groupBox_9);
        flood->setObjectName(QString::fromUtf8("flood"));
        flood->setGeometry(QRect(10, 20, 99, 20));
        boundary = new QRadioButton(groupBox_9);
        boundary->setObjectName(QString::fromUtf8("boundary"));
        boundary->setGeometry(QRect(10, 40, 99, 20));
        fill_button = new QPushButton(groupBox_8);
        fill_button->setObjectName(QString::fromUtf8("fill_button"));
        fill_button->setGeometry(QRect(280, 40, 101, 41));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1102, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        frame->setText(QString());
        mouse_movement->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "      Mouse Movement", nullptr));
        mouse_pressed->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "  Mouse Pressed", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Line ", nullptr));
        set_point1->setText(QCoreApplication::translate("MainWindow", "First Point", nullptr));
        set_point2->setText(QCoreApplication::translate("MainWindow", "Second Point", nullptr));
        draw_line->setText(QCoreApplication::translate("MainWindow", "Draw Line", nullptr));
        groupBox_5->setTitle(QString());
        bresenham->setText(QCoreApplication::translate("MainWindow", "Bresenham", nullptr));
        dda->setText(QCoreApplication::translate("MainWindow", "DDA", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Time in ms:", nullptr));
        time_box->setText(QString());
        groupBox_2->setTitle(QString());
        draw_grid->setText(QCoreApplication::translate("MainWindow", "Draw Grid", nullptr));
        Draw->setText(QCoreApplication::translate("MainWindow", "Draw", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "RESET", nullptr));
        interpolate->setText(QCoreApplication::translate("MainWindow", "Interpolate", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Circle", nullptr));
        draw_circle->setText(QCoreApplication::translate("MainWindow", "Draw Circle", nullptr));
        groupBox_3->setTitle(QString());
        midpoint_cirlce->setText(QCoreApplication::translate("MainWindow", "Mid-Point", nullptr));
        bresenham_circle->setText(QCoreApplication::translate("MainWindow", "Bresenham", nullptr));
        polar_circle->setText(QCoreApplication::translate("MainWindow", "Polar", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Time in ms:", nullptr));
        time_box_3->setText(QString());
        show_axes->setText(QCoreApplication::translate("MainWindow", "Show Axes", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "Ellipse", nullptr));
        draw_ellipse->setText(QCoreApplication::translate("MainWindow", "Draw Ellipse", nullptr));
        groupBox_7->setTitle(QString());
        midpoint_ellipse->setText(QCoreApplication::translate("MainWindow", "Mid-Point", nullptr));
        polar_ellipse->setText(QCoreApplication::translate("MainWindow", "Polar", nullptr));
        time_box_2->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "Time in ms:", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("MainWindow", "Polygon", nullptr));
        draw_polygon->setText(QCoreApplication::translate("MainWindow", "Draw Polygon", nullptr));
        groupBox_9->setTitle(QString());
        scanline->setText(QCoreApplication::translate("MainWindow", "Scanline Fill", nullptr));
        flood->setText(QCoreApplication::translate("MainWindow", "Flood Fill", nullptr));
        boundary->setText(QCoreApplication::translate("MainWindow", "Boundary Fill", nullptr));
        fill_button->setText(QCoreApplication::translate("MainWindow", "FILL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
