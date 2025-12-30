#include <iostream>
#include <array>

int main() {
    int example[5];
    int* ptr = example;

    example[2] = 5;
    *(ptr + 2) = 6;

    for (int i = 0; i < 5; i++) {
        example[i] = 2;
    }

    int* another = new int[5];
    for (int i = 0; i < 5; i++) {
        another[i] = 2;
    }
    delete [] another;

    int a[5];
    int count = sizeof(a) / sizeof(int); // 5

    std::array<int, 5> arr;
    for (int i = 0; i < arr.size(); i++) {
        arr[i] = 2;
    }
    
    std::cin.get();
}