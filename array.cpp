#include <iostream>
using namespace std;

int main()
{
    int arr[20] = {1};
    int n = 20;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
        break;
    }
    for (int i = 1; i < n; i++)
    {
        cout << '1' << ' ';
    }

    return 0;
}