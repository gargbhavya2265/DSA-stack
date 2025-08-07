#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int largestRectangleArea(vector<int>& height){
    stack<int>st;
    int area=0;
    for(int i=0;i<height.size();i++){
        while(!st.empty() && height[st.top()]>height[i]){
            int index=st.top();
            st.pop();
            int h=height[index];
            int width;
            if(!st.empty()) width=i-st.top()-1;
            else    width=i;
            area=max(area,h*width);
        }
        st.push(i);
    }
    while(!st.empty()){
        int index=st.top();
        st.pop();
        int h=height[index];
        int width;
        if(!st.empty()) width=height.size()-st.top()-1;
        else    width=height.size();
        area=max(area,h*width);
    }
    return area;
}
int main(){
    int r,c;
    cout<<"Enter the number of rows and columns"<<endl;
    cin>>r>>c;
    int arr[r][c];
    cout<<"Enter the list of elements"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int area=0;
    vector<int>height(c,0);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==0){
                height[j]=0;
            }
            else    height[j]+=arr[i][j];
        }
        area=max(area,largestRectangleArea(height));
    }
    cout<<"maximum rectangle is : "<<area<<endl;
}