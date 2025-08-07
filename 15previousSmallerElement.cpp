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
    // for(int i=0;i<result.size();i++){
    //     while(!st.empty() && arr[st.top()]>arr[i]){
    //         st.pop();
    //     }
    //     if(!st.empty()) {
    //         result[i]=arr[st.top()];
    //     }
    //     st.push(i);
    // }
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && arr[st.top()]>arr[i]){
            result[st.top()]=arr[i];
            st.pop();
        }
        st.push(i);
    }
    cout<<"Previous smaller element array is: ";
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }

}