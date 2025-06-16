#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int Multiply(double x, double y) {

    double multiplication = x * y;

    return multiplication;
}

int Divide(double x, double y) {

    double division = x / y;

    return division;
}

int Subtract(double x, double y) {

    double subtract = x - y;

    return subtract;
}

int Addition(double x, double y) {

    double addition = x + y;

    return addition;
}

int main(){
    cout << "Operator(Type of Calculation): ";
    char TypeOfCalculation = ' ';
    cin >> TypeOfCalculation;
    cout << "1st Number: ";
    double x;
    double y;
    cin >> x;
    cout << "2nd Number: ";
    cin >> y;
    double calculation = x + y;

    switch(TypeOfCalculation){
        case '*':
            cout << "Calculation = " << Multiply(x, y);
            break;
        case '/':
            cout << "Calculation = " << Divide(x, y);
            break;
        case '-':
            cout << "Calculation = " << Subtract(x, y);
            break;
        case '+':
            cout << "Calculation = " << Addition(x, y);
            break;
        default:
            cout << "Invalid";
            break;
    }

    return 0;
}