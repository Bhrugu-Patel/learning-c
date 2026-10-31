#include<stdio.h>
#include<string.h>
   void main()
   {
    int w1[26]={0},w2[26]={0},i,j,k,flag=0;
    char s1[20],s2[20];
    printf("Enter the first string:-");
    scanf("%s",s1);
    printf("Enter the second string:-");
    scanf("%s",s2);
    j=strlen(s1);
    k=strlen(s2);
    if(j!=k)
    {
        printf("Not Anagrams!!!");
    }
    for(i=0;i<j;i++)
    {
    if(s1[i]<97)
    {
        s1[i]=s1[i]+32;
    }
    if(s2[i]<97)
    {
        s2[i]=s2[i]+32;
    }
    }
    for(i=0;i<j;i++)
    {   
        w1[s1[i]-97]++;
        w2[s2[i]-97]++;
    }
    for(i=0;i<26;i++)
    {
        if(w1[i]!=w2[i])
        {
            flag++;
        }
    }
    if(flag==0)
    {
        printf("The strings are anagrams!!!");
    }
    else
    {
      printf("Not Anagrams!!!");  
    }
   }