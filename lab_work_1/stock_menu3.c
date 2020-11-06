#include<stdio.h>
int main()

{
    float PriceOfpencilColored = 2.00;
    float PriceOfpencilBlack = 1.00;
    float PriceOfnoteBook = 4.00;
    float PriceOfrubber = 1.50;

    int numberOfPencils = 0;
    int numberOfNoteBook = 0;
    int numberOfRubber = 0;

    int blackOrColoredPencil= 0;

    float discount = 0;
    float total = 0;
    
    printf("-- STOCK --\n1. Pencil: Colored 2.00, Black: 1.00,\n2. Rubber: 1.50\n3. Notebook: 4.00\n");
    printf("Due to a system failure our shop accepts coupons only, your total must be at least 2.50\n");
    printf("Our pencils are either colored or black. If you're buying pencils please put 1 for colored and 0 for black\n");
    printf("You cannot buy both colored and black pencils at the same time.\n\n");

    printf("Please enter the number of items you will buy for all stock items.\n");
    printf("Enter 2 inputs for pencils -- number of pencils and type (1 for colored, 0 for black),\n");
    printf("number of rubbers and number of notebooks, a total of 4 inputs, 3 of them separated with commas.\n");
    printf("e.g. 2 1, 0, 2 for 2 colored pencils, no rubbers and 2 notebooks\n");

    scanf("%d %d, %d, %d",&numberOfPencils, &blackOrColoredPencil, &numberOfRubber, &numberOfNoteBook);


    if (blackOrColoredPencil < 0 || numberOfPencils < 0 || numberOfNoteBook < 0 || numberOfRubber < 0) 
    {
        printf("You entered an invalid # of items for at least one of the stock items.\n");
    }

    else
    {
        if (blackOrColoredPencil == 1)
        {
            total = (PriceOfpencilColored * numberOfPencils) + (PriceOfrubber * numberOfRubber) + (PriceOfnoteBook * numberOfNoteBook);
        }

        else
        {
            total = (PriceOfpencilBlack * numberOfPencils) + (PriceOfrubber * numberOfRubber) + (PriceOfnoteBook * numberOfNoteBook);
        }
        
        
        
        if (total >= 2.5 && total>=10)
        {
            discount = (total*10)/100;
            total = total - discount;
            printf("Congratulations! You have a 10%% discount for spending at least 10.0!\nYour total is: %5.3f\n",total);
        }

        else if (total >=2.5)
        {
            printf("Your total is: %5.3f\n",total);
        }

        else if (total == 0)
        {
            printf("You changed your mind? Please come back some other time!\n");
            printf("Your total is: %5.3f\n",total);
        }

        else
        {
            printf("You should buy items worth at least 2.50\n");
        }
    }
    
    return 0;
    }

