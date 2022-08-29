/* 29-08-2022 */
#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int temp[n];

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {

                if (arr[i] == arr[j])
                {
                    temp[j] = arr[j];
                }
        
        }
    }

    for (int i = 0; i < n; i++)
    {

        if (arr[i] != temp[i])
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}