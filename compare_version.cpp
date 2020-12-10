
#include <string>
#include <iostream>
#include <stdio.h> /* printf */
#include <math.h>

int compareVersion(std::string version1, std::string version2);

int main()
{

    std::cout << compareVersion("1.01", "1.001") << std::endl;

    return 0;
}

int compareVersion(std::string version1, std::string version2)
{

    int v1Len = version1.length();
    int v2Len = version2.length();
    int longest = v1Len > v2Len ? v1Len : v2Len;

    char s1, s2;
    int result = 0;
    char char1;
    char char2;

    for (int i = 0; i < longest; i++)
    {
        if(i < v1Len)
    }

    return result;
}
