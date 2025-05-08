#include "Lab4.h"
#include <iostream>
#include <vector>


namespace SpaceQuickSort {
    // Функція для вибору опорного елемента і розбиття масиву
    int partition(std::vector<int>& arr, int low, int high) {
        int pivot = arr[high]; // Обираємо останній елемент як опорний
        int i = low - 1; // Індекс меншого елемента

        for (int j = low; j < high; j++) {
            // Якщо поточний елемент менший або дорівнює опорному
            if (arr[j] <= pivot) {
                i++; // Збільшуємо індекс меншого елемента
                std::swap(arr[i], arr[j]);
            }
        }
        std::swap(arr[i + 1], arr[high]);
        return i + 1; // Повертаємо індекс опорного елемента
    }

    // Рекурсивна функція швидкого сортування
    void quickSort(std::vector<int>& arr, int low, int high) {
        if (low < high) {
            // Отримуємо індекс опорного елемента
            int pi = partition(arr, low, high);

            // Рекурсивно сортуємо підмасиви
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }

    int exampleQuickSort() {
        setlocale(LC_CTYPE, "ukr");
        int n;
        std::cout << "Введіть розмір масиву: ";
        std::cin >> n;

        if (n <= 0) {
            std::cout << "Розмір масиву має бути додатнім!" << std::endl;
            return 1;
        }

        std::vector<int> arr(n);
        std::cout << "Введіть елементи масиву: ";
        for (int i = 0; i < n; i++) {
            std::cin >> arr[i];
        }

        quickSort(arr, 0, n - 1);

        std::cout << "Відсортований масив: ";
        for (int i = 0; i < n; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
        int rrr;
        std::cin >> rrr;
        return 0;
    }
}
