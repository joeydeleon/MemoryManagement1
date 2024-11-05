#include <iostream>
using namespace std;

int main() {
    int int1, int2, int3;
    cout << "Enter three integer values: ";
    cin >> int1 >> int2 >> int3;

    // Allocate dynamic memory for pointers
    int* ptr1 = new int(int1);
    int* ptr2 = new int(int2);
    int* ptr3 = new int(int3);

    // Display variable values and pointer values
    cout << "Value of int1: " << int1 << " | Pointer ptr1 points to: " << *ptr1 << endl;
    cout << "Value of int2: " << int2 << " | Pointer ptr2 points to: " << *ptr2 << endl;
    cout << "Value of int3: " << int3 << " | Pointer ptr3 points to: " << *ptr3 << endl;

    // Release dynamic memory
    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}
/*
 * memory_management.cpp
 *
 *  Created on: Nov 5, 2024
 *      Author: jocelyndeleon
 */




