/*
   15)write a code in c to receive an arrayof diffrent integer values and produce another array list of only the duplicated values in the original array,if a duplicate value is found more than once ,the list shall only show value,order is not important
   eg., array1 : {1,1,2,3,3,4,5,3,4,1};
array2 : {1,3,4}
 */
#include <stdio.h>

void findDuplicates(int arr[], int size);

int main() {
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Enter size greater than zero\n");
        return 0;
    }

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }   
for(int i=0;i<size;i++)
printf("%d ",arr[i]);

    findDuplicates(arr, size);

    return 0;
}
void findDuplicates(int arr[], int size) 
{
int k=size;	
int dup[k];
	printf("Duplicate values: ");
	k=0;
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[i] == arr[j]) {
//				 printf("%d ", arr[i]);
				dup[k]=arr[i];
				k++;
				break;
			}
		}
	}
	for (int i=0;i<size/2;i++)
	{
		printf("%d ",dup[i]);
	}
	printf("\n");
}

