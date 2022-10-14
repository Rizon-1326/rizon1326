#include<stdio.h>
#include<stdlib.h>
struct student
{
    int roll;
    double class;
    double marks;
};
int main()
{
    struct student st[40];
    printf("Enter the number of students");
    int number_of_students;
    scanf("%d", &number_of_students);
    for(int i=0; i<number_of_students; i++)
    {
        printf("Enter the roll and classes numbers Student ->%d\n",i+1);
        scanf("%d%lf",&st[i].roll,&st[i].class);
        st[i].class=(st[i].class*100.00)/30.00;
        if(st[i].class>=90.00&&st[i].class<=100.00)
        {
            st[i].marks=5.00;
        }
        else if(st[i].class>90.00&&st[i].class<=95.00)
        {
            st[i].marks=4.50;
        }
        else if(st[i].class>=80.00&&st[i].class<90.00)
        {
            st[i].marks=4.00;
        }
        else if(st[i].class>=75.00&&st[i].class<80.00)
        {
            st[i].marks=3.50;
        }
        else if(st[i].class>=70.00&&st[i].class<75.00)
        {
            st[i].marks=3.00;
        }
        else if(st[i].class>=65.00&&st[i].class<70.00)
        {
            st[i].marks=2.50;
        }
        else if(st[i].class>=60.00&&st[i].class<65.00)
        {
            st[i].marks=2.00;
        }
        else
        {
            st[i].marks=0.00;
        }


    }
    printf("Attendence marks of the students\n\n");
    for(int i=0; i<number_of_students; i++)
    {
        printf("Roll =%d\nClass =%lf\nMarks =%lf\n",st[i].roll,st[i].class,st[i].marks);
    }

}

