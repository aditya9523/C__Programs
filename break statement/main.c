#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,i,addition;
    addition=0;
    for(i=1;i<5;i++)
    {


    printf("\nEnter Number to add \n");
    printf("Number %d ",i );
    scanf("%d",&number);
    if(number<0)
    {
        continue;
    }
    addition=addition+number;
    printf("Addition is %d",addition);
    }
    return 0;

}
