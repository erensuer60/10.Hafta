#include <stdio.h>
struct student{
	char name[50];
	int age;
};

struct student getInformation();

int main(){
	struct student s;
	
	s=getInformation();
	
	printf("\n displaying information\n");
	printf("name:%s", s.name);
	printf("\nroll:%d", s.age);
	
	
	return 0;
}


struct student getInformation(){
	struct student s1;
	printf("enter name:");
	scanf("%d[^\n]%*c", s1.name);
	
	printf("enter age");
	scanf("%d", &s1.age);
	
	return s1;
}
