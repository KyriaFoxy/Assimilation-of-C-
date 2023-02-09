#include <cstdio>

class ClockofTheLongNow
{
    int year;
public:
    ClockofTheLongNow()
    {
        year = 2019;
    }
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
    ClockofTheLongNow* clock_ptr = &clock;
    clock_ptr -> set_year(2022);
    printf("Address of clock: %p\n", clock_ptr);
    printf("Value of clok's year: %d\n", clock_ptr -> get_year());
    
    return 0;
}
// Output:
/*
 Address of clock: 0x16fdff1dc
 Value of clok's year: 2022
 */