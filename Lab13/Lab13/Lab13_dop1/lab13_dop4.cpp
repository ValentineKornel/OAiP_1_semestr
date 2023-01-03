#include <iostream>
#include <string>
using namespace std;
void main()
{
    setlocale(LC_ALL, "ru");
    int i, j;
    int count = 0;
    const int N = 100;
    char str[N];
    cout << "Enter string: ";
    cin.getline(str, N);
    unsigned int m;
    m = strlen(str);

    for (i = 0; i < m; i++) {
        if (str[i] == ' ')
            count++;
    }
    if (count % 2 == 0) {
        for (i = m - 1; i >= 0; i--)
        {
            if (str[i] == ' ')
            {
                j = i;
                break;
            }
        }
        for (i = j - 1; i >= 0; i--)
        {
            cout << str[i];
            if (str[i] == ' ')
            {
                i--;
                while (str[i] != ' ')
                {
                    i--;
                }
            }
        }

    }
    else {
        for (i = m - 1; i >= 0; i--)
        {
            cout << str[i];
            if (str[i] == ' ')
            {
                i--;
                while (str[i] != ' ')
                {
                    i--;
                }
            }
        }
    }
}