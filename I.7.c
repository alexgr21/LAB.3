#include <stdio.h>

int main()
{
    int angle;
    int test = 0;

    do{
        printf("\nInput the angle value: ");
        scanf("%i", &angle);
        if(angle >= 0 && angle <= 90)
        {   
            test = 1;
            printf("\nThe value is good");
        }
        else
            printf("\nThe value not good, input another\n");
      }while(test == 0);
}
