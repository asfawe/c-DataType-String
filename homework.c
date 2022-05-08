#include<stdio.h>
#include<string.h>

int main(void){
	char phone1[14];
	char phone2[14];
	strcpy(phone1, "010-0000-0000");
	strcpy(phone2, phone1);
	printf("%s\n%s", phone1, phone2);
	
	return 0;
}
