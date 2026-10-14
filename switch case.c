#include<stdio.h>
#include<stdlib.h>

int main()
{int daynumber;
printf("\n enter daynumber:");
scanf("%d",&daynumber);
switch( daynumber )
   {
     case 1:
          printf("\n monday");
          break;
     case 2:
          printf("\n tuesday"); 
          break;
     case 3:
          printf("\n wednesday");
          break;
     case 4:
          printf("\n thursday");
         break;
     case 5:
          printf("\n friday");
         break;
     case 6:
          printf("\n saturday");
         break;
     case 7:
          printf("\n sunday");
         break;
      default :
         printf("\n wrong day number");
    return 0;}
}