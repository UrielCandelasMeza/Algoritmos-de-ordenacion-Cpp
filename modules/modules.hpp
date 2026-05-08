#pragma once
#include <vector>
using namespace std;
class Modules {
public:
    void bubbleSort(vector<int>& array);
    void insertionSort(vector<int>& array);
    void quickSort(vector<int>& array);
    void selectionSort(vector<int>& array);
    void shellSort(vector<int>& array);
    void heapSort(vector<int>& array);
    void linealSearch(vector<int>& array);
    void binarySearch(vector<int>& array);

private:
    int piviot();
    void printArr(std::vector<int>& array);
};
