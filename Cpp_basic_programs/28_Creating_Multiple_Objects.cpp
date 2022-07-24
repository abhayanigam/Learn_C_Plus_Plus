#include <iostream>
using namespace std;

class test
{
private:
    string str;
    int x, y;

public:
    // String
    void setStr(string str)
    {
        this->str = str;
    }
    string getStr()
    {
        return str;
    }

    // Int X
    void setX(int x)
    {
        this->x = x;
    }
    int getX()
    {
        return x;
    }

    // Int Y
    void setY(int y)
    {
        this->y = y;
    }
    int getY()
    {
        return y;
    }
};

int main()
{
    int size;
    cout << "Enter the size : ";
    cin >> size;

    test obj[size];
    string data;
    int x, y;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the str : ";
        cin >> data;
        obj[i].setStr(data);

        cout << "Enter the num x " << i + 1 << " : ";
        cin >> x;
        obj[i].setX(x);

        cout << "Enter the num y " << i + 1 << " : ";
        cin >> y;
        obj[i].setY(y);
    }

    for (int i = 0; i < size; i++)
    {
        cout << obj[i].getStr() << endl;
        cout << obj[i].getX() << endl;
        cout << obj[i].getY() << endl;
    }
    return 0;
}