#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows and columns"<<endl;
    cin>>n;
    int arr[n][n];
    cout<<"Enter the value of the grid"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    stack<int>st;
    for(int i=n-1;i>=0;i--){
        st.push(i);
    }
    while(st.size()>1){
        int first=st.top();
        st.pop();
        int second=st.top();
        st.pop();
        if(arr[first][second]==1 && arr[second][first]==0){
            st.push(second);
        }
        else if(arr[first][second]==0 && arr[second][first]==1){
            st.push(first);
        }
    }
    if(!st.empty()){
        int probablecelebrity=st.top();
        int row=0,col=0;
        for(int i=0;i<n;i++){
            row+=arr[probablecelebrity][i];
            col+=arr[i][probablecelebrity];
        }
        if(row==0 && col==n-1){
            cout<<"celebrity is : "<<probablecelebrity<<endl;
        }
        else{
            cout<<"there is no celebrity"<<endl;
        }
    }
    else{
        cout<<"No person in the event is celebrity"<<endl;
    }

}