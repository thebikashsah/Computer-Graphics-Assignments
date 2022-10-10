#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QImage>
#include <iostream>
#include <QMouseEvent>
#include <QPainter>
#include <QPaintDevice>
#include <QPoint>
#include<bits/stdc++.h>
#include<QThread>
#include <unistd.h>
#include <utility>
#include<vector>

using namespace std::chrono;



int red=255,green=255,blue=0;

QImage img=QImage(700,700,QImage::Format_RGB888);
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->x_axis->setStyleSheet("background-color: rgb(51,255,51);");
    ui->y_axis->setStyleSheet("background-color: rgb(51,255,51);");

    int k=ui->grid_size->value();

    // Update the geometry of axis
        ui->x_axis->setGeometry(0,225,700, k);
        ui->y_axis->setGeometry(225, 0, k, 700);

    ui->x_axis->hide();
    ui->y_axis->hide();
    connect(ui->frame,SIGNAL(Mouse_Pos()),this,SLOT(Mouse_Pressed()));
    connect(ui->frame,SIGNAL(sendMousePosition(QPoint&)),this,SLOT(showMousePosition(QPoint&)));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow:: swap(int &a, int &b) {
    int temp = b;
    b = a;
    a = temp;
}

void MainWindow::delay()
{
    QTime dieTime= QTime::currentTime().addSecs(1);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}
class mycolor{
public:
    int r;
    int g;
    int b;
    mycolor(){
        r=0;
        g=0;
        b=0;
    }
    mycolor(int red,int green,int blue){
        r=red;
        g=green;
        b=blue;
    }

};
//void MainWindow::point(int x,int y) //  Set the color of point x,y in the screen
//{
//    int size=ui->grid_size->value();
//    if(size==0)
//        size=10;
//    int a=x/size;
//    int b=y/size;

//    int startx=a*size;
//    int starty=b*size;

//    for(int i=startx;i<=startx+size;i++){
//        for(int j=starty;j<=starty+size;j++){
//            img.setPixel(i,j,qRgb(255,255,0));
//        }
//    }

//    ui->frame->setPixmap(QPixmap::fromImage(img));
//}
void MainWindow::point(int x,int y,int r=red,int g=green,int blu=blue) //  Set the color of point x,y in the screen
{
    int size=ui->grid_size->value();
    if(size==0)
        size=10;
    int a=x/size;
    int b=y/size;
//    r=red;
//    g=green;
//    blu=blue;

    int startx=a*size;
    int starty=b*size;

    for(int i=startx;i<=startx+size;i++){
        for(int j=starty;j<=starty+size;j++){
            img.setPixel(i,j,qRgb(r,g,blu));
        }
    }

    ui->frame->setPixmap(QPixmap::fromImage(img));
}
//void MainWindow::point(int x,int y,int r,int g,int b) //  Set the color of point x,y in the screen
//{
//    int size=ui->grid_size->value();
//    if(size==0)
//        size=10;
//    int a=x/size;
//    int b=y/size;

//    int startx=a*size;
//    int starty=b*size;

//    for(int i=startx;i<=startx+size;i++){
//        for(int j=starty;j<=starty+size;j++){
//            img.setPixel(i,j,qRgb(r,g,b));
//        }
//    }

//    ui->frame->setPixmap(QPixmap::fromImage(img));
//}


void MainWindow::showMousePosition(QPoint &pos) // prints the mouse position on the screen
{
//    int size=ui->grid_size->value();
//    int a=ui->frame->x/size;
//    int b=ui->frame->y/size;

//    int startx=a*size;
//    int starty=b*size;

    ui->mouse_movement->setText(" X : "+QString::number(pos.x())+", Y : "+QString::number(pos.y()));
}

std::vector< std::pair<int,int> > coordinates;
std::vector<mycolor> coord_color;

std::vector< std::pair<int,int> > inter;

