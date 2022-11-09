#include<stdio.h>
#include<string.h>
int cmpstr(char s1[10], char s2[10])
{
    int len=0,i=0,j=0;
    int len1=0;
    while(s1[i]!='\0')
    {
        len++;
        i++;
    }
    while(s2[j]!='\0')
    {
        len1++;
        j++;
    }
    int bigger;
    if (len<len1)
    {
        bigger = len1;
    }
    else if (len > len1)
    {
        bigger = len;
    }
    else
    {
        bigger = len;
    }

    for (i = 0; i < bigger; i++)
    {
        if (s1[i] == s2[i])
        {
        }

        else
        {
            return (s1[i] - s2[i]);
        }
    }

    return (0);
}
int main()
{
    char arr1[10];
    char arr2[10];
    gets(arr1);
    gets(arr2);
    int result=cmpstr(arr1, arr2);
    if(result==0)
        printf("0");
    else if(result<0)
        printf("-1");
    else if(result>0)
        printf("1");

    return 0;
}


