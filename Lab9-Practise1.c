#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
	printf(" Nur Dinie Balqis Binti Abdul Yazid \n BI19110029 \n");
	printf(" Lab 9 - Exercise 1 \n\n");
	
	int n[5] = {4,3,8,2,3};
    int i, j;
    bool full[5] = {false,false,false,false,false};
    int* arr;
    int dataSize[5];
    arr = (int*) calloc(3, sizeof(int));

    printf(" Initial space allocation : ");
    for(i = 0; i < 5; i++)
    {
       arr = realloc(arr, 3* sizeof(int));
       printf("\n Hole [%d] :\t", i);

       for(j = 0; j < n[i]; j++)
       {
          printf("%d \t", arr[j]);
       }
    }

   free(arr);
   printf("\n");

   for(i = 0; i < 5; i++)
   {
      printf("\n Enter data block size : ");
      scanf("%d", &dataSize[i]);
      printf(" Allocated hole %d\t\n", i);
   }

   printf("\n\n All holes occupied?\n");
   for(i = 0; i < 5; i++)
   {
      if(n[i] >= dataSize[i] && full[i] == false)
      {
         if(n[i] > dataSize[i] && full[i+1] == false && i != 4)
         {
            n[i+1] += (n[i] - dataSize[i]);
         }

         if(i != 4 && full[i+1] == false)
         {
          n[i] = dataSize[i];
          full[i] = true;
          printf(" True\t");
         }

         else
         {
            full[i] = true;
            printf(" True\t");
         }
      }
   }

      printf("\n\n Final space allocation:\n");
      for(i = 0; i < 5; i++)
      {
         printf(" Hole [%d] :\t", i);

         for(j = 0; j < n[i]; j++)
         {
            printf("%d \t", arr[j]);
         }
         printf("\n");
      }

   return 0;
}
