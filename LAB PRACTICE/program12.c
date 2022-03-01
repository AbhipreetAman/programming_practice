// PROGRAM 12
// Given a file of N employee records with a set K of keys (4-digit) which uniquely determine the records in a file F. Assume that the file F is maintained in memory by a Hash Table (HT) of m memory locations with L as a set of memory addresses (2-digit) of locations in HT. Let the keys in K and addresses in L are integers. Develop a program in C that uses Hash function H:K     L as H(K)=K mod m(remainder method), and implement hashing technique to map a given key K to the address space L. Resolve the collision(if any) using linear probing.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 100
int create(int);
void linearprobe(int[], int, int);
void Display(int []);
void main()
{
	int a[MAX], num, key,i;
	int ans=1;
	
	printf("collision handling by linear probing\n");
	for(i=0;i<MAX;i++)
	 a[i]=-1;
	do
	{
		printf("enter the data\n");
		scanf("%4d", &num);
		key= create(num);
		linearprobe(a,key,num);
		printf(" do you wish to continue?(1/0)\n");
		scanf("%d", &ans);
	}
	while(ans);
	Display(a);
	
}
int create(int num)
{
	int key;
	key=num%100;
	return key;
}
void linearprobe(int a[MAX], int key, int num)
{
	int flag=0, i, count=0;
	if(a[key]==-1)
		a[key]=num;
	else
	{
		printf("collision detected!\n");
		for(i=0;i<MAX;i++)
		 if(a[i]!=-1)
		  count++;
		printf("coliision avoided successfully using LINEAR PROBING\n");
		if(count==MAX)
		{
			printf("hash table is full\n");
			Display(a);
			exit(1);
		 }
		 for(i=key+1;i<MAX;i++)
		 	if(a[i]==-1)
		 		{
		 		  a[i]=num;
		 		  flag=1;
		 		  break;
		 		}
		 for(i=0;i<key && flag==0;i++)
		 	if(a[i]==-1)
		 		{ 
		 		  a[i]=num;
		 		  flag=1;
		 		  break;
	
	 	 		}
	}
}
void Display(int a[MAX])
{
	int i, choice;
	printf("\n1.display All \t 2. Filtered Display\n");
	scanf("%d", &choice);
	if(choice==1)
	 {
	   printf("hash table is\n");
	   for(i=0;i<MAX;i++)
	    printf("\n%d\t%d",i,a[i]);
	 }
	else
	{
		printf("hash table is\n");
		for(i=0;i<MAX;i++)	
		if(a[i]!=-1)
		 {
		 	printf("\n%d\t%d\n",i,a[i]);
		 	continue;
		 }
	 }
}
