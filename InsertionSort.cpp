#include <iostream>
#include <iomanip>
using namespace std;

void InsertionSort(int a[], int n)
{
    int temp,k;
    for (int i = 1; i < n; i++)
    {
        temp = a[i];
        k = i-1;

        while (temp < a[k] && k >= 0)
        {
            a[k+1] = a[k];
            k--;
        }
        a[k+1] = temp;
        
    }
    
    cout << "sorted array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << setw(5);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    InsertionSort(arr, n);
    return 0;
}