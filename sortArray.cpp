#include <iostream>

int* sortArr(int* inputArr, int arrLength) {
  int smallest = inputArr[0];
  int swapIndex;
  int tempVal;
  for (int i = 0; i < arrLength - 1; i++) {
    smallest = inputArr[i];
    swapIndex = i;
    for (int j = i+1; j < arrLength; j++) {
      if (inputArr[j] < smallest) {
        swapIndex = j;
        smallest = inputArr[j];
      }
    }
    tempVal = inputArr[i];
    inputArr[i] = smallest;
    inputArr[swapIndex] = tempVal;
  }
  return inputArr;
}

int main(void) {
  int inputCount;
  std::cout << "Enter the number of in array: " << std::endl;
  std::cin >> inputCount;
  int* intArr = new int[inputCount];

  for (int i = 0; i < inputCount; i++) {
    int tempVal;
    std::cout << "Enter int " << i + 1 << std::endl;
    std::cin >> tempVal;
    intArr[i] = tempVal;
  }

  intArr = sortArr(intArr, inputCount);

  for (int j = 0; j < inputCount; j++) {
    std::cout << intArr[j] << " ";
  }
  std::cout << std::endl;


  return EXIT_SUCCESS;
} 