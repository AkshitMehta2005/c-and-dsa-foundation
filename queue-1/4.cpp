//queue impletation from array
// #include<iostream>
// #include<vector>
// using namespace std;
// class queue{
// public:
//     int f;
//     int b;
//     queue(int val){
//         f = 0;
//         b = 0;
//         vector<int>v(val);
//         arr = v;
//     }
//     void push(int val){
//         if(b==arr.size()){
//             cout<<"queue is full"<<endl;
//             return;
//         }
//         arr[b] = val;
//         b++;
//     }
//     void pop(){
//         if(b-f==0){
//             cout<<"queue is empty"<<endl;
//             return;
//         }
//         f++;
//     }
//     int front(){
//         if(f-b==0){
//             cout<<"queue is empty!"<<endl;
//             return -1;
//         }
//         return arr[f];
//         }
//     int back(){
//         if(f-b==0){
//             cout<<"queue is empty!"<<endl;
//             return -1;
//         }
//         return arr[b-1];
//         }
//     int size(){
//         return b-f;
//     }
//     bool empty(){
//         if(f-b==0)return true;
//         else return false;
//     }
//     void display(){
//         for(int i = f;i<b;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };
// int main(){
//     queue q(5);
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.display();
//     q.push(50);
//     q.push(60);
//     q.display();
//     q.pop();
//     q.display();
// return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
class queue{
public:
    int f;
    int b;
    int arr[5];
    queue(){
        f = 0;
        b = 0; 
           }
    void push(int val){
        if(b==5){
            cout<<"queue is full"<<endl;
            return;
        }
        arr[b] = val;
        b++;
    }
    void pop(){
        if(b-f==0){
            cout<<"queue is empty"<<endl;
            return;
        }
        f++;
    }
    int front(){
        if(b-f==0){
            cout<<"queue is empty!"<<endl;
            return -1;
        }
        return arr[f];
        }
    int back(){
        if(f-b==0){
            cout<<"queue is empty!"<<endl;
            return -1;
        }
        return arr[b-1];
        }
    int size(){
        return b-f;
    }
    bool empty(){
        if(b-f==0)return true;
        else return false;
    }
    void display(){
        for(int i = f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    q.push(50);
    q.push(60);
    q.display();
    q.pop();
    q.display();
return 0;
}