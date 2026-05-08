#include <iostream>
#include <vector>
#include "modules/modules.hpp"


#define OPTIONS 10

using namespace std;

void printMenu();
bool insertNumbers(vector<int>& array, size_t& maxNumbers);
void verifySelection(int& selection);



int main(void) {
  Modules modules;
  vector<int>array;
  size_t maxNumbers = 0;
  int selection = 0;
  bool ok;
  bool exit = false;
  do {
    ok = insertNumbers(array, maxNumbers);
  } while(!ok);

  verifySelection(selection);

  vector<int> copy = array;

  do {
    copy = array;
    switch (selection) {
      case 1:
        cout << "Se va a usar una copia del array" << endl;
        modules.bubbleSort(copy);
        break;
      case 3:
        cout << "Se va a usar una copia de array" << endl;
        modules.selectionSort(copy);
        break;
      case 5:
        cout << "Se va a usar una copia del array" << endl;
        modules.shellSort(copy);
        break;
      case 6:
        do {
          ok = insertNumbers(array, maxNumbers);
        } while(!ok);
        copy = array;
        break;
      case OPTIONS:
        exit = true;
        break;
    }

    if (selection != OPTIONS) {
      verifySelection(selection);
    }
  } while(!exit);

  cout << "Hasta luego" << endl;

  return 0;
}


void printMenu() {
  cout << "---------- Algoritmos de ordenacion en C++ ----------" << endl;
  cout << "Ingrese una de las siguientes opciones:" << endl;
  cout << "1. Bubble Sort" << endl;
  cout << "2. Insertion Sort" << endl;
  cout << "3. Selection Sort" << endl;
  cout << "4. Quick Sort" << endl;
  cout << "5. Shell Sort" << endl;
  cout << "6. Heap Sort" << endl;
  cout << "7. Ingresar nuevos datos" << endl;
  cout << "8. Busqueda Binaria" << endl;
  cout << "9. Busqueda Secuencial" << endl;
  cout << "10. Salir" << endl;
}

bool insertNumbers(vector<int>& array, size_t& maxNumbers) {
  cout << "Ingrese los la cantidad maxima de elementos:" << endl;
  cin >> maxNumbers;
  if(maxNumbers <= 0){
    return false;
  }
  array.resize(maxNumbers);
  for(size_t i = 0; i < maxNumbers; i++) {
    cout << "Ingrese el numero " << i + 1 << ":" << endl;
    cin >> array[i];
  }
  return true;
}

void verifySelection(int& selection) {
  do {
    printMenu();
    cin >> selection;
  } while(selection < 1 || selection > OPTIONS);
}
