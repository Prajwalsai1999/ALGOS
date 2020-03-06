#include<stdio.h>
int main()
{
   
   int i, j, count, temp, n[30];

   printf("Enter how many numbers u want : ");
   scanf("%d",&count);

   printf("Enter %d elements: ", count);
   
   for(i=0;i<count;i++)
      scanf("%d",&n[i]);
 
  
   for(i=0;i<count;i++){
      for(j=i+1;j<count;j++){
         if(n[i]>n[j]){
            temp=n[i];
            n[i]=n[j];
            n[j]=temp;
         }
      }
   }

   printf("Sorted elements are: ");
   for(i=0;i<count;i++)
      printf(" %d",n[i]);

   return 0;
}
