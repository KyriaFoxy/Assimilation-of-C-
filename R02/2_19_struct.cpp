#include <cstdio>

struct ClockofTheLongNow
{
    void add_year()
    {
        year++;
    }
    int year;
};

int main(int argc, const char * argv[])
{
    ClockofTheLongNow clock;
    clock.year = 2017;
    clock.add_year();
    printf("Year: %d\n", clock.year);
    clock.add_year();
    printf("Year now: %d\n", clock.year);
    
    return 0;
}
// Output:
/*
 Year: 2018
 Year now: 2019
 */