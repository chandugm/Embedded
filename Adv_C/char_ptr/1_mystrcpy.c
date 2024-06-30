/*
   1) Implement your own string copy function.
   try calling the string copy function by sending the below as input:
   1) string constant as destination and string variable as source
   2) string variable as destination and string constant as source
   3) string variable as destination and string variable as source
   4) string constant as destination and string constant as source
   note down the output and analyze the reasons.
 */
#include<stdio.h>
void mystrcpy(const char *des, const char *src)
{
	char *s=des;//storeing base address of destination
	while(*src)
	{
		*des=*src;
		des++;
		src++;
	}
	*des='\0';
	printf("%s\n",s);

}
int main()
{
	char des1[]="Give",src1[]="Thanks";
	const char *src2="Everything",*des2="Give thanks";

	//1.string constant as destination and string variable as source
	mystrcpy(des2,src1);
	//*****2.string variable as destination and string constant as source************//
	mystrcpy(des1,src2);

	//3.string variable as destination and string variable as source
	mystrcpy(des1,src1); 

	//4) string constant as destination and string constant as source
	mystrcpy(des2,src2);


}
/****************1.string constant as destination and string variable as source***************/
/*1_mystrcpy.c:16:7: error: assignment of read-only location ‘*des’
 *des=*src;
 ^
 1_mystrcpy.c:20:6: error: assignment of read-only location ‘*des’
 *des='\0';
 ^
 */
/************2.string variable as destination and string constant as source************/

//No Errors
/*************3.string variable as destination and string variable as source*******************/
//NO Errors

/*******************4) string constant as destination and string constant as source**************/
/*1_mystrcpy.c:16:7: error: assignment of read-only location ‘*des’
 *des=*src;
 ^
 1_mystrcpy.c:20:6: error: assignment of read-only location ‘*des’
 *des='\0';
 ^
 */
