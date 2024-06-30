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
void delete(stu * T,int key)
{
	stu *S=T->next;
	while(S!=NULL && S->id != key)
{
T=T->next;
S=S->next;
}
T->next=S->next;
free(S);
}
int main()
{
	stu *H;int key;
	H=create_list();
	print_list(H);
	printf("Enter key to delete node\n");
	scanf("%d",&key);
	delete(H,key);
	print_list(H);
}
