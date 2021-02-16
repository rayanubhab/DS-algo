//Strings
#include<stdio.h>
#include<math.h>
int mystrcmp(char a[],char b[])
{int c;
if(strlen(a)!=strlen(b))
return 0;
else
{
   for(c=0;c<strlen(a);c++)
   {
       if(a[c]!=b[c])
        return 0;
       else
        return 1;
   }
}

}
void main()
{
char a[50],b[50];
printf("Enter two strings \n");
gets(a);
gets(b);
if(mystrcmp(a,b))
{
    printf("Identical \n");
}
else
{
    printf("Not identical \n");
}
}
