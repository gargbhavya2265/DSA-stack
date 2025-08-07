#include<iostream>
using namespace std;
class TwoStacks{
    int *arr;
    int size;
    int top1;
    int top2;
public:
    TwoStacks(int size){
        this->size=size;
        arr=new int[size];
        top1=-1;
        top2=size;
    }
    void push1(int x){
        if(top1+1==top2){
            cout<<"stack overflow"<<endl;
        }
        else{
            top1++;
            arr[top1]=x;
            cout << "pushed " << x << " into the stack" << endl;
        }
    }
    void push2(int x){
        if(top1+1==top2){
            cout<<"stack overflow"<<endl;
        }
        else{
            top2--;
            arr[top2]=x;
            cout<<"pushed "<<x<<" into the stack"<<endl;
        }
    }
    int pop1(){
        if(top1==-1){
            return -1;
        }
        else{
            cout<<"popped "<<arr[top1]<<" from the stack"<<endl;
            int el=arr[top1];
            top1--;
            return el;
        }
    }
    int pop2(){
        if(top2==size){
            return -1;
        }
        else{
            int el=arr[top2];
            cout<<"popped "<<el<<" from the stack"<<endl;
            top2++;
            return el;
        }
    }
};
int main(){

}