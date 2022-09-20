#include <iostream>
using namespace std;

int main()
{

    int n;
    int m;
    cin >> m >> n;

    int arr[m][n];
    int row[m] = {0};
    int col[n] = {0};
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        if (row[i] != 0)
        {

            for (int j = 0; j < n; j++)
            {
                arr[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (col[i] != 0)
        {

            for (int j = 0; j < m; j++)
            {
                arr[j][i] = 0;
            }
        }
    }


    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}