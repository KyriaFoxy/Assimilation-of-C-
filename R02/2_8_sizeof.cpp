#include <cstddef>
#include <cstdio>

int main()
{
    size_t size_c = sizeof(char);
    printf("char: %zu\n", size_c);
    size_t size_s = sizeof(short);
    printf("short: %zu\n", size_s);
    size_t size_i = sizeof(int);
    printf("int: %zu\n", size_i);
    size_t size_l = sizeof(long);
    printf("long: %zu\n", size_l);
    size_t size_ll = sizeof(long long);
    printf("long long: %zu", size_ll);

    return 0;
}

// Output:
/*
char: 1
short: 2
int: 4
long: 8
long long: 8
*/