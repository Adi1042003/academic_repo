#include <iostream>
#include <string> // Include string header

class Entity
{
private:
    std::string m_name;
    int m_score;
public:
    Entity() : m_name("Unknown"), m_score(0)
    {
    }

    Entity(const char* name ,int val) : m_name(name), m_score(val) // Initialize m_score here
    {
    }

    const std::string Getname() const // Mark as const
    {
        return m_name;
    }
};

int main()
{
    int a[7] = { 0 }; // Initialize all elements to 0
    a[0] = 10;
    a[4] = 20;
    a[6] = 40;
    int* a1 = new int[5];
    a1[0] = 1;

    for (int b : a)
    {
        std::cout << b << std::endl;
    }

    Entity e;
    std::cout << e.Getname() << std::endl;
    Entity e1("Aditya",20);
    std::cout << e1.Getname() << std::endl;

    delete[] a1; // Free allocated memory
    return 0;
}
