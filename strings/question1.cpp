#include<iostream>
#include<string>
using namespace std;
int countVowels(string str){
    int count =0;
    int n= str.length();
    for(int i=0;i<n;i++){
        char c=tolower(str[i]);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            count++;
        }
    }
    return count;
}
int main(){
    string str;
    getline(cin,str);
    cout<<countVowels(str)<<endl;
    return 0;
}