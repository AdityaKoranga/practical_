#include <iostream>
#include <cmath>
using namespace std;

class Triangle
{
private:
    float a, b, c, h;

public:
    Triangle() {}

    Triangle(float a, float b, float c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    Triangle(float b, float h)
    {
        this->b = b;
        this->h = h;
    }

    float area()
    {
        return area(this->a, this->b, this->c);
    }

    float area(float a, float b, float c)
    {
        float p = (a + b + c) / 2;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }

    // overloaded functions
    float area(float b, float h)
    {
        return (b + h) / 2;
    }
    // Overload assignment operator
    Triangle &operator=(const Triangle &triangle)
    {
        // do the copy
        this->a = triangle.a;
        this->b = triangle.b;
        this->c = triangle.c;
        return *this;
    }

    // equality operator.
    friend bool operator==(const Triangle &t1, const Triangle &t2)
    {
        return (t1.a == t2.a && t1.b == t2.b && t1.c == t2.c);
    }
};

int main()
{
    Triangle t1(18, 30, 24);
    cout << "Area of the tringle with sides : " << t1.area(18, 30, 24) << "\n";

    Triangle t2;
    cout << "Area of the tringle with base and height : " << t2.area(24, 18) << "\n";
    ;

    Triangle tCopy = t1;

    cout << "Area of the copy tringle " << tCopy.area() << "\n";

    if (t1 == tCopy)
    {
        cout << "The triangles are equal.\n";
    }
    else
    {
        cout << "The triangles are not equal.\n";
    }

    return 0;
}