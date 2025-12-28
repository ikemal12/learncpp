#include <iostream>

static int int_Value = 5;

struct Entity {
    int x, y;

    void Print() {
        std::cout << "X: " << x << ", Y: " << y << std::endl;
    }
}

static void Print(Entity e) {
    std::cout << e.x << ", " << e.y << std::endl;
}

int main() {
    Entity e;
    e.x = 2;
    e.y = 3;

    Entity e1 = {5, 8};
    e.Print();
    e1.Print();
    std::cin.get();

    return 0;
}