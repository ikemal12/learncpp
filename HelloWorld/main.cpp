#include <iostream>
#include <cstring>

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

    int var = 8;
    void* ptr = &var;

    char* buffer = new char[8];
    memset(buffer, 0, 8);

    char** ptr = &buffer;

    delete[] buffer;

    int a = 5;
    int& ref = a;
    ref = 2;
    LOG(a);

    MultiplyAndLog(5, 8);
    MultiplyAndLog(10, 20);
    MultiplyAndLog(15, 25);
    std::cin.get();
}