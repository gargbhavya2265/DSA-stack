#include<iostream>
using namespace std;
class Stack{
    public:
    //properties..
    int *arr;
    int size;
    int top;

    bool flag;
    //constructor...
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
        flag=1;
    }
    void push(int value){
        if(top==size-1){
            cout<<"stack overflow"<<endl;
            return;
        }
        else{
            top++;
            arr[top]=value;
            cout<<"pushed "<<value<<" into the stack"<<endl;
            flag=0;
        }
    }
    void pop(){
        if(top==-1){
            flag=1;
            cout<<"stack underflow"<<endl;
            return;
        }
        else{
            cout<<"popped "<<arr[top]<<" from stack"<<endl;
            top--;
        }
    }
    int peek(){
        if(top==-1){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty(){
        return top==-1;
    }
    bool isFull(){
        return top==size-1;
    }
};

int main(){
    Stack s(5);
    s.push(12);
    s.push(23);
    s.push(78);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
  
    if(s.flag==0){
        cout<<s.peek()<<endl;
    }
    s.pop();
    cout<<s.peek()<<endl;

    cout<<s.isEmpty()<<endl;

    return 0;
}