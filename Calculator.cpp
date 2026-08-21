#include <iostream>
using namespace std;

int main() {
   int num1, num2; // Boxes to store the 2 numbers 

   cout  << "=== Simple Calculator App ===" << endl;

   cout << "Enter first number: ";
   cin >> num1; // Get first number from user 

   cout << "Enter second number: ";
   cin >> num2; // Get the second number from user 

   // Calculate Here
   int sum = num1 + num2;
   int diff = num1 - num2;
   int product = num1 * num2;

   // Display of Results are here
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Product: " << product << endl;
   return 0; 

}