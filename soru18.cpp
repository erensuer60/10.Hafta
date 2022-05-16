#include <stdio.h>
struct student{
	char name[50];
	int age;
};

void display(struct student s);

int main(){
	struct student s1;
	
	printf("enter name");
	scanf("%d[^\n]%*c", s1.name);
	
	printf("enter age");
	scanf("%d", &s1.age);
	
	display(s1);
	
	return 0;
}

void display(struct student s){
	printf("\n display information \n");
	printf("name:%s", s.name);
	printf("\n age:%d", s.age);
}
