#include <iostream>
using namespace std;

class shape
{
public:
virtual void display()
{
    cout << "this is shape class"<< endl;

}

};
class circle :public shape

{
    public:
    void display()
    {
        cout<<"this is circle class"<< endl;
    }

};

class rectangle : public shape
{
    void display()
    {
        cout << "this is rectangle class" << endl;
    }
};



int main()
{


    
  shape *s[2];

    circle c;
    rectangle r;

    s[0] = &c;
    s[1] = &r;

    s[0]->display();
    s[1]->display();



    return 0;
}