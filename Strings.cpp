#include <iostream>
#include <string>

void PrintString(const std::string& str) {
    std::cout << str << std::endl;
}

int main() {

    const char* name = "Cherno";
    std::cout << name << std::endl;

    char name2[7] = {'C', 'h', 'e', 'r', 'n', 'o', 0};
    std::cout << name2 << std::endl;

    std::string name3 = "Cherno";
    std::cout << name3 << std::endl;
    
    std::cin.get();
}