#include<iostream>
#include<vector>
using namespace std;
void MaxRow(int n,int m,vector<vector<int>> arr){
    int maxSum=INT_MIN,maxRow=-1;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum+=arr[i][j];
        }
        if(sum>maxSum){
            maxSum=sum;
            maxRow=i;
        }
        
    }
    cout<<"Maximum row sum is: "<<maxSum<<" at row "<<maxRow<<endl;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    MaxRow(n,m,arr);
}