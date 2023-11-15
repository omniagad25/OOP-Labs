#include <iostream>

using namespace std;

class Complex{
    int real;
    int imagine;
public:
    // object
    Complex(int _real, int _imagine){
       real=_real;
       imagine=_imagine;
   }
     void setReal(int _real){
        real= _real;
    }
    void setImagine(int _imagine){
        imagine=_imagine;
    }
    int getReal(void)const{
        return real;
    }
    int getImagine(void)const{
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
    Complex operator+(const Complex &c){
    Complex res(real+c.getReal(), imagine+c.getImagine());
    return res;
    }
    Complex operator -(const Complex &c){
      Complex res(real-c.getReal(),imagine-c.getImagine());
      return res;
    }
    Complex operator +=(const Complex &c){
    real=real+c.getReal();
    imagine=imagine+c.getImagine();
    return *this;
    }
    Complex operator -=(Complex &c){
    real=real-c.getReal();
    imagine=imagine-c.getImagine();
    return *this;
    }
   Complex operator +(int i){
   Complex res(real+i,imagine);
      return res;
   }
   int operator ==(const Complex &c){
     return real==c.real&&imagine==c.imagine;
   }
   Complex operator ++(){
      real=real+1;
      return *this;
   }
   Complex operator ++(int){
      Complex temp=*this;
      real=real+1;
      return temp;
   }
   Complex operator --(){
      real=real-1;

      return *this;
   }
   Complex operator --(int){
      Complex temp=*this;
      real=real-1;
      return temp;
   }
   operator float(){
       return real;
   }

   /*Complex operator sqrt(int){
       Complex res(sqrt(std::complex<double>(-4.0, 0.0)))
   }*/



    friend Complex sub(Complex c,Complex x);
};

Complex operator +(int i, Complex &c){
       Complex res(c.getReal()+i,c.getImagine());
       //Complex res;
       //res.real=c.getReal()+i;
       //res.imagine=c.getImagine();
       return res;
       }

    Complex operator -(int i, Complex &c){
        Complex res(c.getReal()-i,c.getImagine());
        return res;
        }
/*
ostream & operator << (ostream &out, const Complex &c)
{
    out << c.real;
    out << "+i" << c.imag << endl;
    return out;
}

istream & operator >> (istream &in,  Complex &c)
{
    cout << "Enter Real Part ";
    in >> c.real;
    cout << "Enter Imaginary Part ";
    in >> c.imag;
    return in;
}*/
/*
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
/*
Complex sub(Complex c,Complex x){
      Complex r;
      r.imagine=c.imagine-x.imagine;
      r.real=c.real-x.real;
      return r;
}*/



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
    Complex c1(5,5),c2(10,10);
    Complex c3=c1+c2;
    c3.print();
    c3= 10+c1;
    c3.print();
    /*u.setReal(5);
    u.setImagine(-6);
    u.print();
    x.setReal(5);
    x.setImagine(6);
    x.print();
    Complex i=x.add(u);
    cout<<i.getReal()<<"\n";
    cout<<i.getImagine()<<"\n";
    */

    return 0;
}
