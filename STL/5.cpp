// #include <iostream>
// #include <vector>
// #include <algorithm>

// // Comparator function for sorting in decreasing order
// bool comparator(int a, int b) {
//     return a > b; // Return true if a should come before b
// }

// int main() {
//     std::vector<int> vec = {5, 1, 4, 2, 8};

//     // Sorting in decreasing order using comparator
//     std::sort(vec.begin(), vec.end(), comparator);

//     // Printing the sorted vector
//     std::cout << "Sorted vector in decreasing order: ";
//     for (int num : vec) {
//         std::cout << num << " ";
//     }

//     return 0;
// }


#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Vector of pairs
    std::vector<std::pair<int, int>> vec = {{1, 5}, {2, 3}, {3, 8}, {4, 1}};

    // Sorting in decreasing order based on the second element of the pair
    std::sort(vec.begin(), vec.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
        return a.second > b.second; // Sort by the second element in descending order
    });

    // Printing the sorted vector of pairs
    std::cout << "Sorted vector of pairs in decreasing order by the second element:\n";
    for (const auto& p : vec) {
        std::cout << "(" << p.first << ", " << p.second << ") ";
    }

    return 0;
}
