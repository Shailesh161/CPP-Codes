#include <iostream>
using namespace std;

int main()
{
    int a[5][5], b[5][5], c[5][5];
    int i, j, n;
    cout << "first matrix" << endl;
    cout << "Enter elemnts ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "The first matrix is : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j];
        }
    }

    cout << "Enter 2 nd matrix elements : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> b[i][j];
        }
    }
    cout << "\n";
    cout << "2nd matrix is :";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << b[i][j];
        }
    }

    cout << "\n";
    cout << "Addition of matrix is :";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "Displaying addition of matrix";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << " " << c[i][j];
        }
    }

    return 0;
}
