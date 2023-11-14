#include <iostream>
#include<graphics.h>
#include <math.h>

using namespace std;

class Point
{
    int x,y;
    public:
        void set_x(int _x){
            x=_x;
        }
        void set_y(int _y){
        y= _y;
        }
        void set_xy(int _x, int _y){
            x=_x;
            y=_y;
        }
        void paint(){
            cout<<"("<<x<<","<<y<<")"<<endl;
        }
        Point(int _x,int _y){
            x=_x;
            y=_y;
        }
        Point(){
            x=0;
            y=0;
            cout<<"constructor point"<<endl;
        };
        ~Point(){
            cout<<"Destroy Point"<<endl;
        }
};

class Line
{
    Point lp1,lp2;
    Point *ptr1,*ptr2;
    public:
        Line(){
            ptr1=NULL;
            ptr2=NULL;
        }
        Line(int p1x,int p1y, int p2x,int p2y){
            lp1.set_xy(p1x,p1y);
            lp2.set_xy(p2x,p2y);
            line(p1x,p1y,p2x,p2y);

        }

        void setPoints(Point *p1,Point *p2){
            ptr1=p1;
            ptr2=p2;
        }
        void set_lp1(int _x, int _y){
            lp1.set_xy(_x,_y);
        }
        void set_lp2(int _x, int _y){
            lp2.set_xy(_x,_y);
        }
        void paintLine(){
            lp1.paint();
            lp2.paint();
        }
        void paintLine(Point p1,Point p2){//assoication
            p1.paint();
            p2.paint();
        }
        void paintLine2(){//assoication
           if(ptr1!=NULL&&ptr2!=NULL){
            ptr1->paint();
            ptr2->paint();
           }
        }
        ~Line(){
            cout<<"Destroy Line"<<endl;
        }
};

class Circle{
    Point p;
    Point *ptr;
    int radius;
public:
    Circle(){
        p.set_xy(0,0);
        radius=0;
    }
    Circle(int px,int py, int _radius){
            p.set_xy(px,py);
            radius=_radius;
        }
    void set_p(int _x,int _y){
            p.set_xy(_x,_y);
        }
    void set_radius(int _radius){
        radius= _radius;
        }
    void set_circlePara(int x,int y ,int _radius){
          p.set_xy(x,y);
          radius= _radius;
          circle(x,y,_radius);

    }
    void enterPoint(Point *p){
     ptr=p;
    }
    void paintCircle2(){
        ptr->paint();
        cout<<radius<<endl;
    }
    void paintCircle(){
        p.paint();
        cout<<radius<<endl;
    }
    void paintCircle(Point x){//assoication
        x.paint();
        cout<<radius<<endl;
    }
    ~Circle(){
         cout<<"Destroy circle"<<endl;
    }


};

int main()
{
    int gdriver = DETECT, gmode, errorcode;
initgraph(&gdriver,&gmode,"d:\\tc\\bgi");
    Point p1(20,20);
    Point p2(10,10);
    Line l1;
    l1=Line(400,300,200,300);
    l1.setPoints(&p1,&p2);
    l1.paintLine2();
   Circle c1;
   c1.set_circlePara(300,200,150);
   c1.paintCircle();
   Point p3(10,20);
   c1.enterPoint(&p3);
   c1.paintCircle2();
   Point p4 (50,50);
   c1.paintCircle(p4);
   getch();
   closegraph();
    return 0;
}

