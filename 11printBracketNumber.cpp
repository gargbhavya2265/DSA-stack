#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string"<<endl;
    cin>>str;
    vector<int>result;
    stack<int>st;
    int left=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='(') {
            left++;
            st.push(left);
            result.push_back(left);
        }
        else if(str[i]==')'){
            result.push_back(st.top());
            st.pop();
        }
    }
    cout<<"bracket numbers are: "<<endl;
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}