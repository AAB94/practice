#include <stdio.h>
int main(){
	char *str1 = "HelloWorld";
	char *str2 = "HelloWorld";
	if(str1 == str2)
		printf("Equal\n");
	else
		printf("NotEqual\n");
	return 0;
}