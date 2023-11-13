#include <iostream>

using namespace std;

class Stack{
    int size;
    int t;
    int *arr;

public:
Stack(int _size){
    size=_size;
    t=-1;
    arr= new int[size]{0};
}
//deep
Stack (Stack &s)
{
    size=s.size;
    t=s.t;
    for (int i=0;i<=t;i++){
            arr[i]=s.arr[i];

    }
}
int get_t(void){
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

void push(int data){
    if(t<(size-1)){
        t++;
        arr[t]=data;
    }
    else{
        cout<<"The stack is full"<<endl;
    }
}

int pop(){
    if(t!=-1){
        int x=arr[t];
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

void viewContent(Stack s){
    int i;

    for(i=0;i<s.size;i++){
        cout<<s.pop()<<endl;
    }
}

int main()
{/*
    Stack s(5);
    Stack cpy = s;
    cout<<"The deleted number is "<<cpy.pop()<<endl;  //empty
    cpy.push(1);
    cpy.push(5);
    cpy.push(6);
    cout<<"The deleted number is "<<cpy.pop()<<endl;//6
    cout<<"The deleted number is "<<cpy.pop()<<endl;//5
    cpy.push(7);
    cout<<"The deleted number is "<<cpy.pop()<<endl;//7
    cout<<"The deleted number is "<<cpy.pop()<<endl;//1
    cout<<"The deleted number is "<<cpy.pop()<<endl;//Empty
    cpy.push(7);
    cout<<"The deleted number is "<<cpy.pop()<<endl;//7


   viewContent(cpy);
    if(cpy.get_t()==-1){
        cout<<-5<<endl;
    }
*/
    Stack s(5);
    cout<<"The deleted number is "<<s.pop()<<endl;  //empty
    s.push(1);
    s.push(5);
    s.push(6);
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
