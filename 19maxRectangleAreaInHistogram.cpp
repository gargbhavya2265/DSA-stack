#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void prevsmaller(int arr[],vector<int>& result,int n){
    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]>=arr[i]){
            st.pop();
        }
        if(!st.empty()){
            result[i]=st.top();
        }
        st.push(i);
    } 
}
void nextsmaller(int arr[],vector<int>& result,int n){
    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]>arr[i]){
            result[st.top()]=i;
            st.pop();
        }
        st.push(i);
    }
}
int main(){
    int n;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the list of elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>prevSmalleridx(n,-1);
    vector<int>nextSmalleridx(n,n);
    prevsmaller(arr,prevSmalleridx,n);
    for(int i=0;i<prevSmalleridx.size();i++){
        cout<<prevSmalleridx[i]<<" ";
    }
    cout<<endl;
    nextsmaller(arr,nextSmalleridx,n);
    for(int i=0;i<nextSmalleridx.size();i++){
        cout<<nextSmalleridx[i]<<" ";
    }
    cout<<endl;
    int maxarea=0;
    for(int i=0;i<n;i++){
        int height=arr[i];
        int width=(nextSmalleridx[i]-prevSmalleridx[i])-1;
        int area=height*width;
        maxarea=max(area,maxarea);
    }
    cout<<"maximum rectangular area in a histogram is : "<<maxarea<<endl;
}