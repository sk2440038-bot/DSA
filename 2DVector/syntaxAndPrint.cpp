#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v1={1,25,47,49,50};
    vector<int>v2={1,2,3,5};
    vector<int>v3={1,5};
    vector<int>v4={10,23,45,5};
    vector<int>v5={1,20,5};


    vector<vector<int>> v={v1,v2,v3,v4,v5};
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}