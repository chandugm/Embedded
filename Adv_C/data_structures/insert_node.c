#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int id;
	char name[10];
	struct student *next;
}stu;
stu * create_node()
{

	stu * N=malloc(sizeof(stu));
	if(N==NULL)
	{
		printf("Memory not allocated\n");
		exit(1);
	}
	printf("Enter ID and name of the student\n");
	scanf("%d %s",&N->id,N->name);
	N->next=NULL;
	return N;
}
stu * create_list()
{
	stu * H=NULL,* N =NULL,* L =NULL;
	char ch='y';
	while(ch == 'y')
	{
		N=create_node();
		if(H==NULL)
			H=N;
		else
			L->next=N;
		L=N;
		printf("Do you want to create node(y/n)\n");
		scanf(" %c",&ch);
	}
	return H;
}
void print_list(stu *T)
{
	while(T!=NULL)
	{
		printf("%d %s\n",T->id,T->name);
		T=T->next;
	}

}
void insert(stu * T,int pos)
{
	int cn=1;
	while(cn<pos-1 && T != NULL)
	{
		T=T->next;
		cn++;
	}
	if(T==NULL)
	{
		printf("node not found\n");
		exit(1);
	}
	stu *N=create_node();
	N->next=T->next;
	T->next=N;
}
int main()
{
	stu *H;int pos;
	H=create_list();
	print_list(H);
	printf("Enter position to insert node\n");
	scanf("%d",&pos);
	insert(H,pos);
	print_list(H);
}
