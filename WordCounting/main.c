#include <stdio.h>

#define inword 1
#define outword 0

int main(){

	int c;
	int st;
	int ct = outword;
	while(1){
	
	
	c = getchar();
	if(c==EOF)
	break;
	if(c == '\n' || c == ' ' || c=='\t'){
	
		if(st == inword)
			ct++;
		st = outword;
	}else{
	st = inword;
	
	}
	
	}

printf("words : %d",ct);
}
