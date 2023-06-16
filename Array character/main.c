#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[]="Aditya is very good boy";
    int indexing=0;
    while(str[indexing]!='\0')           //'\0' is null
    {
    printf("%c",str[indexing]);
    indexing++;
    }
    getch();
}
