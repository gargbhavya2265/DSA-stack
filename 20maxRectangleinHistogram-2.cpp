#include<iostream>
#include<vector>
#include<stack>
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
    int ans=0;
    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]>arr[i]){
            int index=st.top();
            st.pop();
            int height=arr[index];
            int width;
            if(!st.empty())    width=i-st.top()-1;
            else    width=i;
            ans=max(ans,height*width);
        }
        st.push(i);
    }
    while(!st.empty()){
        int index=st.top();
        st.pop();
        int height=arr[index];
        int width;
        if(!st.empty())    width=n-st.top()-1;
            else    width=n;
            ans=max(ans,height*width);
    }
    cout<<"maximum rectangular area is: "<<ans<<endl;
}