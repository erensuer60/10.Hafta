#include <stdio.h>
#include <stdlib.h>

struct student{
	char name[40];
	char surname[40];
	int number;
	int midtermGrade;
};
typedef struct student Student;

int main(){
	Student person[10];
	int i;
	
	for(i=0; i<10; i++){
		printf("name:");
		scanf("%s", person[i].name);
		
		printf("surname:");
		scanf("%s", person[i].surname);
		
		printf("number:");
		scanf("%d", &person[i].number);
		
		printf("midtermGrade:");
		scanf("%d", &person[i].midtermGrade);
		
	}
	
	
}
	

