#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int nr;
    int index = 0;

    printf("Gaseste numarul intre 0 si 100.\n");
    scanf("%d",&nr);

    if((nr<0) || (nr>100))
    {
        printf("Numar invalid.\n");
    }
    else
    {
      while(nr!=45)
      {
          if((nr>0) && (nr<100))
          {
              printf("Nu ati ghicit numarul. Incercati iar!\n");
          printf("Gaseste numarul intre 0 si 100\n");
            scanf("%d",&nr);
          }
      else
      {
         printf("Numar invalid.\n");
          printf("Gaseste numarul intre 0 si 100\n");
        scanf("%d",&nr);
      }

      }
        printf("Corect!");
    }


