#include <iostream>
using namespace std;


double average(int a[], int n)
{

    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];

    return (double)sum / n;
}


int main()
{
    int arr[] = { 4, 5, 8, 10, 14, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << average(arr, n) << endl;
    return 0;
}
