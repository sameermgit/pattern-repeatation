#include<stdio.h>
#include<string.h>
int main()
{
   char string[100],pattern[20];   //declaration of string and word
   int i,j,strleng,patternleng,temp,count=0,check,Flag=0;//decalration of strlength,pattern length 
   gets(string);//input of string
 
   gets(pattern);//input of pattern
   strleng=strlen(string);
   patternleng=strlen(pattern);
   for(i=0; i<strleng; i++)         
   {
      temp=i;
      for(j=0;j<patternleng;j++)
      {
         if(string[i]==pattern[j])
            i++;
      }
      check=i-temp;
      if(check==patternleng)
         count++;
   }
   for(i=0;string[i]!='\0'; i++)
{
if(string[i]==pattern[0])
{
Flag=1;
for(j=0;pattern[j]!='\0';j++)
{
if(string[i+j]!=pattern[j])
{
Flag=0;
break;
}
}
}
if(Flag==1)
{
break;
}
}
if(Flag==0)
  {
  printf("\n Sorry!! We haven't found the pattern '%s' ", pattern);
}
else
{
printf("\n The '%s' at position %d ", pattern, i + 1);//printing the position of pattern
}
printf("\nOccurrence = %d",count);//the times of occurence were printed
   return 0;
}


