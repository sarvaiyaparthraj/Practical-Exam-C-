

#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound() = 0;
    virtual void move() = 0;
};

class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Dog barks" << endl;
    }

    void move()
    {
        cout << "Dog runs" << endl;
    }
};

class Bird : public Animal
{
public:
    void sound()
    {
        cout << "Bird chirps" << endl;
    }

    void move()
    {
        cout << "Bird flies" << endl;
    }
};

int main()
{
    Animal *a[2];

    Dog d;
    Bird b;

    a[0] = &d;
    a[1] = &b;

    a[0]->sound();
    a[0]->move();

    cout << endl;

    a[1]->sound();
    a[1]->move();

    return 0;
}   