#include <iostream>

using namespace std;

class Complex{
    int real;
    int imagine;
public:
    void setReal(int _real){
        real= _real;
    }
    void setImagine(int _imagine){
        imagine=_imagine;
    }
    int getReal(void){
        return real;
    }
    int getImagine(void){
        return imagine;
    }

    void print(void){
        cout<<"The number "<<real;
        if(imagine>0){
            cout<<"+"<<imagine<<"j";
        }
        else if(imagine<0){
             cout<<imagine<<"j";
        }
        cout<<endl;
    }
    Complex add(Complex c);
    friend Complex sub(Complex c,Complex x);
};

Complex Complex::add(Complex c){
    Complex r;
    r.setImagine(imagine+c.getImagine());
    r.setReal(real+c.getReal());
    return r;
}

Complex addStandAlone(Complex c,Complex y){
      Complex r;
      r.setImagine(y.getImagine()+c.getImagine());
      r.setReal(y.getReal()+c.getReal());
      return r;
}
Complex subStandAlone(Complex c,Complex y){
      Complex r;
      r.setImagine(c.getImagine()-y.getImagine());
      r.setReal(c.getReal()-y.getReal());
      return r;
    }
 void printStandAlone(Complex c ){
        cout<<"The number is "<<c.getReal();
        if(c.getImagine() > 0){
            cout<<"+"<<c.getImagine()<<"j";
        }else if(c.getImagine()<0){
             cout<<c.getImagine()<<"j";
        }
}
Complex sub(Complex c,Complex x){
      Complex r;
      r.imagine=c.imagine-x.imagine;
      r.real=c.real-x.real;
      return r;
}

void complex_display(Complex c){
    cout<< c.getReal();
    if(c.getImagine()>0){
        cout<<"+"<<c.getImagine()<<"j"<<endl;
    }
    else if(c.getImagine()<0){
        cout<<c.getImagine()<<"j"<<endl;
    }
}

int main() //standAlone Fun
{
    Complex x,u;
    u.setReal(5);
    u.setImagine(-6);
    u.print();
    x.setReal(5);
    x.setImagine(6);
    x.print();
    Complex i=x.add(u);
    cout<<i.getReal()<<"\n";
    cout<<i.getImagine()<<"\n";

    return 0;
}

