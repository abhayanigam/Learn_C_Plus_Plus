#include <iostream>
using namespace std;

template <class T>
class calculator{
    private:
        T num1, num2;

    public:
        calculator(T n1, T n2){
            // num1 = n1;
            // num2 = n2;
            
            //    or 

            this->num1 = n1;
            this->num2 = n2;
        }

        void displayResult(){
            cout << "Numbers are: " << num1 << " and " << num2 << "." << endl;
            cout << "\n";

            cout << "Addition is: " << add() << endl;
            cout << "\n";
            
            cout << "Subtraction is: " << subtract() << endl;
            cout << "\n";
            
            cout << "Product is: " << multiply() << endl;
            cout << "\n";
            
            cout << "Division is: " << divide() << endl;
            cout << "\n";
        }

        T add(){ return (num1 + num2); }
        T subtract(){ return (num1 - num2); }
        T multiply(){ return (num1 * num2); }
        T divide(){ return (num1 / num2); }
};

int main(){
    calculator <int> intcal(2,1);
    calculator <float> floatcal(2.4,1.2);

    cout << "Int results -> "<<endl;
    intcal.displayResult();

    cout << "Float results -> " << endl;
    floatcal.displayResult();
}