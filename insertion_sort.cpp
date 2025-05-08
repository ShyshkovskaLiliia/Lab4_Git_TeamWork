#include "Lab4.h"
#include <iostream>
#include <vector>

namespace SpaceInsertionSort {
    void insertionSort(std::vector<int>& arr) {
        size_t n = arr.size();
        for (size_t i = 1; i < n; i++) {
            int key = arr[i];
            size_t j = i - 1;

            while (j < n && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }

    int exampleInsertionSort() {
        setlocale(LC_CTYPE, "ukr");
        int n;
        std::cout << "Введіть розмір масиву: ";
        if (!(std::cin >> n) || n <= 0) {
            std::cout << "Некоректний розмір масиву!" << std::endl;
            return 1;
        }

        std::vector<int> arr(n);
        std::cout << "Введіть елементи масиву: ";
        for (int i = 0; i < n; i++) {
            if (!(std::cin >> arr[i])) {
                std::cout << "Некоректний елемент масиву!" << std::endl;
                return 1;
            }
        }

        insertionSort(arr);

        std::cout << "Відсортований масив: ";
        for (int i = 0; i < n; i++) {
            std::cout << arr[i];
            if (i < n - 1) std::cout << " ";
        }
        std::cout << std::endl;
        int rrr;
        std::cin >> rrr;
        return 0;
    }
}