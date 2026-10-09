//ex 1.9
#include <stdio.h>
#include <stdlib.h>

void hafiza_guncelle(char** m,int n){
*m = realloc(*m,(20*(n))*sizeof(char));

}


int main(){
char* message = calloc(20,sizeof(char));
int r=1;
int c;
int t=-1;
for(int i=0;(c=getchar())!=EOF;i++){

if((i+2)>=r*20){
r++;
hafiza_guncelle(&message,r);

}

message[i]=c;

t= i+1;
}

for(int i = 0;i < t;i++){

printf("%c",message[i]);

}
free(message);
}
