#include <stdio.h>
enum State {WORKING=0, FAILED, FREZEED};
enum State currState = 2;

enum State FindState(){
	return 0;
}

int main (){
	(FindState()== WORKING)? printf("WORKING"):  printf("NOT WORKING");
	return 0;
}
