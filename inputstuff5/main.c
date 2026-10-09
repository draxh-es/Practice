#include <stdio.h>


int main(){

int nc = 0;
int n;
while((n=getchar())!=EOF){
nc++;
putchar(n);

}

printf("nc is %d",nc);

}

