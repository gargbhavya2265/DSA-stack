#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    string arr[n];
    cout<<"enter the list of elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    stack<string>st;
    for(int i=0;i<n;i++){
        if(!st.empty()){
            if(st.top()==arr[i]){
                st.pop();
            }else{
                st.push(arr[i]);
            }
        }
        else{
            st.push(arr[i]);
        }
    }
    vector<string>result;
    while(!st.empty()){
        result.push_back(st.top());
        st.pop();
    }
    cout<<"final output after string manipulation : ";
    for(int i=result.size()-1;i>=0;i--){
        cout<<result[i]<<" ";
    }
}