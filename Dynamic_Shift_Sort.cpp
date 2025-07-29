#include <iostream>  
using namespace std;    
   
// Dynamic Shift Sort Algorithm
void dynamicShiftSort(int arr[], int size)   
{
    // Iterate over each element in the array 
    for (int i = 0; i < size - 1; i++)
    {
        // Compare the current element with the rest of the elements
        for (int j = i + 1; j < size; j++) 
        {
            // Swap to shift larger elements forward
            if (arr[i] < arr[j]) 
            { 
                swap(arr[i], arr[j]);
            }
        }
    } 
}

int main() 
{
    // Initialize the array with values
    int arr[] = {5, 47, 65, 12, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Print the initial array
    cout << "Initial array: ";
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Call the dynamic shift sort function
    dynamicShiftSort(arr, size);

    // Print the sorted array in descending order
    cout << "Sorted array in Descending order: ";
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
