#include <iostream>
#include <string>
#include <stdlib.h>

int main() {

    const char name[8] = u8"Che\0rno"; // 1 byte

    std::cout << name << std::endl;
    std::cout << strlen(name) << std::endl;

    const wchar_t wname[8] = L"Cherno";
    const char16_t* uname[8] = u"Cherno"; // 2 bytes
    const char32_t* dname[8] = U"Cherno"; // 4 bytes

    using namespace std::string_literals;

    std::string name0 = "Cherno"s + " Hello!"s;

    const char* example = R"(Line 1
Line 2  
Line 3)";
    
    std::cin.get();
}