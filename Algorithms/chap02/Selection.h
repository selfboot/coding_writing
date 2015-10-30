#ifndef SELECTION_H
#define SELECTION_H
#include <iostream>

template <typename T> class Selection
{
public:
    void sort(T a[], const int size);
    void show(T a[], const int size);
private:
    // exchange a[i] and a[j]
    void exch(T a[], const int i, const int j)
        {
        T temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
};

template <typename T>
void Selection<T>::show(T a[], const int size) {
    for (int i = 0; i < size; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}

template <typename T>
void Selection<T>::sort(T a[], const int size) {
    for (int i = 0; i < size; i++) {
        int min = i;
        for (int j = i + 1; j < size; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        exch(a, i, min);
    }
}

#endif
