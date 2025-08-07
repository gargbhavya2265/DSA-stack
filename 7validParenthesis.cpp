#include<iostream>
#include<stack>
using namespace std;
int main(){
    int length;
    cout<<"enter the length of string"<<endl;
    cin>>length;
    string str;
    cout<<"Enter the string"<<endl;
    cin>>str;
    stack<char>st;
    for(int i=0;i<length;i++){
        if(!st.empty()){
            if(st.top()=='(' && str[i]==')'){
                st.pop();
            }
            else{
                st.push(str[i]);
            }
        }
        else{
            st.push(str[i]);
        }
    }
    if(!st.empty()){
        cout<<"Not a valid parenthesis"<<endl;
    }
    else{
        cout<<"Valid Parenthesis"<<endl;
    }
}