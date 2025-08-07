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
    for(int i=0;i<n;i++){
        if(st.empty()){
            st.push(arr[i]);
        }
        else{
            if((st.top()>=0 && arr[i]>=0)||(st.top()<0 && arr[i]<0)){
                st.push(arr[i]);
            }
            else{
                st.pop();
            }
        }
    }
    vector<int>result;
    while(!st.empty()){
        result.push_back(st.top());
        st.pop();
    }
    cout<<"the elements that make the array beautiful are: ";
    for(int i=result.size()-1;i>=0;i--){
        cout<<result[i]<<" ";
    }
}