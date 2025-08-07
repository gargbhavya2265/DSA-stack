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
    int left=0,right=0;
    for(int i=0;i<length;i++){
        if(str[i]=='(') left++;
        else{
            if(str[i]==')' && left>0)   left--;
            else right++;
        }
    }
    cout<<"minimum "<<left+right<<" parenthesis to be added to make string valid"<<endl;

}