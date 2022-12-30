/*Selection Sort*/
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

    // Selection Sort:

    for (int i = 0; i < n - 1; i++)
    {
        int min = 1000;
        int mini = -1;
        for (int j = i; j < n; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
    cout << "Sorted array is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}
