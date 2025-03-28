//Part 2: Concepts
# include <iostream>
# include <vector>
# include <string>
using namespace std;

template <typename T>
concept Numeric = std::integral<T> || std::floating_point<T>;

template <Numeric T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << add(8, 4) << endl;       // Should print 12
    cout << add(2.8, 5.1) << endl;   // Should print 7.9
    // cout << add("a", "b");        // Should fail at compile time

}
