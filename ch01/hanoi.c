# include <stdio.h>

int k;

int send(char number,char from,char to){

  printf("%d %c %c\t",number,from,to);
  if(++k%7 == 0){
    printf("\n");
  }
}

int movetow(char height,char from,char to,char using){
 
  if(height > 2){
    movetow(height-1,from,using,to);
    send(height,from,to);
    movetow(height-1,using,to,from);
  }else{
    send(1,from,using);
    send(2,from,to);
    send(1,using,to);
  }
}



int main(int argc, char *argv[]){
  int total = 4;
  // total = atoi (argv[1]);
  printf("disk_numberfrom_rodto_rod:\n");
  movetow(total,'A','C','B');
  printf("\ntimes=%d\n",k);
  // printf("%d",argc);
}
