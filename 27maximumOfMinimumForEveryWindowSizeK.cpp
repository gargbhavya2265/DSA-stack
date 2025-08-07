#include<iostream>
#include<vector>
#include<math.h>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the list of elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int>result(n,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            int num=INT_MAX;
            for(int k=j;k<j+i+1;k++){
                num=min(num,arr[k]);
            }
            result[i]=max(result[i],num);
        }
    }

    cout<<"The final resultant is: ";
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}