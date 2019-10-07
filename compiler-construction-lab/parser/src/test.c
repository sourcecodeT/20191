#include <stdio.h>

int main()
{
    int num = 5;
    switch (num)
    {
    case 1:
    case 2:
    case 3:
    case 4:
        printf("okok");
        break;
    default:
        printf("not okok");
        break;
    }
    return 0;
}