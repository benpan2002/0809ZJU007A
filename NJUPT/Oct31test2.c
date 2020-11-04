# include <stdio.h>
# define SIZE 10

int input(){
  int cnt = 0, x = 0;
  int point1[SIZE]={0};
  printf("Please input several points");
  for(cnt=0; cnt<SIZE; cnt++){
    scanf("%d",&x);
    point1[cnt] = x;
  }
  return point1[SIZE];
}

int queue(int point1[SIZE]){
  int i, j, tmp;
  for(i=0; i<SIZE-1; i++){
    for(j=0; j<SIZE-1-i; j++){
      if(point1[j] > point1[j+1]){
        tmp = point1[j];
        point1[j] = point1[j+1];
        point1[j+1] = tmp;
      }
    }
  }
  return point1[SIZE];
}

int cut(int point1[SIZE]){
  int point2[SIZE-2];
  int i;
  for(i=2; i<SIZE; i++){
    point2[i-1] = point1[i];
  }
  return point2[SIZE-2];
}

int average(int point2[SIZE-2]){
  int i = 0, sum = 0;
  double ave = 0;
  for(i=0; i<SIZE-2; i++){
    sum+=point2[i];
  }
  ave = sum/(SIZE-2);
  return ave;
}

int main(int argc, const int *argv[]){
  int point1[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  point1[SIZE] = queue(point1[SIZE]);
  point1[SIZE] = cut(point1[SIZE]);
  double ave = average(point1[SIZE]);
  printf("The point is %f",ave);
  return 0;
}