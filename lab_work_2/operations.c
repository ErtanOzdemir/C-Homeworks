#include<stdio.h>

int main()
{
    
    int operations = 0;
    int value = 0;

    int multiplicationResult = 1;
    int summationResult =0;

    

    printf("Start entering the series with an operator.\n");
    printf("Operators allowed are -1(multiplication) and -2(summation).\n");
    printf("Enter -3 to stop the series.\n");
    scanf("%d",&operations);


    if (operations == -1)
    {
        printf("Enter the numbers for multiplication.\n");
        while (value!=-3 || value >= 0)
        {
            scanf("%d",&value);
            if (value == -3)
            {
                printf("result: %d\n",multiplicationResult);
                break;
            }else if (value < 0)
            {
                printf("result: %d\n",multiplicationResult);
                printf("You entered an invalid operator\n");
                break;
            }
            else
            {
                multiplicationResult = multiplicationResult * value;
            }
            
        }

        
        
    }
    
    else if (operations == -2)
    {
        printf("Enter the numbers for summation.\n");
        while (value!=-3 || value >= 0)
        {
            scanf("%d",&value);
            if (value == -3 )
            {
                printf("result: %d\n",summationResult);
                break;
            }else if (value < 0)
            {
                printf("result: %d\n",summationResult);
                printf("You entered an invalid operator\n");
                break;
            }
            
            else
            {
                summationResult = summationResult + value;
            }
            
        }
        
        
    }

    else
    {
        printf("You have to start with a valid operator.\n");
    }
    return 0;
}


