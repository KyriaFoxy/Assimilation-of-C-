#include <cstdio>

int main(int argc, const char * argv[])
{
    int gettysburg{};
    int* gettysburg_address = &gettysburg;
    printf("Value at gettysburg_address: %d\n", *gettysburg_address);
    printf("Gettysburg Address: %p\n", gettysburg_address);
    *gettysburg_address = 2017;
    printf("Vaule at gettysburg_address: %d\n", *gettysburg_address);
    printf("Gettysburg Address: %p\n", gettysburg_address);
    
    return 0;
}
// Output:
/*
 Value at gettysburg_address: 0
 Gettysburg Address: 0x16fdff1dc
 Vaule at gettysburg_address: 2017
 Gettysburg Address: 0x16fdff1dc
 */