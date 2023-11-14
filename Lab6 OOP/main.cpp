#include <iostream>

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
        class Shape{
            protected: int color;
            protected: Point p1;
            protected: Point p2;
            public:
                void setColor(int _color){
                    color=_color;
                }
                void setPoint1(int _p1){
                    p1=_p1;
                }
                void setPoint2(int _p2){
                    p2=_p2;
                }
                Shape(){
                    color=1;
                    p1=(0,0);
                    p2=(0,0);
                    cout<<"Constructor shape"<<endl;
                }
        };
};

class Circle : public {
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
          getch();
          closegraph();
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
    int number,type;
    cout << "Please enter the number of shapes you need" << endl;
    cin>> number;
    for(int i=0;i<number;i++){
    cout << "Please choose 0 to select circle, 1 to select Rectangle and 2 to select Line" << endl;
    cin>> type;
    }
    return 0;
}
