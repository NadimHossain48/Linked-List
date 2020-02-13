#include<stdio.h>
typedef struct Node node;

struct Node
{

    int value;
    node *next;


} ;node *head =NULL;




int main()
{

    node a,b,c,d;
    print_all(head);
     head =&a;
    a.value=5;
    a.next=&b;
    b.value=6;
    b.next=&c;
    c.value=7;
    c.next=&d;
    d.value=8;
    d.next=NULL;
    //printf("%d\t%p",a.value,a.next);
    //printf("%p\t%d\t%p",&a.value,a.value,a.next);
    //printf("\n%p\t%p\t%p\n",a.value,a.next);
    //print(a);
    print(&a);
    print(&b);

    print(&c);

    print(&d);
    //print_all(head);




    return 0;
}
void print(node *x)
{
    printf("\n%p\t%d\t%p\n\n",x,x->value,x->next);
}
void print_all(node *x)
{  if(x==NULL)
{
    printf("List is NUll");
}
    while(x!=NULL)
    {
        printf("%d\t\t",x->value);

        x=x->next;
    }
}

