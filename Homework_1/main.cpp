#include "ComplexNumber.h"

int main()
{
    ComplexNumber arr[3];
    arr[0].addValue(7, 12);
    arr[1].addValue(2, 2);
    arr[2].addValue(6, 3);
    selectionSort(arr, 3);
    for (int i = 0;i < 3;i++)
    {
        arr[i].print();
    }

    return 0;
}
