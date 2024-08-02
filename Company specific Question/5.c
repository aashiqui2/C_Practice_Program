/* for minimum charge for courier is 5 for 1-49km and 1-99kg  no additional charge and for 50 and only double of its  kilometer the additional charge is 10 same for kg 100 and double of the kilogram the additional charge is 10 find the output  */
#include <stdio.h>
int main()
{
    int km = 0, kg = 0;
    scanf("%d %d", &kg, &km);
    int fee = 5;
    int fine1 = 0, fine2 = 0;
    if (km <= 49 && kg <= 99)
    {
        printf("%d", fee);
        return 0;
    }
    if (km == 50)
    {
        fine1 = 10;
    }
    else if (km > 50)
    {
        fine1 += (km / 50) * 10;
    }
    if (kg == 100)
    {
        fine2 = 10;
    }
    else if (kg >= 100)
    {
        fine2 += (kg / 100) * 10;
    }
    printf("%d", fee + fine1 + fine2);
    return 0;
}