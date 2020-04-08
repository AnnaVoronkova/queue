#include <iostream>
#define SIZE 5
#include <queue>

using namespace std;
class myQueue{
int *arr;
int top;
int capacity;

public:
    myQueue(int size=SIZE);
    ~myQueue();

    void push(int);
    int pop();
    int peek();

    int size();
    bool isEmpty();
    bool isFull();



};
myQueue::myQueue (int size){
      arr= new int [size];
      top = -1;
      capacity = size;
}
myQueue::~myQueue(){
      delete arr;
      }
void myQueue::push (int x){
      if (isFull()){
          cout<< "Overflow \n";
      }else{
          cout << "Inserting " << x << endl;
          arr[++top] = x;
}
}

int myQueue::pop(){
    if (isEmpty()){
        cout << "Underflow" << endl;
    }else{
        cout << "Removing" << peek() << endl;

        return arr[top--];
    }

 }

 int myQueue::peek(){
     if (!isEmpty())
        return arr[top];

     }
bool myQueue::isFull(){
     return top == capacity - 1;
}

bool myQueue::isEmpty(){
      return top == -1;
}


int main(){

    return 0;

}
