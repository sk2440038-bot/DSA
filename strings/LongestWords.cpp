#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="arjun is the smartest";
    int n=str.length();
    string ans;
    int i=0,j=0,maxlen=0;
    while(j<n){
        if(str[j]!=' ')j++;
        else{
            int len=j-i;
            if(len>maxlen){
                maxlen=len;
                 ans = str.substr(i,len);
            }
            i=j;
            while(i<n&&str[i]==' ')i++;
            j++;
        }
    }
    int len=j-i; // ye likhne se jaise smartest hai uske bad agr koi space bhi na ho tabhi chal jayega 
    //nhi toh pahle nhi chalta
            if(len>maxlen){
                maxlen=len;
                 ans = str.substr(i,len);
            }
    cout<<maxlen<<" "<<ans<<endl;
    return 0;
}
