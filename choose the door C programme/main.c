#include <stdio.h>
#include <stdlib.h>

int main()
{
    int door;
    int i;
    for (i=0;i<=2;i++)
{
    printf("\n Choose the door you want to Enter : ");
    scanf("%d",&door);
    switch(door)
    {
        case 1 : printf("          You are eaten by Tiger"); break;
        case 2 : printf("          You Reached Heaven Full Of Fruits"); break;
        case 3 : printf("          You Were bitten by snake"); break;
    }
}
    return 0;

}
