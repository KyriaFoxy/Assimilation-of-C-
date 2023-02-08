#include <cstdio>

int main()
{
    int arr[] = {1 ,2 ,3 ,4};
    printf("The third element is %d\n", arr[2]);
    arr[2] = 100;
    printf("The third element is %d\n", arr[2]);

    return 0;
}

// Output:
/*
The third element is 3
The third element is 100
*/