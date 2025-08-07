// original value=st.top()/101;
// minel=st.top()%101;
// value pushed in stack=originalvalue*101+minel
#include<iostream>
#include<stack>
using namespace std;
class MinStack{
    stack<int>st;
    public:
        MinStack(){

        }
    void push(int value){
        if(st.empty()){
            st.push(value*101+value);
        }
        else{
            st.push(value*101+min(value,st.top()%101));
        }
    }
    int pop(){
        if(st.empty()){
            return -1;
        }
        else{
            int el=st.top()/101;
            st.pop();
            return el;
        }
    }
    int getmin(){
        if(st.empty()){
            return -1;
        }
        else{
            int minel=st.top()%101;
            return minel;
        }
    }
};
int main(){

}