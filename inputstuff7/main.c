// ex1.8
#include <stdio.h>


int main(){

int nt = 0;
int c;
while((c=getchar())!=EOF){
if(c=='\n'||c==' '||c=='\t')
nt++;
}
printf("The number of tabs endlines and spaces are equal to %d\n",nt);
}
