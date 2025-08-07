#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void findNSE(vector<int>&NSE,int arr[],int n){
    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]>=arr[i]){
            NSE[st.top()]=i;
            st.pop();
        }
        st.push(i);
    }
}
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
int main(){
    int n;
    cout<<"Enter the number of elements in the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the list of elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>NSE(n,n);
    vector<int>PSE(n,-1);
    findNSE(NSE,arr,n);
    findPSE(PSE,arr,n);
    
    vector<int>result(n,0);
    for(int i=0;i<n;i++){
        int k=NSE[i]-PSE[i]-1;
        for(int j=0;j<k;j++){
            result[j]=max(result[j],arr[i]);
        }
    }
    
    cout<<"Maximum of minimum for every window size is : ";
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}