#include <iostream>

using namespace std;

class Rectangle //creating a class
{
    private:
        int length;
        int breadth;
    public:
        Rectangle() //constructor
        {
            length = 0;
            breadth = 0;
        }
        Rectangle(int a, int b); //constructor overloading
        int area();
        void changeLength(int a);
};
Rectangle::Rectangle(int a, int b)
{
    this->length = a;
    this->breadth = b;
}
int Rectangle::area()
{
    return length*breadth;
}
void Rectangle::changeLength(int a)
{
    length = a;
}
int main()
{
    Rectangle r(10,32); // creating object instance from the class
    //r.initialize(10,32);
    int area = r.area();
    cout<<area<<"\n";
    r.changeLength(32);
    area = r.area();
    cout<<area<<"\n";


    Rectangle r2;
    cout<<r2.area()<<endl;
}