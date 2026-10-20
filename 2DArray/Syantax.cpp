#include<iostream>
using namespace std;
int main (){
    int arr[][4]={{1,2,3,4},{4,5,8,9},{1, 2,4,5}};
    size_t rows=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
    }
    cout<<"Sum: "<<sum<<endl;
    return 0;
}