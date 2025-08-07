#include<iostream>
#include<stack>
using namespace std;
class Minstack{
public:
    stack<int>st1;  //used to store the original value...
    stack<int>st2;  //used to store the minelement...
    Minstack(){   
    
    }

    void push(int value){
        if(st1.empty()){
            st1.push(value);
            st2.push(value);
        }
        else{
            st1.push(value);
            st2.push(min(value,st2.top()));
        }
    }
    void pop(){
        if(st1.empty()){
            return;
        }
        else{
            st1.pop();
            st2.pop();
        }
    }
    int peek(){
        if(st1.empty()){
            return 0;
        }
        else{
            return st1.top();
        }
    }
    int getmin(){
        return st2.top();
    }
};
int main(){

}