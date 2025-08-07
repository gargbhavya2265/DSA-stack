#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void findPSE(vector<int>& PSE,int arr[],int n){
    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]>=arr[i]){
            st.pop();
        }
        if(!st.empty()){
            PSE[i]=st.top();
        }
        st.push(i);
    }
}
void findNSE(vector<int>& NSE,int arr[],int n){
    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty()&& arr[st.top()]>=arr[i]){
            NSE[st.top()]=i;
            st.pop();
        }
        st.push(i);
    }
}
int main(){
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the list of Elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>NSE(n,n);
    vector<int>PSE(n,-1);
    findNSE(NSE,arr,n);
    findPSE(PSE,arr,n);

    vector<int>result(n,0);
    for(int i=0;i<n;i++){
        int len=NSE[i]-PSE[i]-1;
        result[len-1]=max(result[len-1],arr[i]);
    }
    for(int i=n-2;i>=0;i--){
        result[i]=max(result[i+1],result[i]);
    }
    cout<<"Maximum of Minimum Element for Every Window Size is : ";
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}