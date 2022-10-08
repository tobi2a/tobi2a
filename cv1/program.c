#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LINESIZE 100

struct Pizza {
	float prize;
	char name[LINESIZE];
};

int read_pizza(struct Pizza* item){
	return 0;
}

int search_string(const char* heap,const char* needle){
	return 0;	
}

char hacker_script(char c){
	char numbers[] = "0123456789";
	char letters[] = "oizeasbtbq";
	for (int i = 0; i <10;i++){
		if(c == numbers[i]){
			return letters[i];
		}
	}
	c=tolower(c);
	return c;
}

int main(){
	
    
    
	return 0;
}