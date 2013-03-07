#include <stdio.h>

#define READSIZE 0x1000

void countLines(FILE* f){
  char buf[0x400];//should be big enough for anybody
  int bytes=fread(buf,READSIZE,1,f);
  int lines=0;
  while(bytes){
    if(buf[bytes--]=='\n')
       lines++;
  }
  printf("The number of lines in the file is %d\n",lines);
  return;
}


int main(int argc,char** argv){
  if(argc<2)
    printf("Proper usage is %s <filename>",argv[0]);
  FILE* myfile=fopen(argv[1],"r"); 
}
