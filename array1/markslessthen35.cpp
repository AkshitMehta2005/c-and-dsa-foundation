#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of student";
    cin >> n;
    int marks[n];

    cout << "Enter th marks of the student";
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> marks[i];
    }
    cout<<"roll number of those student in which they got marks less then 35"<<endl;
    for (int i = 0; i <= n-1; i++)
    {
        if (marks[i] < 35)
        {
            cout << i << " "; // i represent roll number
        }
    }
    return 0;
}