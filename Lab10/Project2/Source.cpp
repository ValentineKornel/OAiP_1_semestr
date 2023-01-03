
#include <iostream>

int main()
{
    const int n = 100;
    float a[n];
    int i, j;
    std::cout << "Input array: " << std::endl;;
    for (i = 0; i < 5; ++i) {
        std::cin >> a[i];
    }

    std::cout << "Unique number: " << std::endl;
    for (i = 0; i < 5; ++i)
    {
        for (j = i + 1; j < 5; ++j)
            if (a[i] == a[j])
                break;
        if (j == 5)
            std::cout << a[i] << ' ';
    }
    return 0;
}