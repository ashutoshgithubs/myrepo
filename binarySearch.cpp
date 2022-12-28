// Creating a Binary search ----> Works efficiently when array is sortrd
#include <iostream>
using namespace std;
int binary_search(int Arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (Arr[mid] == key)
        {
            return mid;
        }
        else if (key > Arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return -1;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 11, 15, 90}; // Array must be sorted either ascending or decending
    binary_search(arr, 10, 7);
    binary_search(arr, 10, 15)

            cout
        << "The index of key is:" << binary_search(arr, 10, 7) << endl;
    cout << "The index of key is:" << binary_search(arr, 10, 15) << endl;

    return 0;
}
