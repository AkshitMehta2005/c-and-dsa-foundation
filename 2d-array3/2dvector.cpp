#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1;

    v1.push_back(1);
    v1.push_back(2);

    vector<int> v2;

    v2.push_back(3);

    vector<int> v3;

    v3.push_back(4);
    v3.push_back(5);
    v3.push_back(6);
    v3.push_back(7);

    vector<vector<int>> v;

    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    cout << v[0].size() << endl;
    cout << v[1].size() << endl;
    cout << v[2].size() << endl;
    //   cout<<v[0][3];//invalid
    return 0;
}

// Online C++ compiler to run C++ program online
// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//     vector<vector<int> >arr(3,vector<int>(3,0));
//     for(int i =0;i<3;i++){
//         for(int j = 0;j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//size of col =  arr[1].size();
//     return 0;
// }