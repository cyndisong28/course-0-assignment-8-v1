#include <iostream>
#include <string>
using namespace std;

int PrintLines (int input) {;
  int value = input / 2;
  int number_characters = 1;
  string text = to_string(value);

  while (number_characters < input && value >= 0) {
    cout << value;
    if ((value == 1 && input % 2 == 0) || (value == 0 && input % 2 != 0 )) {
      break;
    }
    value = value - 1;
    text = text + to_string(value);
    number_characters++;
  }
  string text_2 = text; 

  while ( number_characters <= input) {
    if (value == input / 2) {
    break;
    }
    if (input % 2 == 0 && value == 1) {
      cout << "1";
      text_2 = text_2 + "1";
      number_characters++;
    }
  value = value + 1;
  cout << value;
  text_2 = text_2 + to_string(value);
  number_characters++;
  }

  string length_of_space;
  int length_of_line1 = text_2.length();
  while (length_of_line1 > 1) {
  length_of_line1--;
  length_of_space = length_of_space + " ";
  text_2.erase (text_2.begin());
  text_2.erase (text_2.end() - 1);
  cout << endl << length_of_space << text_2;
  }
  return 0;
}

int main() {
  int input = 0;
  cout << "What is your input?";
  cin >> input;
  PrintLines(input);
  return 0;
}