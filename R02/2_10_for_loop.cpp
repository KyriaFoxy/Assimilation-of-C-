#include <cstdio>
#include <cstddef>

int main()
{
    unsigned long maximum = 0;
    unsigned long values[] = {10, 50, 20, 40, 0};
    for (size_t i = 0; i < 5; i++)
    {
        if (values[i] > maximum)
        {
            maximum = values[i];
        }
        printf("value = %lu\n", values[i]);
    }
    printf("The maximum value is %lu\n", maximum);

    return 0;
}

// Output:
/*
value = 10
value = 50
value = 20
value = 40
value = 0
The maximum value is 50
*/