#include<iostream>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int MaxOfRow=INT_MIN;
        for(int i=0;i<n;i++){
            int miniOfRowEle=INT_MAX;
            for(int j=0;j<m;j++){
                miniOfRowEle=min(miniOfRowEle, arr[i][j]);
            }
            MaxOfRow=max(MaxOfRow,miniOfRowEle);
        }
    // int miniRowEle=INT_MAX;
    // for(int i=0;i<n;i++){
    //     int maxOfRow=INT_MIN;
    //     for(int j=0;j<m;j++){
    //         maxOfRow=max(maxOfRow,arr[i][j]);
    //     }
    //     miniRowEle=min(miniRowEle,maxOfRow);
    // }
    cout<<MaxOfRow;
}