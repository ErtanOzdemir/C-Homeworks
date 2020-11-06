#include <stdio.h>

int main(int argc, char const *argv[])
{
    float kilometers;
    float miles;

    printf("Please enter a meter for convert to miles: ");
    scanf("%f",&miles);

    kilometers = (1.609 * miles);

    printf("%f miles is equal to %f kilometers\n",miles,kilometers);


    return 0;
}
