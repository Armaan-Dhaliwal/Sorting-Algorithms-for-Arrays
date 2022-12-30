/*Insertion Sort*/
#include <iostream>
using namespace std;
void InsertSort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int current = a[i];
        while (a[j] > current && j >= 0)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = current;
    }

    return;
}

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
    InsertSort(arr, n);
    cout << "Sorted array is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}