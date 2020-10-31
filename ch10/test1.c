# include<stdio.h>

//recursion algorithm

void PrintR (int N){
  if(N){
  PrintR(N-1);
  printf("%d\n",N);
  }
  return;
}

int main22(int argc, const int *argv[]){
  int N;
  scanf("%d",&N);
  PrintR(N);
  return 0;
}

//loop structure

void PrintL (int N){
  int i;
  for(i=1; i<=N; i++){
    printf("%d\n",i);
  }
  return;
}

int main(int argc, const int *argv[]){
  int N;
  scanf("%d",&N);
  PrintL(N);
  return 0;
}