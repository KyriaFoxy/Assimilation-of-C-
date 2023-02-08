#include <cstdio>

int main()
{
    double an = 6.0221409e23;
    printf("Avogadro's Number: %le, %lf, %lg\n", an, an, an);
    float hp = 9.75;
    printf("Hogwarts' Platform: %e, %f, %g", hp, hp, hp);

    return 0;
}

// Output:
/*
Avogadro's Number: 6.022141e+23, 602214090000000006225920.000000, 6.02214e+23
Hogwarts' Platform: 9.750000e+00, 9.750000, 9.7
*/