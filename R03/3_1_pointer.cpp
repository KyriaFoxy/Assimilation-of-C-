#include <cstdio>


int main(int argc, const char * argv[])
{
    int gettysburg{};
    printf("Gettysburg: %d\n", gettysburg);
    int *gettysburg_address = &gettysburg;
    printf("&gettysburg: %p\n", gettysburg_address);
    
    return 0;
}
// Output:
/*
 Gettysburg: 0
 &gettysburg: 0x16fdff1dc
 */