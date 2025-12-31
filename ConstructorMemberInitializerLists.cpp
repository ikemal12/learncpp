#include <iostream>
#include <string>

class Example {
public: 
    Example() {
        std::cout << "Created Example" << std::endl;
    }

    Example(int x) 
        : m_Value(x) {
        std::cout << "Created Example with value: " << m_Value << std::endl;
    }
}

class Entity {
private:
    std::string m_Name;
    Example m_Example;
public:
    Entity() 
        : m_Name("Unknown"), m_Example = Example(8) {
    }

    Entity(const std::string& name) : m_Name(name) {
        
    }

    const std::string& GetName() const { 
        return m_Name; 
    }
};

int main() {

    Entity e0;
    std::cout << e0.GetName() << std::endl;

    Entity e1("Hero");
    std::cout << e1.GetName() << std::endl;
    
    std::cin.get();
}