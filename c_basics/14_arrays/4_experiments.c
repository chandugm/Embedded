/*
4) Try experimenting with the below array syntaxes and see the results,check their sizes, try to also read values for elements and print them:</br>
int arr[5] = {};
int arr[10] = {2.4,5.6,7.3};
int arr[3] = {1,2,3,4,5};
int arr[0] = {};
int arr[0] = {1,2,3,4,5};
int arr[] = {};
int arr[‘a’];
*/
# include <stdio.h>
int main()
{
//	int arr[5] = {};
//	printf("%lu\n",sizeof(arr));		//size is 20

//	int arr[10] = {2.4,5.6,7.3};
//	printf("%lu\n",sizeof(arr));		//size is 40

//	int arr[3] = {1,2,3,4,5};
//	printf("%lu\n",sizeof(arr));            //size is 12 and warning message displayed

//	int arr[0] = {};	
//	printf("%lu\n",sizeof(arr));            //size is 0

//	int arr[0] = {1,2,3,4,5};
//	printf("%lu\n",sizeof(arr));            //size is 0 
						//4.syntaxes.c:29:16: warning: excess elements in array initializer
//	int arr[] = {};
//	printf("%lu\n",sizeof(arr));            //size is 0 

	int arr[‘a’];
	printf("%lu\n",sizeof(arr));            //size is 0 

/*
error
4.syntaxes.c: In function ‘main’:
4.syntaxes.c:35:10: error: stray ‘\342’ in program
  int arr[���a’];
          ^
4.syntaxes.c:35:11: error: stray ‘\200’ in program
  int arr[���a’];
           ^
4.syntaxes.c:35:12: error: stray ‘\230’ in program
  int arr[���a’];
            ^
4.syntaxes.c:35:14: error: stray ‘\342’ in program
  int arr[‘a���];
              ^
4.syntaxes.c:35:15: error: stray ‘\200’ in program
  int arr[‘a���];
               ^
4.syntaxes.c:35:16: error: stray ‘\231’ in program
  int arr[‘a���];
                ^
4.syntaxes.c:35:13: error: ‘a’ undeclared (first use in this function)
  int arr[‘a’];
             ^
4.syntaxes.c:35:13: note: each undeclared identifier is reported only once for each function it appears in
*/

	return 0;
}
