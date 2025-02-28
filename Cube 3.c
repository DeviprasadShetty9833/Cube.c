#include<stdio.h>

int main()
{
int n,c,d,i,j;

printf("Enter the size: ");
scanf("%d", &n);

c=n-1;
d=0;

for(int i=1; i<=(2*n-1); i++)
    {
    for(int j=1; j<=(2*n-1); j++)
       {
       //printf("%d",d);
          if (j>(n+d) && i<=n) // For Upper cut
          {
             printf("  ");
             break;
          }
          else if (j<(n-d) && i>n) // For Lower cut
         {
           printf("  ");
         }
         else
         printf("$ ");
        }
       printf("\n");
       if(i<n)
       d=d+1;
       else
       d=d-1;
       
      }
     return 0;
}