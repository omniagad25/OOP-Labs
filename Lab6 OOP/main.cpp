#include <iostream>
#include<graphics.h>
using namespace std;

class Point
{
    int x,y;
public:
    void set_x(int _x)
    {
        x=_x;
    }
    void set_y(int _y)
    {
        y= _y;
    }
    void set_xy(int _x, int _y)
    {
        x=_x;
        y=_y;
    }
    int get_x(){
        return x;
    }
    int get_y(){
        return y;
    }
    void paint()
    {
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
    Point(int _x,int _y)
    {
        x=_x;
        y=_y;
    }
    Point()
    {
        x=0;
        y=0;
        cout<<"constructor point"<<endl;
    }
    ~Point()
    {
        cout<<"Destroy Point"<<endl;
    }
};
class Shape
{
protected:
    int color;
    Point p1;
    Point p2;
public:
    void setColor(int _color)
    {
        color=_color;
    }
    void setPoint1(int _x,int _y)
    {
        p1.set_xy(_x,_y);
    }
    void setPoint2(int _x,int _y)
    {
        p2.set_xy(_x,_y);
    }
    int getColor()
    {
        return color;
    }
    Point getPoint1()
    {
        return p1;
    }
    Point getPoint2()
    {
        return p2;
    }
    Shape()
    {
        color=1;
        p1.set_xy(0,0);
        p2.set_xy(0,0);
        cout<<"Constructor shape"<<endl;
    }
    Shape(int p1x,int p1y,int p2x,int p2y,int _color):p1(p1x,p1y),p2(p2x,p2y)//take the value by parameter constructor of point instead of the setters for line
    {
        color=_color;
    }
    Shape(int p1x,int p1y,int _color):p1(p1x,p1y)//take the value by parameter constructor of point instead of the setters for circle
    {
        color=_color;
    }
    void Draw(){
        cout<<"Draw in shape"<<endl;
    }
};

class Line: public Shape{
public:

    Line(int p1x,int p1y,int p2x,int p2y,int _color) : Shape(p1x,p1y,p2x,p2y,_color)
    {

    }

    Line():Shape()
    {

        //without using shape constructor
        /*color=0;
        p1.set_xy(0,0);
        p2.set_xy(0,0);*/
    }
    void draw()
    {
        setColor(color);
        line(p1.get_x(),p1.get_y(),p2.get_x(),p2.get_y());
    }
    friend istream & operator >> (istream &in,  Line &l);
};

//child class
class Circle : public Shape
{
    int radius;
public:
    Circle(int _radius,int px,int py, int _color):Shape( px, py, color)
    {
        radius=_radius;
       /* p1.setPoint1(px,py);
        color=_color;*/
        //count<<"Circle Constructor"<<endl;
    }
    Circle():Shape()
    {
        radius=0;
    }
    void set_radius(int _radius)
    {
        radius= _radius;
    }

    void draw()
    {
        setcolor(color);
        circle(p1.get_x(),p1.get_y(),radius);
    }
    friend istream & operator >> (istream &in,  Circle &c);
};
class Rect : public Shape
{
public:
    Rect(int p1x, int p1y,int p2x,int p2y, int _color):Shape(p1x,p1y,p2x,p2y,_color)
    {
        /*
        p1.set_xy(p1x,p1y);
        p2.set_xy(p2x,p2y);
        color=_color;
        */
    }
    Rect():Shape(){

    }
    void draw()
    {
        setcolor(color);
        rectangle(p1.get_x(),p1.get_y(),p2.get_x(),p2.get_y());
    }
    friend istream & operator >> (istream &in,  Rect &r);
};



int main()
{
    int number,type;
    cout << "Please enter the number of shapes you need" << endl;
    cin>> number;
    int counter[10];
    int arrRec[10];
    int arrLine[10];
    int arrCircle[10];
    for(int i=0; i<number; i++)
    {
        cout << "Please choose 0 to select circle, 1 to select Rectangle and 2 to select Line" << endl;
        cin>> arr[i];
    }
    return 0;
}
