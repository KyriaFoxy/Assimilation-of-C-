#include <cstdio>

class Taxonomist
{
public:
    Taxonomist()
    {
        printf("(No argument)\n");
    }
    Taxonomist(char x)
    {
        printf("Char: %c\n", x);
    }
    Taxonomist(int x)
    {
        printf("Int: %d\n", x);
    }
    Taxonomist(float x)
    {
        printf("float: %f\n", x);
    }
};


int main(int argc, const char * argv[])
{
    Taxonomist t1;
    Taxonomist t2{'c'};
    Taxonomist t3{65537};
    Taxonomist t4{6.02e23f};
    Taxonomist t5('g');
    Taxonomist t6 = {'1'};
    Taxonomist t7{};
    Taxonomist t8();
    
    
    return 0;
}
// Output:
/*
 (No argument)
 Char: c
 Int: 65537
 float: 602000017271895229464576.000000
 Char: g
 Char: 1
 (No argument)
 */