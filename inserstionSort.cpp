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
    for(int i=1;i<=n-1;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
     printarr(arr);
}