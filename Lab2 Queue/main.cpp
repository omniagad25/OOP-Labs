#include <iostream>

using namespace std;

class Queue{
    int *arr;
    int front;
    int rear;
    int count;
    int size;

public:
    Queue(int _size){
        arr = new int[_size];
        size = _size;
        front = 0;
        rear = -1;
        count = 0;
    }

    ~Queue(){
    cout<<"Destructor"<<endl;
    delete[] arr;
}
    bool isEmpty() {
    if(size == 0){
        return 1;
    }
    else{
        return 0;
    }
}

    bool isFull() {
    return (size == rear);
}

    int enqueue(int x){
    if (!isFull())
    {
        cout << "Adding " << x << endl;
    rear = rear + 1;
    arr[rear] = x;
    count++;
    }
    else{
        cout << "The queue is full\n";
    }

}

    int dequeue(){
    if (isEmpty()){
        cout << "The queue is empty\n";
        return 0;
    }
    else{
    int x = arr[front];
    cout << "dequeue " << x << endl;
    //front = (front + 1) % size;
    for(int i=front;i<rear-1;i++){
        arr[i]=arr[i+1];
    }
    count--;
    return x;
    }
}
};

int main()
{
    Queue q(5);
    /*q.enqueue(5);
    q.enqueue(4);
    q.enqueue(3);
    q.enqueue(2);
    q.enqueue(1);
    q.dequeue();*/
    /*q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    viewContent(s)*/
    q.dequeue();
    q.enqueue(5);
    q.enqueue(7);
    q.enqueue(10);
    q.dequeue();
    q.dequeue();
    q.enqueue(11);
    q.dequeue();
    q.dequeue();
    q.dequeue(); //Empty
    return 0;
}
