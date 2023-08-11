#include <iostream>
#include <string>

std::string checkForPalindrome(std::string input) {
  bool isPalin = true;
  std::string output;
  int inputSize = input.size();
  for (int i = 0; i < inputSize / 2; i++) {
    if (tolower(input.at(i)) != tolower(input.at(inputSize - 1 - i))) {
      isPalin = false;
    }
  }
  if (isPalin) {
    output = input + " is a palindrome.";
  }
  else {
    output = input + " is not a palindrome.";
  }
  return output;
}


int main(void) {
  std::string input;
  std::cout << "Please enter a string to be checked for being a Palindrome: " << std::endl;
  std::getline(std::cin, input);

  std::cout << checkForPalindrome(input) << std::endl;


  return EXIT_SUCCESS;
}