#include <stdio.h>
#include <string.h>

struct player{
	char pname[20];
}p1;

char* play(struct player *temp_p1){
	strcpy(temp_p1->pname, "kohli");
	return temp_p1->pname;
}


int main(){
	strcpy(p1.pname, "dhoni");
	printf("%s %s", p1.pname, play(&p1));
	
	return 0;
}

