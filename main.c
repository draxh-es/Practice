#include <stdio.h>


int main(){
char size;
printf("how long is your name:  ");
scanf("%hhd",&size);
char name[size+1];
printf("please enter your name: ");
int cop;
while((cop = getchar())!='\n');
for(int i = 0;i< size+1;i++){
if(i!=size)
name[i] = getchar();
else
name[i] = '\0';

}

printf("%s",name);




}
