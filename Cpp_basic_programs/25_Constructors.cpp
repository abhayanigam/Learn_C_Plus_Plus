#include <iostream>
using namespace std;

class wall{
    private :
        double length;
        double height;

    public :
        // Constructor with no arguments

        wall(){
            length = 5.5;
            cout << "Creating a wall." << endl;
            cout << "Length = " << length << endl;
        }

        wall(double len , double hgt){
            this->length = len;
            this->height = hgt;
        }

        double CalculateArea(){
            return (length*height);
        }
};

int main()
{
    // Constructor with no argument;
    wall w;

    // Constructor with argument;
    wall w2(10.5,8.6);
    cout << "The Are is : " << w2.CalculateArea()<< endl;
}