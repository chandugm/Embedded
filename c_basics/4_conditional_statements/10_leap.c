/* check if a given year is a leap year or not.*/
#include<stdio.h>
int main(){
int a;
scanf("%d",&a);
if(a%400==0){
printf("leap year");
}
else if(a%4==0){
	if(a%100!=0){
	 	printf("leap year");
	}	
        else{
          printf("not leap year");
           }
}
else {
printf("not a leap year");
}
return 0;
}

