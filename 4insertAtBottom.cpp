#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    stack<int>st1;
    st1.push(4);
    st1.push(3);
    st1.push(2);
    st1.push(1);
    st1.push(8);
    int key;
    cout<<"enter the key you want to insert at the bottom of stack 1"<<endl;
    cin>>key;
    vector<int>arr;
    while(!st1.empty()){
        arr.push_back(st1.top());
        st1.pop();
    }
    st1.push(key);
    for(int el: arr){
        st1.push(el);
    }

    cout<<key<<" is successfully inserted at the bottom"<<endl;

    while(!st1.empty()){
        cout<<st1.top()<<" ";
        st1.pop();
    }
}