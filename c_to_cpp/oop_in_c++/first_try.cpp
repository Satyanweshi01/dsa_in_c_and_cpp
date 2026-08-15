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
            length = 1;
            breadth = 1;
        }
        Rectangle(int l, int b) //constructor overloading
        {
            length = l;
            breadth = b;
        }
        int area()
        {
            return length*breadth;
        }
        void changeLength(int l)
        {
            length = l;
        }
};
int main()
{
    Rectangle r(10,32); // creating object instance from the class
    //r.initialize(10,32);
    int area = r.area();
    cout<<area<<"\n";
    r.changeLength(32);
    area = r.area();
    cout<<area<<"\n";
}