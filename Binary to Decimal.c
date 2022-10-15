#include<stdio.h>
int main()

{
    printf("Enter the choice\n1.Decimal to binary\n2.Binary to decimal\n");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
    {
        int a[10],n,i;

        printf("Enter the number to convert: ");
        scanf("%d",&n);
        for(i=0; n>0; i++)
        {
            a[i]=n%2;
            n=n/2;
        }
        printf("\nBinary of Given Number is=");
        for(i=i-1; i>=0; i--)
        {
            printf("%d",a[i]);
        }
        return 0;
    }
    break;

    case 2:
    {
        int n, binary_num, decimal_num = 0, base = 1, rem;
        printf (" Enter a binary number with the combination of 0s and 1s \n");
        scanf (" %d", &n);

        binary_num = n;


        while ( n > 0)
        {
            rem = n % 10;
            decimal_num = decimal_num + rem * base;
            n= n / 10;
            base = base * 2;
        }

        printf ( " The binary number is %d \t", binary_num);
        printf (" \n The decimal number is %d \t", decimal_num);

    }
    }

}
