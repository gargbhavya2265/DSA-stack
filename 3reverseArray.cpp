#include<iostream>
#include<stack>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    char arr[n];
    cout<<"Enter the list of elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    stack<char>st;
    for(int i=0;i<n;i++){
        st.push(arr[i]);
    }
    cout<<"reversed array is: ";
    while(!st.empty()){
        char ch=st.top();
        st.pop();
        cout<<ch<<" ";
    }
}