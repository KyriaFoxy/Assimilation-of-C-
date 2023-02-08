#include <cstdio>

class ClockofTheLongNow
{
    int year;
public:
    void add_year()
    {
        year++;
    }
    
    bool set_year(int new_year)
    {
        if (new_year < 2019)
        {
            return false;
        }
        year = new_year;
        return true;
    }
    int get_year()
    {
        return year;
    }
};

int main(int argc, const char * argv[])
{
    ClockofTheLongNow clock;
    if(!clock.set_year(2018))
    {
        clock.set_year(2019);
    }
    clock.add_year();
    printf("year: %d\n", clock.get_year());
    
    return 0;
}
// Output:
/*
 year: 2020
 */