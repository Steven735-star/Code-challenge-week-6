# include <iostream>
# include <vector>
# include <string>
// ✅ Task 1.1: Write a Simple Template Function
using namespace std;

auto maxValue(auto a, auto b) {
    return (a > b) ? a : b;
}
std::string  maxvalue (std::string a, std::string b) {
    return (a > b) ? a : b;
}

int main() {
    cout << maxValue(2,4) << endl;
    cout << maxValue(1.6,4.3) << endl;
    cout << maxvalue("hello", "world") << endl;
    return 0;
}
