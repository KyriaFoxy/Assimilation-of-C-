#include <cstdio>

union Variant
{
    char string[10];
    int integer;
    double floating_point;
};

int main(int argc, const char * argv[])
{
    Variant v;
    v.integer = 42;
    printf("The ultimate answer: %d\n", v.integer);
    v.floating_point = 2.7182818284;
    printf("Eluer's number: %f\n", v.floating_point);
    printf("A dumpster fire: %d\n", v.integer);
    
    
    return 0;
}
// Output:
/*
 The ultimate answer: 42
 Eluer's number: 2.718282
 A dumpster fire: -1961734133
 */