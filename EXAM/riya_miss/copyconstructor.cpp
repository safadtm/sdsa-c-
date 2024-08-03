// COPY CONSTRUCTOR
// PARAMETERIZED CONSTRUCTOR
#include <iostream>
using namespace std;

class Wall
{
private:
    double length;
    double height;

public:
    Wall(double len, double hgt)
    {
        length = len;
        height = hgt;
    }
    
    //  & symbol is used to pass arguments by reference. 
    Wall(Wall &obj){
        length=obj.length;
        height=obj.height;
    }

    double calculateArea()
    {
        return length * height;
    }
};

int main()
{
    Wall wall1(10.5, 8.6);
    Wall wall2=wall1; // copy
    Wall wall3(50,50); 

    cout << "Area of wall 1 : " << wall1.calculateArea() << endl;
    cout << "Area of wall 2 : " << wall2.calculateArea() << endl;
     cout << "Area of wall 3 : " << wall3.calculateArea() << endl;

    return 0;
}