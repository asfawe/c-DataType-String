#include<stdio.h>
#include<string.h>

int main(void){
	char phone1[14];
	char phone2[14];
	int i;
	strcpy(phone1, "010-0000-0000");
	for(i=0; i < 15;i++)
	{
		phone2[i] = phone1[i];
	}
	printf("%s\n%s", phone1, phone2);
	
	return 0;
}
