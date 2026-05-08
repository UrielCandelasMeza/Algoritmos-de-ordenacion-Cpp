# Algoritmos de Ordenación en C++

Este proyecto es una aplicación de consola en C++ que implementa varios algoritmos de ordenación y búsqueda. Está diseñado para fines educativos, permitiendo al usuario ingresar un conjunto de números y ver cómo funcionan los diferentes algoritmos.

## Algoritmos Implementados

### Ordenación

- **Bubble Sort** (Ordenamiento de Burbuja)
- **Insertion Sort** (Ordenamiento por Inserción)
- **Selection Sort** (Ordenamiento por Selección)
- **Quick Sort** (Ordenamiento Rápido)
- **Shell Sort** (Ordenamiento Shell)
- **Heap Sort** (Ordenamiento por Montículos)

### Búsqueda

- **Binary Search** (Búsqueda Binaria)
- **Sequential Search** (Búsqueda Secuencial)

## Requisitos

- Compilador de C++ (que soporte C++17, por ejemplo, `g++`).
- `make` (herramienta de automatización de compilación).

## Compilación y Ejecución

Para compilar el proyecto, utiliza el `Makefile` incluido ejecutando el siguiente comando en la raíz del proyecto:

```bash
make
```

Esto generará el ejecutable llamado `main`. Para ejecutarlo, usa:

```bash
./main
```

## Limpieza

Si deseas eliminar los archivos compilados y el directorio de construcción (`build/`), puedes usar:

```bash
make clean
```

## Estructura del Proyecto

- `main.cpp`: Punto de entrada de la aplicación y manejo del menú.
- `modules/`: Contiene la lógica de los algoritmos.
  - `modules.hpp`: Declaración de la clase `Modules` y sus métodos.
  - `modules.cpp`: Implementación de los algoritmos de ordenación y búsqueda.
- `Makefile`: Instrucciones para la compilación automatizada.
