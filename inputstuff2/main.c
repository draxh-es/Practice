#include<stdio.h>


int main(){
printf("for complete your name push 1\n");
printf("please enter your name one by one:  ");
int k = getchar();


while(k!='1'){
putchar(k);
printf("\n");
while((k=getchar())=='\n');
}


return 0;


}
