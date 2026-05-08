#include <iostream>
#include <algorithm>
#include <utility>
#include "modules.hpp"


using namespace std;

void Modules::bubbleSort(vector<int>& array) {
  size_t n = array.size();
  for (size_t i = 0; i < n - 1; i++) {

    if(is_sorted(array.begin(), array.end())){
      printArr(array);
      return;
    }

    for (size_t j = 0; j < n - i - 1; j++) {
        if (array[j] > array[j + 1]) {
            swap(array[j], array[j + 1]);
        }
    }

    cout << "Pasadas: " << i << endl;
  }
  printArr(array);
}

void Modules::insertionSort(vector<int>& array) {

}

void Modules::selectionSort(vector<int>& array) {
  size_t n = array.size();
  for(size_t i = 0; i < n - 1; i++) {
    size_t min = i;
    for(size_t j = i + 1; j < n ; j++) {
      if(array[j] < array[min]) {
        min = j;
      }
    }
    swap(array[i], array[min]);
  }

  printArr(array);
}
void Modules::quickSort(vector<int>& array) {}
void Modules::shellSort(vector<int>& array) {
  size_t n = array.size();

  for (int gap = n / 2; gap > 0; gap /= 2) {
    for (int i = gap; i < n; i++) {
      int temp = array[i];
      int j = i;
      while (j >= gap && array[j - gap] > temp) {
        array[j] = array[j - gap];
        j -= gap;
      }
      array[j] = temp;
    }
  }

  printArr(array);
}
void Modules::heapSort(vector<int>& array) {}
void Modules::linealSearch(vector<int>& array) {}
void Modules::binarySearch(vector<int>& array) {}

int Modules::piviot() {
    return 0;
}

void Modules::printArr(vector<int>& array) {
    for (size_t i = 0; i < array.size(); i++) {
        cout << "Elemento [" << i << "]: " << array[i] << endl;
    }
}
