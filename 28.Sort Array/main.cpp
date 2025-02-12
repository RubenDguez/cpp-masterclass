#include <iostream>

using std::cout;

void printArray(int array[], int size);
void sort(int array[], int size);

int main()
{
    int array[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int size = sizeof(array) / sizeof(int);
    printArray(array, size);
    sort(array, size);
    printArray(array, size);
    return 0;
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << ' ';
    }
    cout << '\n';
}

void sort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int temp;
        if (array[i] > array[i + 1]) {
            temp = array[i];
            array[i] = array[i + 1];
            array[i + 1] = temp;
            i = 0;
        }
    }
}
