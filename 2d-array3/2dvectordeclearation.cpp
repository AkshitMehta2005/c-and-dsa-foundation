#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int>v(4,2);
    // cout<<v[0]<<endl; //2
    // cout<<v[1]<<endl; //2
    // cout<<v[2]<<endl; //2
    // cout<<v[3]<<endl; //2


    //2d
    vector<vector<int>>v(3,vector<int>(4,2));// 3 size and 4 column and 2 value
    for(int i = 0;i<3;i++){
        for(int j = 0;j<4;j++){
            cout<<v[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<v.size()<<endl;
    cout<<v[1].size(); //1st row column
    return 0;
}