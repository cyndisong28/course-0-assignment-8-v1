#include <iostream>
#include <string>
using namespace std;

int GetInteger() {
  int input;
  cout << "Enter a integer: ";
  cin >> input;
  return input;
}

char GetMathFunction() {
  char function;
  bool function_is_valid = false;
  while (!function_is_valid) {
    cout << "Enter a math function. It must be one of the following: (+, -, *, /, %, =): ";
    cin >> function;
    if (function == '+' || function == '-' || function == '*' || function == '/') {
      function_is_valid = true;
    }
  }
  return function;
}

void GetCurrentTotal() {
  char function = GetMathFunction();
  int current_total = 0;
  while (function != '=') {
    int first_number = GetInteger();
    function = GetMathFunction();
    int second_number = GetInteger();
    if (function == '+') {
    current_total = first_number + second_number;
    }
    if (function == '%') {
    current_total = first_number % second_number;
    }
    if (function == '*') {
    current_total = first_number * second_number;
    }
    if (function == '/') {
    current_total = first_number / second_number;
    }
    if (function == '-') {
    current_total = first_number - second_number;
    }
    cout << first_number << function << second_number << "=" << current_total << endl;
  }
}

int main() {
  GetCurrentTotal();
  //cout << "Your current total is " << current_total << endl;
  return 0;
}
