#include <iostream>
using namespace std;

void Merge(int a[], int si, int mid, int ei)
{
    int n1 = mid - si + 1;
    int t1[n1];
    int n2 = ei - mid;
    int t2[n2];
    int r = 0;
    for (int i = si; i <= mid; i++)
    {
        t1[r] = a[i];
        r++;
    }

    int q = 0;
    for (int i = mid + 1; i <= ei; i++)
    {

        t2[q] = a[i];
        q++;
    }

    int i = 0;
    int j = 0;
    int k = si;
    while (i < n1 || j < n2)
    {
        if (i < n1 && j < n2)
        {
            if (t1[i] <= t2[j])
            {
                a[k] = t1[i];
                i++;
                k++;
            }
        }
        if (i < n1 && j < n2)
        {
            if (t2[j] <= t1[i])
            {
                a[k] = t2[j];
                j++;
                k++;
            }
        }

        if (i < n1 && j >= n2)
        {
            a[k] = t1[i];
            i++;
            k++;
        }
        if (j < n2 && i >= n1)
        {
            a[k] = t2[j];
            j++;
            k++;
        }
    }
}

void MergeSort(int a[], int si, int ei)
{
    if (si >= ei)
    {
        return;
    }

    int mid = (si + ei) / 2;
    MergeSort(a, si, mid);
    MergeSort(a, (mid + 1), ei);
    Merge(a, si, mid, ei);
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
    MergeSort(arr, 0, n - 1);
    cout << "Your Sorted Array is :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}