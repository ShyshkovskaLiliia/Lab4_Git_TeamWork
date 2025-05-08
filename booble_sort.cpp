#include "Lab4.h"
#include <iostream>
#include <vector>


namespace Spacebobble_sort {
    void bubbleSort(std::vector<int>& arr) {
        size_t n = arr.size();
        for (int i = 0; i < n - 1; i++) {
            bool swapped = false;
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    std::swap(arr[j], arr[j + 1]);
                    swapped = true;
                }
            }
            if (!swapped) break;
        }
    }

    int mainbooble_sort() {
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

        bubbleSort(arr);

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
