#include <iostream>
using namespace std;

int Partition(int a[], int si, int ei)
{

    int count = 0;
    for (int i = si; i <= ei; i++)
    {
        if (a[i] < a[si])
            count++;
    }
    int index = count + si;
    cout << "PI is :" << index << endl;

    int temp = a[index];
    a[index] = a[si];
    a[si] = temp;

    cout << endl;
    int p = si;
    int q = ei;

    while (p < index && q > index)
    {
        if (a[p] > a[index] && a[q] < a[index])
        {

            int temp = a[p];
            a[p] = a[q];
            a[q] = temp;
            p++;
            q--;
        }

        if (a[q] > a[index] && a[p] > a[index])
        {
            q--;
        }

        if (a[q] < a[index] && a[p] <= a[index])
        {
            if (a[p] < a[index])
            {
                p++;
            }
        }

        if (a[q] > a[index] && a[p] <= a[index])
        {
            q--;
            p++;
        }
    }

    return index;
}

void QuickSort(int a[], int si, int ei)
{
    if (si >= ei)
    {
        return;
    }

    int pi = Partition(a, si, ei);
    QuickSort(a, si, pi - 1);
    QuickSort(a, pi + 1, ei);
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

    QuickSort(arr, 0, n - 1);
    cout << "Sorted array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}