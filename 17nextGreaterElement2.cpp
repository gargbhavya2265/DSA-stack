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
    vector<int>result(n,-1);
    for(int i=0;i<2*n;i++){
        while(!st.empty() && arr[st.top()]<arr[i%n]){
            result[st.top()]=arr[i%n];
            st.pop();
        }
        st.push(i%n);
    }
    cout<<"Next Greater Element Array is :"<<endl;
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}