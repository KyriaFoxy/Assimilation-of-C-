#include <cstdio>

int main()
{
    bool t = true;
    bool f = false;
    printf("!true: %d\n", !t);
    printf("true && false: %d\n", t && f);
    printf("true && !false: %d\n", t && !f);
    printf("true || false: %d\n", t || f);
    printf("false || false: %d\n", f || f);

    return 0;
}

// Output:
/*
!true: 0
true && false: 0
true && !false: 1
true || false: 1
false || false: 0
*/