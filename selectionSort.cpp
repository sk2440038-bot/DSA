#include<iostream>
#include<vector>
using namespace std;
void printarr(vector<int>& arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main (){
    vector<int> arr={5,4,3,2,1};
    printarr(arr);
    int n=arr.size();
    for(int j=0;j<n-1;j++){
        int mn=arr[j], mnIdx= j;
        for(int i=j;i<n;i++){
        if(arr[i]<mn){
            mn=arr[i];
            mnIdx=i;
        }
    }
    swap(arr[mnIdx],arr[j]);
   

    }
     printarr(arr);
}