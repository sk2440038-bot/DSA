#include<iostream>
using namespace std;
void merge(int a[], int n,int b[], int m,int c[]){
    int i=0, j=0, k=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            c[k]=a[i]; 
            i++;
            k++;      
        }
        else{
            c[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<n){
        c[k]=a[i];
        i++; k++;
    }
   
    while(j<m){
        c[k]=b[j];
        j++; k++;
    }
    

}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int c[n+m];
    merge(a, n ,b, m ,c);
    for(int i=0;i<n+m;i++){
        cout<<c[i]<<" ";
    }
}