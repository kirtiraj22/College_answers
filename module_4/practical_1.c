#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n=20,i,rollno[25],marks[25];
	for(i=0;i<20;i++){
		printf("Enter roll number: ");
		scanf("%d",&rollno[i]);
		printf("Enter marks: ");
		scanf("%d",&marks[i]);
		}
	for(i=0;i<20;i++){
		printf("roll no.=%d\t",rollno[i]);
		printf("marks=%d\n",marks[i]);
		}

		return 0;
	}
