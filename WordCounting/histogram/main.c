#include <stdio.h>
#define HASHTAG 34
int main(){
int c;
int counter=0;
while((c=getchar())!=EOF){
if(c=='\n'){
for(int i = 0;i<counter;i++){
putchar(HASHTAG);
}
printf("\n");
counter = 0;
continue;
}
counter++;
}
return 0;
}
