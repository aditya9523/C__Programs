#include <stdio.h>
#include <stdlib.h>

int main()
{
   char ch[100][100]={"Archit","satvik","Sajit","Adya"};
   printf("Required Array : \n");
   for(int i=0;i<4;i++)
   {
   printf("E%Tc div 2 Leaders %s\n",ch[i]);
   }
    return 0;
}
