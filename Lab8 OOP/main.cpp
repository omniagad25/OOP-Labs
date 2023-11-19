#include <iostream>

using namespace std;

template <class T>
class Stack{
    int size;
    int t;
    T *arr;

public:
Stack(int _size){
    size=_size;
    t=-1;
    arr= new T[size]{0};
}
//deep
/*
Stack (Stack &s)
{
    size=s.size;
    t=s.t;
    for (int i=0;i<=t;i++){
            arr[i]=s.arr[i];

    }
}*/
T get_t(void){
    return t;
}

int isEmpty(Stack *arr)
{
    if (arr->t==-1)
    {
        printf("The stack is empty");
        return -1;
    }
}
int isFull(int top) {
    return (top == size - 1);
}

void Extend(){
    T *temp = new T[size *2];
    for(int i=0;i<size;i++){
        temp[i]=arr[i];
    }
    delete  arr;
    arr=temp;
    size *=2;
}

void push(T data){
    if(t<(size-1)){
        t++;
        arr[t]=data;
    }
    else{
        Extend();
        cout<<"The stack is full"<<endl;
    }
}

T pop(){
    if(t!=-1){
        T x=arr[t];
        t--;
        return x;
    }
    else{

        cout<<"The stack is empty"<<endl;
        return -10;
    }
}
 friend void viewContent(Stack s);

~Stack(){
    cout<<"Destructor"<<endl;
    delete[] arr;
}


};

void viewContent(Stack <int> s){
    int i;

    for(i=0; i < s.size;i++){
        cout<<s.pop()<<endl;
    }
}

void viewContent(Stack <double> s){
    int i;

    for(i=0; i < s.size;i++){
        cout<<s.pop()<<endl;
    }
}

void viewContent(Stack <char> s){
    int i;

    for(i=0; i < s.size;i++){
        cout<<s.pop()<<endl;
    }
}

int main()
{ Stack <double> s(5);
    cout<<"The deleted number is "<<s.pop()<<endl;  //empty
    s.push(1.5);
    s.push(5.9);
    s.push(6.3);
    s.push(7);
    s.push(7);
    cout<<"The deleted number is "<<s.pop()<<endl;//6
    cout<<"The deleted number is "<<s.pop()<<endl;//5
    s.push(7);
    cout<<"The deleted number is "<<s.pop()<<endl;//7
    cout<<"The deleted number is "<<s.pop()<<endl;//1
    cout<<"The deleted number is "<<s.pop()<<endl;//Empty
    s.push(7);
    cout<<"The deleted number is "<<s.pop()<<endl;//7


   viewContent(s);
    if(s.get_t()==-1){
        cout<<-5<<endl;
    }
    return 0;
}
