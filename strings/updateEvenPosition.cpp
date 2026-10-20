#include<iostream>
#include<string>
using namespace std;
int updateEvenposition(string str){
    int n= str.length();
    for(int i=0;i<n;i++){
       if(i%2==0){
           str[i]='a';
         
       }
    }
    return ;
}
int main(){
    string str;
    getline(cin,str);
    cout<<updateEvenposition(str)<<endl;
    return 0;
}