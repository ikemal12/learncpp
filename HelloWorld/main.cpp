#include <iostream>
#include <cstring>

void Log(const char* message);
void Log(int value);

void Log(const char* message) {
    std::cout << message << std::endl;
}

void Log(int value) {
    std::cout << value << std::endl;
}

int Multiply(int a, int b) {
    return a * b;
}

void MultiplyAndLog(int a, int b) {
    int result = Multiply(a, b);
    std::cout << result << std::endl;
}

void Increment(int& value) {
    value++;
}

class Player {
public:
    int x, y;
    int speed;

    void Move(int xa, int ya) {
        x += xa * speed;
        y += ya * speed;
    }
};

int main() {
    Player player;
    player.x = 0;
    player.y = 0;
    player.speed = 1;
    player.Move(1, -1);

    int x = 5;
    bool comparisonResult = x == 5;
    if (comparisonResult) {
        Log("Hello, World!");
    }

    const char* cptr = "Hello";
    if (cptr) 
        Log(cptr);
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
    void* vptr = &var;

    char* buffer = new char[8];
    memset(buffer, 0, 8);

    char** bptr = &buffer;

    delete[] buffer;

    int a = 5;
    int& ref = a;
    ref = 2;
    Log(a);
    Increment(a);

    MultiplyAndLog(5, 8);
    MultiplyAndLog(10, 20);
    MultiplyAndLog(15, 25);
    std::cin.get();
}