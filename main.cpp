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

    bool ContinueCalculation = true;

    while(ContinueCalculation){
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
                cout << "Calculation = " << Multiply(x, y) << endl;
                break;
            case '/':
                cout << "Calculation = " << Divide(x, y) << endl;
                break;
            case '-':
                cout << "Calculation = " << Subtract(x, y) << endl;
                break;
            case '+':
                cout << "Calculation = " << Addition(x, y) << endl;
                break;
            default:
                cout << "Invalid!" << endl;
                break;
        }
    }

    return 0;
}