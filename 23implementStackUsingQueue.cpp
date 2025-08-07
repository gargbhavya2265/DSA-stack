// 2 queue lunga q1 and q2
//push operation----jis queue mai elements honge uss queue mai push karaunga
//pop operation-----jis queue mai elements hai uske sabhi elements except the last one ko dusri queue mai push karunga urr last el ko pop krdunga
#include<iostream>
#include<queue>
using namespace std;
class Stack{
    queue<int>q1;
    queue<int>q2;
public:
    bool isEmpty(){
        return q1.empty() && q2.empty();
    }
    void push(int x){
        if(q1.empty() && q2.empty()){
           q1.push(x);
        }
        else if(q1.empty()){
            q2.push(x);
        }
        else{
            q1.push(x);
        }
    }
    int pop(){
        if(q1.empty() && q2.empty()){
            return 0;
        }
        else if(!q1.empty()){
            while(q1.size()!=1){
                q2.push(q1.front());
                q1.pop();
            }
            int el=q1.front();
            q1.pop();
            return el;
        }
        else if(!q2.empty()){
            while(q2.size()!=1){
                q1.push(q2.front());
                q2.pop();
            }
            int el=q2.front();
            q2.pop();
            return el;
        }
    }

};
int main(){

}