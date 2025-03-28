//✅ Task 3.1: Write a Variadic Template Function
#include <iostream>

template <typename T>
void printAll(T t) {
    std::cout << t << std::endl;
}

template <typename T, typename... Args>
void printAll(T t, Args... args) {
    std::cout << t << " ";
    printAll(args...);
}

int main() {
    printAll(1, 2.5, "Hello", 'c'); // Should print: 1 2.5 Hello c
}