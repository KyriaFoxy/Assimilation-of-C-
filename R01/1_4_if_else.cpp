#include <cstdio>

int main(void)
{
    int x = 0;
    if ( x > 0)
    {
        printf("Positive\n");
    }
    else if (x < 0)
    {
        printf("Negative\n");
    }
    else
    {
        printf("Zero");
    }

    return 0;
}

// Output:
// Zero