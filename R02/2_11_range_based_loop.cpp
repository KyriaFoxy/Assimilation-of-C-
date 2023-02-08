#include <cstddef>
#include <cstdio>

int main()
{
    unsigned long maximum = 0;
    unsigned long values[] = { 10, 50, 20, 40, 0 };
    for (unsigned long value : values)
    {
        if (value > maximum)
        {
            maximum = value;
        }
        printf("Current value = %lu\n", value);
    }
    printf("The maximum value = %lu\n", maximum);
}

// Output:
/*
Current value = 10
Current value = 50
Current value = 20
Current value = 40
Current value = 0
The maximum value = 50
*/