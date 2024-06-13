#include <iostream>
using namespace std;

class Rectangle // Class Start
{

private:
    int len, br;

public:
    void getdata() // geting length and Breadth by the User
    {
        cout << "Enter the Length of Rectangle : ";
        cin >> len;
        cout << "Enter the Breadth of Rectangle : ";
        cin >> br;
    }
    void setdata(int l, int b) // Setdata in another form
    {
        len = l;
        br = b;
    }
    void displaydata() // Display data on screen
    {
        cout << "The length of rectangle is :" << len << endl;
        cout << "The Breadth of rectangle is :" << br << endl;
        cout << endl;
    }
    void AreaPeri() // Logic of find Area and Perimeter of Rectangle
    {
        int area, peri;
        area = len * br;
        peri = 2 * (len + br);
        cout << "The Area of a rectangle is :" << area << endl;
        cout << "The Perimeter of a Reactangle is :" << peri << endl;
        cout << endl;
    }
}; // class End

int main()
{
    Rectangle r1, r2, r3;
    r1.setdata(10, 20); // value is given
    r1.AreaPeri();      // Call Area and Perimeter of Function

    r2.setdata(4, 6); // value is given
    r2.displaydata(); // Call by display function
    r2.AreaPeri();    // Call Area and Perimeter of Function

    r3.getdata();     // Value of Length and Breadth are Putted by user
    r3.AreaPeri();    // Call Area and Perimeter of Function

    return 0;
}
