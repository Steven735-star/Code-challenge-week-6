#include <iostream>  
using namespace std; 

template <typename T>
T sum(T t) {
    return t;
}

template <typename T, typename... Args>
T sum(T t, Args... args) {
    return t + sum(args...);
}

int main() {
    cout << sum(1, 2, 3, 4, 5) << endl;  // Imprime: 15
    cout << sum(1.1, 2.2, 3.3) << endl;  // Imprime: 6.6
}
