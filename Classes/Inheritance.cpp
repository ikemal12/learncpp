#include <iostream>

class Entity {
public: 
    float X, Y;

    void Move(float xa, float ya) {
        X += xa;
        Y += ya;
    }
};

class Player : public Entity {
public:
    const char* Name;

    void PrintName() {
        std::cout << Name << std::endl;
    }
};

int main() {
    Player player;
    player.X = 2.0f;
    player.Y = 3.0f;
    player.Name = "John";
    player.Move(1.0f, 1.0f);
    player.PrintName();

    std::cout << sizeof(Player) << std::endl;
    std::cout << sizeof(Entity) << std::endl;
    
    std::cin.get();
}