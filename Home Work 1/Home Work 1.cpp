// Home Work 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int *myFunc(int* num_1, int* num_2) {
    if (*num_1 > *num_2) {
        return num_1;
        }
    else if (*num_1 < *num_2){
        return num_2;
    }
    else {
        cout << "The numbers are equal" << endl;
        return nullptr;
    }
}

void myFuncOne(int* numOne) {
    if (*numOne > 0) {
        cout << "Entered number more than zero." << endl;
    }
    else if (*numOne < 0) {
        cout << "Entered number less than zero." << endl;
    }
    else {
        cout << "The number is zero" << endl;
    }
} 

void myFuncTwo(int* num1, int *num2) {
    int tmp = *num1;
    *num1 = *num2;
    *num2 = tmp;

    cout << "Number one is: " << *num1 << endl;
    cout << "Number two  is: " << *num2 << endl;
}

double myFuncThree(double* number_1, double* number_2) {
    char doThis = ' ';
    double result_1;
    cout << "Enter action: \t";
    cin >> doThis;

    switch (doThis)
    {
    case '+':
        result_1 = *number_1 + *number_2;
        break;
    case '-':
        result_1 = *number_1 - *number_2;
        break;
    case '*':
        result_1 = *number_1 * *number_2;
        break;
    case '/':
        if (*number_2 == 0) {
            cout << "Division by zero!";
            return 0;
            break;
        }
        else {
            result_1 = *number_1 / *number_2;
            break;
        }
    default:
        cout << "Invalid operation!";
        return 0;
        break;
    }
    return result_1;
}

int main()
{   
    int num_1;
    int num_2;
    int numOne;
    int num1, num2;
    double number_1, number_2;
    
    cout << " Enter numbers: \t";
    cin >> num_1 >> num_2;

    int* result = myFunc(&num_1, &num_2); 
    if (result != nullptr) { 
        cout << "Greater number is: " << *result << endl; 
    }
    cout << myFunc(&num_1, &num_2) << endl;

    cout << "Enter number: \t";
    cin >> numOne;
    int* num_ptr = &numOne;

    myFuncOne(num_ptr);
    
    cout << " Enter numbers: \t";
    cin >> num1 >> num2;

    myFuncTwo(&num1, &num2);

    cout << " Enter numbers: \t"; 
    cin >> number_1 >> number_2;

   cout << myFuncThree(&number_1, &number_2);

    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
