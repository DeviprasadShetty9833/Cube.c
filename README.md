# Cube.c
Designed a code to create a 3d cube 
<br> Author - Deviprasad Shetty 
<br> Before running the code in a compiler, make sure to edit following things in code.
<br> 1) For Upper cut, give double space inside printf(" ") 
<br> 2) put * in i<=(2n-1) & j<=(2n-1) <br>

<br> #include<stdio.h>

<br> int main()
<br> {
<br>   int n,c,d,i,j;

<br>   printf("Enter the size: ");
<br>   scanf("%d", &n);

<br>   c=n-1;
<br>   d=0;

<br>   for(int i=1; i<=(2*n-1); i++)
<br>     {
<br>      for(int j=1; j<=(2*n-1); j++)
<br>        {
<br>         if (j>(n+d) && i<=n) // For Upper cut
<br>           {
<br>             printf(" ");
<br>             break;
<br>           }
<br>         else if (j<(n-d) && i>n) // For Lower cut
<br>           printf("   ");
<br>         else
<br>           printf("$ ");
<br>        }
<br>           printf("\n");
<br>         if(i<n)
<br>           d=d+1;
<br>         else
<br>           d=d-1;    
<br>      }
<br>   return 0;
<br> }

![image alt](https://github.com/DeviprasadShetty9833/Cube.c/blob/e28bf9f0e76e3471546a3c87d8c7b3f85e90ec6b/Screenshot%20(107).png)
