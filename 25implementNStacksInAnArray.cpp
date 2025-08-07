#include<iostream>
#include<stack>
using namespace std;
class Node{
public:
    int index;
    Node* next;
    //constructor..
    Node(int index){
        this->index=index;
        next=NULL;
    }
};
class NStacks{
public:
    int* arr;
    Node** top;
    int size;
    stack<int>st;

    //constructor..
    NStacks(int size,int m){
        this->size=size;
        arr=new int[size];
        top=new Node*[m];
        for(int i=0;i<size;i++){
            st.push(i);
        }
        for(int i=0;i<m;i++){
            top[i]=NULL;
        }
    }
    bool push(int x,int m){
        if(st.empty()){
            return 0;
        }
        else{
            arr[st.top()]=x;
            Node* temp=new Node(st.top());
            temp->next=top[m-1];
            top[m-1]=temp;
            st.pop();
            return 1;
        }
    }
    int pop(int m){
        if(top[m-1]==NULL){
            return -1;
        }
        else{
            st.push(top[m-1]->index);
            int el=arr[top[m-1]->index];
            top[m-1]=top[m-1]->next;
            return el;
        }
    }

};
int main(){

}