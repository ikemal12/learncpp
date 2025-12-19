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
    int x = 5;
    bool comparisonResult = x == 5;
    if (comparisonResult) {
        Log("Hello, World!");
    }

    const char* ptr = "Hello";
    if (ptr) 
        Log(ptr);
    else 
        Log("Pointer is null");

    for (int i = 0; i < 5; i++) {
        Log("Hello World");
    }

    int i = 0;
    while (i < 5) {
        Log("Hello World");
        i++;
    }

    do {
        // executes at least once
    } while (false);

    MultiplyAndLog(5, 8);
    MultiplyAndLog(10, 20);
    MultiplyAndLog(15, 25);
    std::cin.get();
}