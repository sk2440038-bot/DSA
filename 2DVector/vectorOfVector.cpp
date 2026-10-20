#include<iostream>
#include<vector>
using namespace std;
int main(){
 int n,m;
 cout<<"enter the row:";
 cin>>n;
 cout<<"enter the col:";
 cin>>m;
 vector<vector<int>> arr(n,vector<int>(m,0));
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
 }
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
 }

}