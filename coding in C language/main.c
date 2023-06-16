#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{

   int num=0;
   int i;
for (i=0;i<=2;i++)
{
   printf("Choose The Door You Want TO Enter : ");

   scanf("%d", &num);

if(num==1){

    printf("You Reached Heaven full Of Fruits\n");
}
if(num==2){

    printf("YOu Were Bitten by Snake\n");

}
if(num==3)
{
    printf("you were killed by lion");
}


}

    return 0 ;

}
