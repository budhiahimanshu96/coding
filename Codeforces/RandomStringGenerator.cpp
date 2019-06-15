#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

static const char alphanum[] ="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

char genRandom()
{
    return alphanum[rand() % 50];
}

int main()
{
    srand(time(0));
    string Str;
    for(unsigned int i = 0; i < 3; ++i)
    {
    Str += genRandom();

    }
    cout << Str<< endl;
    
    return 0;
}
