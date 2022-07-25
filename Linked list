#include<stdio.h>
#include<stdlib.h>
void create();
void display();
struct node
{
        int info;
        struct node *next;
};
struct node *start=NULL;
int main(){
    int x;
    FILE *fp;
    fp=fopen("list.txt","r");
    while(!feof(fp)){
        fscanf(fp,"%d",&x);
        create(x);
    }
    fclose(fp);

    display();
}
void create(int x )
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("nOut of Memory Space:n");
                exit(0);
        }
        //freopen("list.txt","r",stdin);
        //printf("nEnter the data value for the node:t");
        temp->info=x;
        temp->next=NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                ptr=start;
                while(ptr->next!=NULL)
                {
                        ptr=ptr->next;
                }
                ptr->next=temp;
        }


}
void display()
{
        struct node *ptr;
        if(start==NULL)
        {
                printf("nList is empty:n");
                return;
        }
        else
        {
                ptr=start;
                printf("The List elements are: ");
                while(ptr!=NULL)
                {
                        printf("%d ",ptr->info );
                        ptr=ptr->next ;
                }
        }
}