void MainWindow::Mouse_Pressed() // If we press anywhere in the screen the coordinates x,y is generated
{
//  int size=ui->grid_size->value();
//   int a=ui->frame->x/size;
//  int b=ui->frame->y/size;

//  int startx=a*sar
    srand(time(0));
    red=arc4random()%255;
    green=arc4random()%255;
    blue=arc4random()%255;

//  int starty=b*size;
    int gridsize=ui->grid_size->value();
    ui->mouse_pressed->setText(" X : "+QString::number(ui->frame->x)+", Y : "+QString::number(ui->frame->y) ); // prints the coordinate
    point(ui->frame->x,ui->frame->y); // sets the color of the point

     if(ui->draw_line->isChecked()==false){
         int j = ui->grid_size->value();
         int xnearest = int((ui->frame->x)/j)*j;
         int ynearest = int((ui->frame->y)/j)*j;
         ui->x_axis->move(0,ynearest+1);
         ui->y_axis->move(xnearest+1,0);
     }
     if(ui->draw_polygon->isChecked()==true){
         coordinates.push_back(std::make_pair((ui->frame->x/gridsize),(ui->frame->y/gridsize)));
//         coord_color.push_back(mycolor(red,green,blue));

     }
     if(ui->interpolate->isChecked()){
         if(inter.size()<=2){
             inter.push_back(std::make_pair((ui->frame->x/gridsize),(ui->frame->y/gridsize)));
         }
     }

//    ui->x_axis->move(0,ui->frame->y); // for the axis
//    ui->y_axis->move(ui->frame->x,0); // for the axis

}

void MainWindow::on_show_axes_clicked()
{
    if(ui->show_axes->isChecked())
    {
//        int x=ui->frame->x;
//        int y=ui->frame->y;

//        for(int j=0;j<img.height();j++)
//        {
//            point(x,j);
//        }
//        for(int i=0;i<img.width();i++)
//        {
//            point(i,y);
//        }
        ui->x_axis->show();
        ui->y_axis->show();
    }
    else{
        ui->x_axis->hide();
        ui->y_axis->hide();
    }
}
void MainWindow::on_set_point1_clicked()
{
    if(ui->draw_line->isChecked()){
        p1.setX(ui->frame->x);
        p1.setY(ui->frame->y);
    }
}

void MainWindow::on_set_point2_clicked()
{
    if(ui->draw_line->isChecked()){
        p2.setX(ui->frame->x);
        p2.setY(ui->frame->y);
    }
}
std::vector<std::pair<int,int>> temp;



