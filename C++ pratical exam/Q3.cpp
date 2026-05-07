#include <iostream>
using namespace std;

class Shape
{
protected:
    string color;

public:
    void setColor(string c)
    {
        color = c;
    }

    string getColor()
    {
        return color;
    }
};

class Circle : public Shape
{
private:
    float radius;

public:
    void setRadius(float r)
    {
        radius = r;
    }

    float area()
    {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape
{
private:
    float length, width;

public:
    void setValues(float l, float w)
    {
        length = l;
        width = w;
    }

    float area()
    {
        return length * width;
    }
};

int main()
{
    Circle c;
    c.setColor("Red");
    c.setRadius(5);

    Rectangle r;
    r.setColor("Blue");
    r.setValues(10, 4);

    cout << "Circle Color : " << c.getColor() << endl;
    cout << "Circle Area  : " << c.area() << endl;

    cout << endl;

    cout << "Rectangle Color : " << r.getColor() << endl;
    cout << "Rectangle Area  : " << r.area() << endl;

    return 0;
}