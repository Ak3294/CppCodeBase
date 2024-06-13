#include <iostream>

class Integer
{
public:
    Integer(int x) : var(x) {}

    void Display() const
    {
        std::cout << var;
    }

    bool operator==(const Integer &rhs) const
    {
        return var == rhs.var;
    }

private:
    int var;
};

int main()
{
    Integer a(1), b(2), c(1);
    if (a == b)
    {
        std::cout << "a == b: ";
        a.Display();
        std::cout << " == ";
        b.Display();
        std::cout << '\n';
    }
    else
    {
        std::cout << "a != b: ";
        a.Display();
        std::cout << " != ";
        b.Display();
        std::cout << '\n';
    }
    if (a == c)
    {
        std::cout << "a == c: ";
        a.Display();
        std::cout << " == ";
        c.Display();
        std::cout << '\n';
    }
    else
    {
        std::cout << "a != c: ";
        a.Display();
        std::cout << " != ";
        c.Display();
        std::cout << '\n';
    }

    return 0;
}