void MainWindow::interpolate(){
    int x=temp.size();
    int sred=coord_color[0].r;
    int sgreen=coord_color[0].g;
    int sblue=coord_color[0].b;

    int ered=coord_color[x-1].r;
    int egreen=coord_color[x-1].g;
    int eblue=coord_color[x-1].b;


    int sstart=x;
    int estart=0;
    for(int i=0;i<x;i++){
        point(temp[i].first,temp[i].second,(sstart/x)*sred+(estart/x)*ered,(sstart/x)*sgreen+(estart/x)*egreen,(sstart/x)*sblue+(estart/x)*eblue);
        sstart--;
        estart++;
    }

}
void MainWindow::DDA_for_Polygon(int x1,int y1,int x2,int y2){

    int gridSize=ui->grid_size->value();
//    int x1 = (p1.x()/gridSize);
//    int x2 = (p2.x()/gridSize);
//    int y1 = (p1.y()/gridSize);
//    int y2 = (p2.y()/gridSize);
    // Dx , dy is real pizxel
    int dx = x2-x1;
    int dy = y2-y1;

        int steps=0;
    if(abs(dx) > abs(dy)){
        steps = abs(dx);
    }else{
        steps = abs(dy);
    }

    float x = x1*gridSize+gridSize/2;
    float y = y1*gridSize+gridSize/2;

    float x_incr = ((float)dx)/steps;
    float y_incr = ((float)dy)/steps;

    for(int i=1; i<=steps; i++){
        x += x_incr*gridSize;
        y += y_incr*gridSize;

        temp.push_back(std::make_pair(round(x),round(y)));

        point(round(x), round(y));
//        interpolate();
    }

}
void MainWindow::on_Draw_clicked()
{
    int r=ui->circle_radius->value();
    QPainter painter(&img);
    QPen pen;
    pen.setWidth(1);
    pen.setColor(Qt::red);

    if(ui->interpolate->isChecked()){






    }
    if(ui->draw_polygon->isChecked()){

        for(int i=0;i<coordinates.size();i++){
            DDA_for_Polygon(coordinates[i].first,coordinates[i].second,coordinates[(i+1)%(coordinates.size())].first,coordinates[(i+1)%(coordinates.size())].second);
        }
        coordinates.clear();
//        coord_color.clear();

    }
    if(ui->draw_circle->isChecked()){
        p1.setX(ui->frame->x);
        p1.setY(ui->frame->y);

        int gridsize=ui->grid_size->value();

            int x0 = p1.x()/gridsize;
            int y0 = p1.y()/gridsize;
            x0 = x0*gridsize + gridsize/2;
            y0 = y0*gridsize + gridsize/2;

        if(ui->midpoint_cirlce->isChecked()){
            auto start = high_resolution_clock::now();


            int x=0;
            int y=r*gridsize;

            int p=(1-r)*gridsize;

            while(y>x){
                        delay();
                        point(x0 - x, y0 - y);

                        point(x0 + x, y0 - y);

                        point(x0 - x, y0 + y);

                        point(x0 + x, y0 + y);

                        point(x0 - y, y0 - x);

                        point(x0 + y, y0 - x);

                        point(x0 - y, y0 + x);

                        point(x0 + y, y0 + x);


                        x+=gridsize;
                        if(p<=0){
                            p+=2*x+3;

                        }else{
                            p+=2*x-2*y+5;
                            y-=gridsize;

                        }
            }
            auto stop = high_resolution_clock::now();

            auto duration = duration_cast<milliseconds>(stop - start);

            ui->time_box_3->setText(QString::number(duration.count())+" ms ");







        }
        if(ui->bresenham_circle->isChecked()){ // This is polar circle drawing
            int r = ui->circle_radius->value();
                p1.setX(ui->frame->x);
                p1.setY(ui->frame->y);

                int x0 = p1.x()/gridsize;
                int y0 = p1.y()/gridsize;
                x0 = x0*gridsize + gridsize/2;
                y0 = y0*gridsize + gridsize/2;

                int x = 0;
                int y = r*gridsize;
                int p = (3 - 2*r)*gridsize;
                while(y > x) {
                    point(x0 - x, y0 - y);
                    point(x0 + x, y0 - y);
                    point(x0 - x, y0 + y);
                    point(x0 + x, y0 + y);
                    point(x0 - y, y0 - x);
                    point(x0 + y, y0 - x);
                    point(x0 - y, y0 + x);
                    point(x0 + y, y0 + x);

                    x += gridsize;
                    if(p <= 0) {
                        p += 4*x + 6;
                    } else {
                        p += 4*(x-y) + 10;
                        y -= gridsize;
                    }
                }

        }
        if(ui->polar_circle->isChecked()){
            p1.setX(ui->frame->x);
            p1.setY(ui->frame->y);
            int cx = p1.x()/gridsize;
            int cy = p1.y()/gridsize;
            cx = cx*gridsize + gridsize/2;
            cy = cy*gridsize + gridsize/2;
//            int cx=p1.x();
//            int cy=p1.y();
                int r = ui->circle_radius->value();

                auto start = high_resolution_clock::now();

                for (int i = 0; i <= 360; i++) {
                    double theta = i*(M_PI/180.0);
                    float x = cx + r*cos(theta)*gridsize;

                    int ix = floor(x + 0.5);
//                    ix=ix*gridsize+gridsize/2;
                    float y = cy + r*sin(theta)*gridsize;
                    int iy = floor(y + 0.5);
//                    iy=iy*gridsize+gridsize/2;


                        point(ix,iy,red,green,blue);
//                        delay();


                }

                auto stop = high_resolution_clock::now();
                // Subtracting the time taken to color the pixel
                auto duration = duration_cast<microseconds>(stop - start);
                ui->time_box_3->setText (QString::number(duration.count()) + " microseconds");

                ui->frame->setPixmap(QPixmap::fromImage(img));





        }
//        painter.setPen(pen);
//        painter.drawEllipse(p1,r0,r0);
    }
    if(ui->draw_line->isChecked()){

        if(ui->dda->isChecked()){
                auto start = high_resolution_clock::now();

                        int gridSize=ui->grid_size->value();
                        int x1 = (p1.x()/gridSize);
                        int x2 = (p2.x()/gridSize);
                        int y1 = (p1.y()/gridSize);
                        int y2 = (p2.y()/gridSize);
                        // Dx , dy is real pizxel
                        int dx = x2-x1;
                        int dy = y2-y1;

                            int steps=0;
                        if(abs(dx) > abs(dy)){
                            steps = abs(dx);
                        }else{
                            steps = abs(dy);
                        }

                        float x = x1*gridSize+gridSize/2;
                        float y = y1*gridSize+gridSize/2;

                        float x_incr = ((float)dx)/steps;
                        float y_incr = ((float)dy)/steps;

                        for(int i=1; i<=steps; i++){
                            x += x_incr*gridSize;
                            y += y_incr*gridSize;
                            delay();
                            point(round(x), round(y));
                        }
                        auto stop = high_resolution_clock::now();

                        auto duration = duration_cast<milliseconds>(stop - start);

                        ui->time_box->setText(QString::number(duration.count())+" ms ");


//                            cout << "Time taken by function: "
//                                 << duration.count() << " microseconds" << endl;


        }
        if(ui->bresenham->isChecked()){

//
            auto start = high_resolution_clock::now();
            int gridsize=ui->grid_size->value();
            int x1 = p1.x()/gridsize;
                int y1 = p1.y()/gridsize;
                int x2 = p2.x()/gridsize;
                int y2 = p2.y()/gridsize;
                int dx = fabs(x2 - x1);
                int dy = fabs(y2 - y1);

                int xinc = (x1 > x2 ? -1 : 1);
                int yinc = (y1 > y2 ? -1 : 1);
                bool flag = 1;
                int x = x1*gridsize + gridsize/2;
                int y = y1*gridsize + gridsize/2;
                if(dy > dx) { // if slope > 1, then swap
                    swap(dx,dy);
                    swap(x,y);
                    swap(xinc,yinc);
                    flag = 0;
                }
                int decision = 2*dy - dx;
                int step = dx;
                for(int i=0;i<=step;i++) {
                    delay();
                    if(flag)
                        point(x,y);
                    else
                        point(y,x);

                    if(decision < 0) {
                        x += xinc*gridsize;
                        decision += 2*dy;
                    } else {
                        x += xinc*gridsize;
                        y += yinc*gridsize;
                        decision += 2*dy - 2*dx;
                    }
                }

                auto stop = high_resolution_clock::now();

                auto duration = duration_cast<milliseconds>(stop - start);

                ui->time_box->setText(QString::number(duration.count())+" ms ");



        }

    }

    if(ui->draw_ellipse->isChecked()){
        if(ui->midpoint_ellipse->isChecked()){
            auto start = high_resolution_clock::now();
            p1.setX(ui->frame->x);
                p1.setY(ui->frame->y);
                int rx = ui->ellipse_a->value();
                int ry = ui->ellipse_b->value();
                int x_centre=p1.x();
                int y_centre=p1.y();
                int k = ui->grid_size->value();//GridSize

                x_centre=(x_centre/k)*k+k/2;
                y_centre=(y_centre/k)*k+k/2;

                int x=0;
                int y=ry;

                int rx2=rx*rx;
                int ry2=ry*ry;
                int tworx2=2*rx2;
                int twory2=2*ry2;
                int px=0.0;
                int py=tworx2*y;
                //For first region
                int p1=ry2-rx2*ry+(0.25)*rx2; //Initial value of decision paramemter

                while(px<py)
                    {
                        point(x_centre+x*k,y_centre+y*k);
                        point(x_centre-x*k,y_centre+y*k);
                        point(x_centre-x*k,y_centre-y*k);
                        point(x_centre+x*k,y_centre-y*k);

                        x++;
                        px+=twory2;
                        if(p1>=0) {
                            y--;
                            py-=tworx2;
                            p1=p1+ry2+px-py;

                        }  else{
                            p1=p1+ry2+px;
                        }
                    }
                //For second region
                    p1=ry2*((double)x+0.5)*((double)x+0.5)+rx2*(y-1)*(y-1)-rx2*ry2; //Initial value of decision paramemter


                    while(y>=0)
                    {
                        point(x_centre+x*k,y_centre+y*k);
                        point(x_centre-x*k,y_centre+y*k);
                        point(x_centre-x*k,y_centre-y*k);
                        point(x_centre+x*k,y_centre-y*k);

                        y--;
                        py-=tworx2;
                        if(p1<=0){
                            x++;
                            px+=twory2;
                            p1=p1+rx2-py+px;

                        }  else  {
                            p1=p1+rx2-py;
                        }
                    }
                    auto stop = high_resolution_clock::now();

                    auto duration = duration_cast<milliseconds>(stop - start);

                    ui->time_box_2->setText(QString::number(duration.count())+" ms ");

        }
        if(ui->polar_ellipse->isChecked()){

            int gridsize=ui->grid_size->value();

            int rx = ui->ellipse_a->value();
            int ry = ui->ellipse_b->value();

            p1.setX(ui->frame->x);
            p1.setY(ui->frame->y);
            int cx = p1.x()/gridsize;
            int cy = p1.y()/gridsize;
            cx = cx*gridsize + gridsize/2;
            cy = cy*gridsize + gridsize/2;
//            int cx=p1.x();
//            int cy=p1.y();
//                int r = ui->circle_radius->value();

                auto start = high_resolution_clock::now();

                for (int i = 0; i <= 360; i++) {
                    double theta = i*(M_PI/180.0);
                    float x = cx + rx*cos(theta)*gridsize;

                    int ix = floor(x + 0.5);
//                    ix=ix*gridsize+gridsize/2;
                    float y = cy + ry*sin(theta)*gridsize;
                    int iy = floor(y + 0.5);
//                    iy=iy*gridsize+gridsize/2;


                        point(ix,iy,red,green,blue);
//                        delay();


                }

                auto stop = high_resolution_clock::now();
                // Subtracting the time taken to color the pixel
                auto duration = duration_cast<milliseconds>(stop - start);
                ui->time_box_2->setText (QString::number(duration.count()) + " ms");

                ui->frame->setPixmap(QPixmap::fromImage(img));


        }
    }

   if(ui->draw_grid->isChecked()){
       on_pushButton_clicked();



       int size=ui->grid_size->value();
       if(size==0)
           size=10;

       ui->x_axis->setGeometry(0,225,700, size);
       ui->y_axis->setGeometry(225, 0, size, 700);

       int j=size;
       int xnearest = int((ui->frame->x)/j)*j;
       int ynearest = int((ui->frame->y)/j)*j;
       ui->x_axis->move(0,ynearest+1);
       ui->y_axis->move(xnearest+1,0);

       for(int j=0;j<img.height();j++)
       {
           for(int i=0;i<img.width();i+=size)
           {
               img.setPixel(i,j,qRgb(255,255,255));
           }
       }

       for(int j=0;j<img.height();j+=size)
       {
           for(int i=0;i<img.width();i++)
           {
               img.setPixel(i,j,qRgb(255,255,255));
           }
       }
       ui->frame->setPixmap(QPixmap::fromImage(img));

    }
    ui->frame->setPixmap(QPixmap::fromImage(img));
}

