#include <stdio.h>
#define VOWELS 26
#define HASHTAG 35
void sifirla(int* ref,int size){
for(int i= 0;i<size;i++){
*(ref+i)=0;
}
}
void yazHist(int* ref,int size){
for(int i =0;i<size;i++){
if(ref[i]!=0){
printf("%c : ",i+'a');
for(int j=0;j<ref[i];j++)
        putchar(HASHTAG);
putchar('\n');
}
}
}
int main(){ 
int tampon[VOWELS];
int c;
sifirla(tampon,VOWELS);
while((c=getchar())!=EOF){
if('a'<=c&&c<='z')
tampon[c-'a']++;
else
printf("there is undefined things in string");
}
yazHist(tampon,VOWELS);
}
