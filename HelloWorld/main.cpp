#include <iostream>

void Log(const char* message);

int Multiply(int a, int b) {
    return a * b;
}

void MultiplyAndLog(int a, int b) {
    int result = Multiply(a, b);
    std::cout << result << std::endl;
}

int main() {
    Log("Hello, World!");
    MultiplyAndLog(5, 8);
    MultiplyAndLog(10, 20);
    MultiplyAndLog(15, 25);
    std::cin.get();
}