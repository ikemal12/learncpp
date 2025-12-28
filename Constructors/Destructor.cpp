#include <iostream>

class Entity {
public:
    float X, Y;

    Entity() {
        std::cout << "Created Entity" << std::endl;
        X = 0.0f;
        Y = 0.0f;
    }

    ~Entity() {
        std::cout << "Destroyed Entity" << std::endl;
    }

    void Print() {
        std::cout << X << ", " << Y << std::endl;
    }
};

void Function() {
    Entity e;
    e.Print();
}

int main() {
    Function();
    std::cin.get();
} 