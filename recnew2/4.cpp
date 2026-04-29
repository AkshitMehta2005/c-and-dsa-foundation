// maze path (2ways->down way and right ways)
#include<iostream>
using namespace std;
int maze(int sr,int sc,int er,int ec){
      if(sr>er || sc>ec)return 0;
      if(sr==sc && sc==ec)return 1;
      int rightways = maze(sr,sc+1,er,ec);
      int Downways = maze(sr+1,sc,er,ec);
      return rightways + Downways;
}
void mazeprint(int sr,int sc,int er,int ec,string s){
    if(sr>er || sc>ec)return;
    if(sr == er && sc == ec){
        cout<<s<<endl;
        return;
    }
    mazeprint(sr,sc+1,ec,ec,s+"R");
    mazeprint(sr+1,sc,ec,ec,s+"D");
}
int maze2(int er,int ec){
    if(er<1 || ec<1)return 0;
    if(ec==1 && er == 1)return 1;
    int rightways = maze2(er,ec-1);
    int downways = maze2(er-1,ec);
    return rightways + downways;
}
void maze2print(int er,int ec,string s){
     if(er<1 || ec<1)return ;
     if(ec == 1 && er == 1){
        cout<<s<<endl;
        return;
     }
     maze2print(er,ec-1,s+"R");
     maze2print(er-1,ec,s+"D");
}
int main(){
  // mazeprint(1,1,3,3,"");
 //cout << maze(1,1,3,3);
 //cout<<maze2(3,3);
 maze2print(3,3," ");
return 0;
}