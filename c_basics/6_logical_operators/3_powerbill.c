/*Find the power bill for the input number of units :
0 - 200 units : 100/- min
201 - 400 units : 100 + 0.65 per unit excess of 200
401 - 600 units : 230 + 0.80 per unit excess of 400
601 and above units : 390 + 1.00 per unit excess of 600*/
#include<stdio.h>
int main(){
int units;
float cost;
printf("Enter no of units :");
scanf("%d",&units);
if(units<=200){
	cost=100;
	printf("%.2f",cost);}
else if(units>=201 && units<=400){
	cost=(100+0.65*(units-200));
	printf("%.2f",cost);
}
else if(units>=401 && units<=600){
	cost=(230+0.80*(units-400));
	printf("%.2f",cost);
}
else if(units>600){
	cost=(390+1*(units-600));
	printf("%.2f",cost);
}
return 0;
}

