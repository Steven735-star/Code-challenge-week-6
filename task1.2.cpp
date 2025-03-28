//✅ Task 1.2: Overload a Template Function
# include <iostream>
# include <vector>
#include <algorithm>
using namespace std;

template <typename T>
T maxValue(T a, T b) {
    return (a > b) ? a : b;
}

template <typename T>
T maxValue(T a, T b, T c) {
    return maxValue(a, maxValue(b, c)); 
}

int main() {
    cout << maxValue(8, 5, 3) << endl;          // Imprime 5
    cout << maxValue(2.1, 7.7, 1.9) << endl;    // Imprime 3.7
}