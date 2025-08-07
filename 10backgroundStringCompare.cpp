#include<iostream>
using namespace std;
int main(){
    string str1,str2;
    cout<<"Enter the first string"<<endl;
    cin>>str1;
    cout<<"Enter the second string"<<endl;
    cin>>str2;
    string helper1;
    for(int i=0;i<str1.size();i++){
        if(str1[i]=='#')    helper1.pop_back();
        else    helper1+=str1[i];
    }
    string helper2;
    for(int i=0;i<str2.size();i++){
        if(str2[i]=='#')    helper2.pop_back();
        else    helper2+=str2[i];
    }
    for(int i=0;i<helper1.size();i++){
        if(helper1[i]!=helper2[i]){
            cout<<"Both the string are not similiar"<<endl;
            return 0;
        }
    }
    cout<<"Both the strings are similiar"<<endl;

    return 0;

}