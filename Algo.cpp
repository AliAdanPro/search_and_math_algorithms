#include <iostream>
#include "Factorial.h"
#include "Power.h"
#include "GCD.h"
#include "Fibonacci.h"
#include "Linear.h"
#include "Binary.h"

using namespace std;

int main()
{
  int choice;

  do
  {
    cout << "ALGORITHMS" << endl;
    cout << "What algorithm do you want to use?" << endl;
    cout << "1. Factorial Algorithm" << endl;
    cout << "2. Power Algorithm" << endl;
    cout << "3. GCD Algorithm" << endl;
    cout << "4. Fibonacci Algorithm" << endl;
    cout << "5. Linear Search Algorithm" << endl;
    cout << "6. Binary Search Algorithm" << endl;
    cout << "7. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
      int n;
      cout << "Enter number you want to find the factorial of: ";
      cin >> n;
      cout << "Factorial of " << n << " is " << Factorial::compute(n) << endl;
      cout << endl;
      break;
    }
    case 2:
    {
      int n, a;
      cout << "Enter a number: ";
      cin >> n;
      cout << "Enter the exponential power: ";
      cin >> a;
      cout << n << " raised to the power of " << a << " = " << Power::compute(n, a) << endl;
      cout << endl;
      break;
    }
    case 3:
    {
      int n, a;
      cout << "Enter the two numbers: ";
      cin >> n >> a;
      cout << "The GCD of " << n << " and " << a << " = " << GCD::compute(n, a) << endl;
      cout << endl;
      break;
    }
    case 4:
    {
      int n;
      cout << "Enter the index: ";
      cin >> n;
      cout << "The Fibonacci number at the index " << n << " is " << Fibonacci::compute(n) << endl;
      cout << endl;
      break;
    }
    case 5:
    {
      int n;
      cout << "Enter the number of elements in the array: ";
      cin >> n;
      int arr[n];
      cout << "Enter the elements of the array: ";
      for (int i = 0; i < n; i++)
      {
        cin >> arr[i];
      }
      int x;
      cout << "Enter element to search: ";
      cin >> x;
      int result = Linear::linearSearch(arr, 0, n, x);
      if (result == -1)
      {
        cout << "Element not present in array :(" << endl;
      }
      else
      {
        cout << "Element found. :) " << endl;
      }
      cout << endl;
      break;
    }
    case 6:
    {
      int n;
      cout << "Enter the number of elements in the array: ";
      cin >> n;
      int arr[n];
      cout << "Enter the elements of the array (in sorted order): ";
      for (int i = 0; i < n; i++)
      {
        cin >> arr[i];
      }
      int x;
      cout << "Enter element to search: ";
      cin >> x;
      int result = Binary::binarySearch(arr, 0, n-1, x);
      if (result == -1)
      {
        cout << "Element not present in array :(" << endl;
      }
      else
      {
        cout << "Element found :)" << endl;
      }
      cout << endl;
      break;
    }
    case 7:
      cout << "Exiting" << endl;
      break;
    default:
      cout << "Wrong input. Try again." << endl;
      cout << endl;
      break;
    }
  } while (choice != 7);

  return 0;
}
