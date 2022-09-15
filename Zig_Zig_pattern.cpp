#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int counter1;
    int counter2;
    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            for (int j = 1; j <= n; j++)
            {
                if ((j + 1) % 4 == 0)
                {
                    counter1 = j;
                }

                if (j == counter1)
                {
                    cout << "* ";
                }
                else
                    cout << "  ";
                if (j == n)
                {
                    cout << endl;
                }
            }
        }

        if (i == 1)
        {

            for (int j = 1; j <= n; j++)
            {

                if (j % 2 == 0)
                {
                    cout << "* ";
                }
                else
                    cout << "  ";
                if (j == n)
                {
                    cout << endl;
                }    
            }
        }

        if (i == 2)
        {

            for (int j = 1; j <= n; j++)
            {
                if ((j - 1) % 4 == 0)
                {
                    counter2 = j;
                }

                if (j == counter2)
                {

                    cout << "* ";
                }

                else
                    cout << "  ";
                if (j == n)
                {
                    cout << endl;
                }    
            }
        }
    }

    return 0;
}