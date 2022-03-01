/*PROGRAM 8
ign, develop and implement a menu driven Program in C for the following operations on Doubly
Linked List (DLL) of Employee Data with the fields: SSN, Name, Dept, Designation, Sal, Ph.No
a) Create a DLL of N employee's data by using end insertion.
b) Display the status of DLL and count the number of nodes in it.
c) Perform Insertion and Deletion at end of DLL.
d) Perform Insertion and Deletion at Front of DLL.
e) Demonstrate how this DLL can be used as a Double Ended Queue.
f) Exit*/
#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>
#include<ctype.h>
#define MAX 30
// SSN, Name, Dept, Designation, Sal, PhNo
struct List
{
        int SSN;
        char Name[MAX];
        char Dept[MAX];
        char Designation[MAX];
        float Sal;
        char PhNo[MAX];
        struct List *prev;
        struct List *next;
};
#define MALLOC(p,s,t)\
                p=(t)malloc(s);\
        if(p==NULL){ \
                printf("Insufficient Memory\n"); \
                exit; \
        }
typedef struct List *NODE;
NODE Create (NODE, int);
NODE InsFront (NODE);
NODE InsRear (NODE);
NODE DelFront (NODE);
NODE DelRear (NODE);
void Display (NODE);
                                                                                         
void ReadData();
int ssn;                        /* employee id */
char name[MAX];                 /* employee name */
char dept[MAX];                 /* dept */
char desig[MAX];                /* designation */
float salary;                   /* salary */
char phone[MAX];                /* phone no. */
int main()
{
        int choice, done;
        NODE fi;
        int n;           /* no. of employees */
        fi= NULL;
        done = 0;
        while (!done)
        {
                printf("\n1.Create\t\n2.InsFront\t3.InsRear\t4.Delete Front\n5.Delete Rear\t6.Display\t7.Exit\n");
                printf("Enter Choice: ");
                scanf("%d", &choice);
                switch (choice)
                {
                        case 1: printf("Enter No. of Employees: ");
                                           scanf("%d", &n);
                                           fi = Create(fi, n);
                                           break;
                        case 2: ReadData();
                                           fi = InsFront(fi);
                                           break;
                        case 3: ReadData();
                                     fi = InsRear(fi);
                                           break;
                        case 4: fi = DelFront(fi);
                                         break;
                        case 5: fi = DelRear(fi);
                                           break;
                        case 6: Display(fi);
                                           break;
                                                                                               
                         case 7: done=1;
                                          break;
                         default: printf("Illegal Entry\n\n");
                                      break;
                 }
       }
     return 0;
}
void ReadData()
{
       printf("Enter Employee SSN: ");
       scanf("%d", &ssn);
       printf("Enter Employee Name: ");
       scanf("%s",name);
       printf("Enter Employee Department: ");
       scanf("%s",dept);
       printf("Enter Designation: ");
       scanf("%s",desig);
       printf("Enter Salary: ");
       scanf("%f", &salary);
       printf("Enter Phone: ");
       scanf("%s",phone);
}
NODE Create(NODE first, int n)
{
       int i;
       NODE q;
       if (first == NULL)
       {
                 for (i = 1; i <= n; i++)
                 {
                         printf("Enter Employee Data <%d>:\n", i);
                         ReadData();
                         first = InsFront(first);
                 }
                 return first;
       }
       else
        printf("List already has some student data\n");
}
                                                                                             
NODE InsFront(NODE first)
{
       NODE q;
       MALLOC(q, sizeof(struct List), NODE);
       q->SSN = ssn;
       strcpy (q->Name, name);
       strcpy(q->Dept, dept);
       strcpy(q->Designation, desig);
       q->Sal = salary;
       strcpy(q->PhNo, phone);
       q->prev = NULL;
       q->next = first;
       if(first != NULL)
                first->prev = q;
       return q;
}
NODE InsRear(NODE first)
{
       NODE q, cur;
       
       MALLOC(q, sizeof(struct List), NODE);
       q->SSN = ssn;
       strcpy (q->Name, name);
       strcpy(q->Dept, dept);
       strcpy(q->Designation, desig);
       q->Sal = salary;
       strcpy(q->PhNo, phone);
	if(first==NULL)
	{
		q->prev=NULL;
		q->next=NULL;
		return q;
	}
	cur = first;
       while(cur->next != NULL)
                cur = cur->next;
       q->next = NULL;
       cur->next = q;
       q->prev = cur;
       return first;
}
NODE DelFront(NODE first)
{    NODE cur;
       if(first == NULL)
       {
                printf("Can't delete, list is empty\n");
                return first;
       }
	if(first->next==NULL)
	{
		free(first);
		return NULL;
	}
       cur=first;
       first = first->next;
       first->prev = NULL;
       free(cur);
       return first;
}
NODE DelRear(NODE first)
{
       NODE cur = first;
       if(first == NULL)
       {
                printf("Can't delete, list is empty\n");
                return first;
       }
       if(first->next == NULL)
                return first=NULL;
       while(cur->next != NULL)
                cur = cur->next;
       cur->prev->next = NULL;
       free(cur);
       return first;
}
void Display(NODE first)
{
       int count=0;
       if(first == NULL)
                printf("\nList is Empty\n");
       else
       while (first)
         {
                printf("%d\t%s\t%s\t%s\t%f\t%s\n", first->SSN, first->Name, first->Dept,
                        first->Designation, first->Sal,first->PhNo);
                        first = first->next;
                        count++;
                }
                printf("count of nodes=%d\n",count);
}

