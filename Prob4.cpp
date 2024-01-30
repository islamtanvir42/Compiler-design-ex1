#include <iostream>
using namespace std;
int main()
{
    int n, fact = 1;
    cout << "Enter number:" << endl;
    cin >> n;
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << "Factorial of " << n << " is " << fact << endl;
    return 0;
}