void MainWindow::on_pushButton_clicked() // reset button
{
    for(int j=0;j<img.height();j++)
    {
        for(int i=0;i<img.width();i++)
        {
            img.setPixel(i,j,qRgb(0,0,0));
        }
    }
    ui->frame->setPixmap(QPixmap::fromImage(img));
}





//void MainWindow::on_draw_grid_clicked() // Draw grid radio button
//{
//    // draw vertical lines
//    int size=ui->grid_size->value();

//    for(int j=0;j<img.height();j++)
//    {
//        for(int i=0;i<img.width();i+=size)
//        {
//            img.setPixel(i,j,qRgb(255,255,255));
//        }
//    }

//    for(int j=0;j<img.height();j+=size)
//    {
//        for(int i=0;i<img.width();i++)
//        {
//            img.setPixel(i,j,qRgb(255,255,255));
//        }
//    }
//    ui->frame->setPixmap(QPixmap::fromImage(img));
//}


//void MainWindow::on_grid_size_valueChanged(int arg1) // Grid size changed
//{
//    //

//}
// int gridsize=ui->grid_size->value();
void MainWindow::boundaryfillutil(int x, int y, QRgb edgecolour, int r, int g, int b,int gridsize) {
    if(x < 0 || y < 0 || x >= img.width() || y >= img.height()) return;
    if(img.pixel(x,y) == edgecolour || img.pixel(x,y) == qRgb(r,g,b)) return;
    point(x,y,r,g,b);
    boundaryfillutil(x - gridsize, y, edgecolour,r,g,b,gridsize);
    boundaryfillutil(x + gridsize, y, edgecolour,r,g,b,gridsize);
    boundaryfillutil(x, y - gridsize, edgecolour,r,g,b,gridsize);
    boundaryfillutil(x, y + gridsize, edgecolour,r,g,b,gridsize);
}
void MainWindow::floodfillutil(int x, int y, int r, int g, int b,int gridsize) {
    if(x < 0 || y < 0 || x >= img.width() || y >= img.height()) return;
    if(img.pixel(x,y) == qRgb(r,g,b)) return;
    point(x,y,r,g,b);
    floodfillutil(x - gridsize, y, r,g,b,gridsize);
    floodfillutil(x + gridsize, y, r,g,b,gridsize);
    floodfillutil(x, y - gridsize, r,g,b,gridsize);
    floodfillutil(x, y + gridsize, r,g,b,gridsize);
}

void MainWindow::on_fill_button_clicked()
{
//    if(ui->draw_polygon->isChecked()){
    int gridsize=ui->grid_size->value();

        if(ui->scanline->isChecked()){



        }else if(ui->boundary->isChecked()){

               p1.setX(ui->frame->x);
               p1.setY(ui->frame->y);
               int x = p1.x()/gridsize;
               int y = p1.y()/gridsize;
               x = x*gridsize + gridsize/2;
               y = y*gridsize + gridsize/2;
               point(x,y,0,0,0);
               boundaryfillutil(x,y,qRgb(255,255,0),255,255,255,gridsize);



        }else if(ui->flood->isChecked()){

                p1.setX(ui->frame->x);
                p1.setY(ui->frame->y);
                int x = p1.x()/gridsize;
                int y = p1.y()/gridsize;
                x = x*gridsize + gridsize/2;
                y = y*gridsize + gridsize/2;
                point(x,y,0,0,0);
                floodfillutil(x,y,255,255,0,gridsize);



        }


//    }
}


