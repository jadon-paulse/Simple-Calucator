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
        cout << "Choose the type of calculation to use: " << endl 
        << "Press 1 for Multiplication," <<
        " Press 2 for Divition," <<
        " Press 3 for Addition," <<
        " Press 4 for Subtraction," << 
        "Press e to exit calculator" << endl
        << "Enter here: ";
        char TypeOfCalculation = ' ';
        cin >> TypeOfCalculation;
        double x;
        double y;
        cout << "1st Number: ";
        cin >> x;
        cout << "2nd Number: ";
        cin >> y;
        double calculation = x + y;

        switch(TypeOfCalculation){
            case '1':
                cout << "Calculation = " << Multiply(x, y) << endl;
                break;
            case '2':
                cout << "Calculation = " << Divide(x, y) << endl;
                break;
            case '4':
                cout << "Calculation = " << Subtract(x, y) << endl;
                break;
            case '3':
                cout << "Calculation = " << Addition(x, y) << endl;
                break;
            case 'e':
                ContinueCalculation = false;
                break;
            default:
                cout << "Invalid!" << endl;
                ContinueCalculation = false;
                break;
        }
    }

    return 0;
}