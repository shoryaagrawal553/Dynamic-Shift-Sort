#include <iostream>
using namespace std;

// Dynamic Shift Sort Algorithm
void dynamicShiftSort(int arr[], int size) 
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++) 
        {
            if (arr[i] < arr[j]) 
            { // Swap to shift larger elements forward
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main() 
{
    int arr[] = {5, 47, 65, 12, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Initial array: ";
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    dynamicShiftSort(arr, size);

    cout << "Sorted array in Descending order: ";
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
