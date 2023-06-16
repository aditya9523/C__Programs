#include <stdio.h>
#include <stdlib.h>

int main()
{
    int city;
    char shape;
    float s,base,l,b,h,area,r;
    do
    {
    printf("Enter your Shapes \n");
    printf("Enter \n c for circle \n r for rectangle \n s for square\n t for triangle");
    scanf("%s",&shape);

    switch(shape)
    {
    case 'c':
        {
            printf("Enter radius of circle : ");
            scanf("%f",&r);
            area=3.14*r*r;
            printf("Area of circle is : %f",area);
            break;
        }
    case 's':
        {
            printf("Enter sides of Square:");
            scanf("%f",&s);
            area=s*s;
            printf("Area of square is : %f",area);
            break;
        }
    case 'r':
        {
            printf("Enter length & breath of rectangle :");
            scanf("%f",&l,&b);
            area=l*b;
            printf("Area of Rectangle is : %f",area);
            break;
        }
    case 't':
        {
            printf("Enter base and height of triangle");
            scanf("%f",&base,&h);
            area=(base*h)/2;
            printf("Area Of triangle is :",area);
            break;
        }
    }
    printf("do you want to continue");
    scanf(" %d",&city);
}while(city==1);
    return 0;
}
