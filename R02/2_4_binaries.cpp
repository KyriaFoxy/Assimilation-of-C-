#include <cstdio>

int main()
{
    char x = 'M';
    wchar_t y = L'Z';
    printf("Windows binaries start with %c%lc.\n", x, y);

    return 0;
}

// Output:
// Windows binaries start with MZ.
