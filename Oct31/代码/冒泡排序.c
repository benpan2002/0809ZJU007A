#include <stdio.h>
int main(){
    int nums[10] = {4, 5, 2, 10, 7, 1, 8, 3, 6, 9};
    int i, j, temp;

    //算法 进行n-1轮比较
    for(i=0; i<10-1; i++){
        //每轮比较前n-1-i个,也就是说,排好序的最后i个不用比较
        for(j=0; j<10-1-i; j++){
            if(nums[j] > nums[j+1]){
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
   
    //输出排序后的数组
    for(i=0; i<10; i++){
        printf("%d ", nums[i]);
    }
    printf("\n");
   
    return 0;
}
