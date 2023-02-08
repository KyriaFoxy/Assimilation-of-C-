#include <cstdio>

struct Book
{
    char name[256];
    int year;
    int pages;
    bool hardcover;
};

int main(int argc, const char * argv[])
{
    Book neuromancer;
    neuromancer.pages = 271;
    printf("Neuromancer has %d pages.\n", neuromancer.pages);
    
    return 0;
}
// Output:
/*
 Neuromancer has 271 pages.
 */
