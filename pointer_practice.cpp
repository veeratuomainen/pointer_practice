#include <iostream>
using namespace std;

void Swap(int *p, int l) {
    int x = *p;
    for (int j = 0; j < 10; j++) {
        *(p + j) = l - j;
    }

}

int main () {
    int array[10];
    int *array_p = array;
    int len = sizeof(array) / sizeof(int);

    for (int i = 0; i < 10; i++) {
        array[i] = i + 1;
    }

    cout << "array before the swap: ";
    for (int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }

    Swap(array_p, len);

    cout << "\narray after the swap: ";
    for (int i = 0; i < 10; i++) {
        cout << *(array_p + i) << " ";
    }

    return 0;
}