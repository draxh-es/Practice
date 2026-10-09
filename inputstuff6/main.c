// this code is for line countin from th pr lang c

#include <stdio.h>


int main(){

int nl = 0;
int c;
while((c=getchar())!=EOF){
if(c=='\n')
nl++;
}
printf("satır sayısı :  %d\n",nl);


}
