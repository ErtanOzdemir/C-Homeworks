#include <stdio.h>

int numberOfEquileteral = 0;
int numberOfIsosceles = 0;
int numberOfScalene = 0;

void classify_triangles(double x, double y, double z){

    if ((x+y+z)<=12)
    {
        
        if (x == -1 && y == -1 && z==-1);
        else if (x == y && y == z)
        {
            numberOfEquileteral = numberOfEquileteral + 1;
            printf("You entered a small triangle.\n");
        }else if (x == y || y == z || x == z)
        {
            numberOfIsosceles = numberOfIsosceles + 1;
            printf("You entered a small triangle.\n");
        }else
        {
            numberOfScalene = numberOfScalene +1;
            printf("You entered a small triangle.\n");
        }
        
        
        
        
    }
    else if (x == y && y == z)
    {
        numberOfEquileteral = numberOfEquileteral + 1;
    }
    else if (x == y || y == z || x == z)
    {
        numberOfIsosceles = numberOfIsosceles + 1;

    }else
    {
        numberOfScalene = numberOfScalene +1;
    }

}

int main()
{
    static double firstSide, secondSide, thirdSide = 0;
    
    const int invalidNumber = -1;
    
    
    while (1)
    {   
       
        if (firstSide == invalidNumber && secondSide == invalidNumber && thirdSide == invalidNumber)
        {
            printf("Equilateral triangles: %d\nIsosceles triangles: %d\nScalene triangles: %d\n",numberOfEquileteral,numberOfIsosceles,numberOfScalene);
            break;
        }
        else
        {   
            printf("Enter the side length of the triangle\n");
            scanf("%lf %lf %lf", &firstSide, &secondSide, &thirdSide);
            classify_triangles(firstSide,secondSide,thirdSide);
        } 
        
    }
    
    return 0;
}
