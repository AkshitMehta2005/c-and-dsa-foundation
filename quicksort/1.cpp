#include <iostream>

using namespace std;

int partition(int list[], int lb, int ub);
void quick_sort(int list[], int lb, int ub);

int main() {
    int arry[50], i, n;

    cout << "How many elements do you want to enter: ";
    cin >> n;

    for (i = 0; i < n; i++) {
        cout << "Enter the number: ";
        cin >> arry[i];
    }

    quick_sort(arry, 0, n - 1);

    cout << "YOUR SORTED LIST:\n";
    for (i = 0; i < n; i++)
        cout << arry[i] << endl;

    system("pause");
    return 0;
}

void quick_sort(int list[], int lb, int ub) {
    int loc;
    if (lb < ub) {
        loc = partition(list, lb, ub);
        quick_sort(list, lb, loc - 1);
        quick_sort(list, loc + 1, ub);
    }
}

int partition(int list[], int lb, int ub) {
    int loc;
    int swap;
    int pivot = list[lb];
    int start = lb;
    int end = ub;

    while (start < end) {
        while (list[start] <= pivot) {
            start++;
        }
        while (list[end] > pivot) {
            end--;
        }
        if (start < end) {
            // swap(list[start], list[end]);
            swap = list[start];
            list[start] = list[end];
            list[end] = swap;
            loc = end;
        }
    }

    // swap(list[lb], list[end]);
    swap = list[lb];
    list[lb] = list[end];
    list[end] = swap;
    loc = end;

    return loc;
}
