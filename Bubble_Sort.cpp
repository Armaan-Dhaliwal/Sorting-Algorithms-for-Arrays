/*Bubble Sort */
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter no. of elements in array:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter ypur elements:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Your array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "\n";

    // Bubble Sort:
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}