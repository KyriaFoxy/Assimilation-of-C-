#include <cstdio>

enum class Race
{
    Astryda,
    Asta,
    Gazelka,
    Gazelcia,
    Kicia,
    Julian,
    Aidan,
};

int main()
{
    Race race = Race::Asta;
    switch (race)
    {
        case Race::Astryda:
        {
            printf("You work hard.");
        }
            break;
        case Race::Asta:
        {
            printf("You are very strong.");
        }
        break;
        case Race::Gazelka:
        {
            printf("You are a great leader.");
        }
            break;
        case Race::Gazelcia:
        {
            printf("My, how versatile you are!");
        }
            break;
        case Race::Kicia:
        {
            printf("You are incredibly helpful.");
        }
            break;
        case Race::Julian:
        {
            printf("Anything you want!");
        }
            break;
        case Race::Aidan:
        {
            printf("What an enigma.");
        }
            break;
        default:
        {
            printf("Error, uknown race!");
        }
        break;
    }

    return 0;
}

// Output:
// You are very strong.