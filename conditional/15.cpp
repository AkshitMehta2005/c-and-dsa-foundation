/* Given three points (x1, y1), (x2, y2) and
(x3, y3), write a program to check if all the three points fall on one straight line.
Input 1: x1 = 1 , y1 = 2 , x2 = 2 , y2 = 3 , x3 = 3 , y3 = 4
Output 1: All 3 points lie on the same line. */
#include<iostream>
using namespace std;
int main(){
    int x1,x2,x3,y1,y2,y3,m1,m2;
    cin>>x1>>x2>>x3>>y1>>y2>>y3;
    m1 = y2-y1/x2-x1;
    m2 = y3-y2/x3-x2;
    if(m1==m2){
        cout<<"it lies on same plane";
    }
    else{
        cout<<"not lies";
    }
    return 0;
}