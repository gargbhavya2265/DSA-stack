#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the list of elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    stack<int>st;
    vector<int>result(n,1);
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && arr[st.top()]<arr[i]){
            result[st.top()]=st.top()-i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        result[st.top()]=st.top()+1;
        st.pop();
    }
    cout<<"previous Greater Element (stock span) Array is :"<<endl;
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}