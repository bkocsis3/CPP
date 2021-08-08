// 02_challenge.cpp by Bill Weinman [bw.org]
// updated 2020-07-12
#include <cstdio>

const char string[] = "Five ";

int main()
{
    int count = 0;

    for (count; string[count] != 0; ++count) {} //Solution to Challenge

    printf("There are %d characters. \n", count);

    return 0;
}
