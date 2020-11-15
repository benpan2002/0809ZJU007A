//把冒泡排序写成一个函数

#include <stdio.h>

void bubbleSort (int arr[], int len) {
    int temp;
    int i, j;
    for (i=0; i<len-1; i++) /* 外循环为排序趟数，len个数进行len-1趟 */
        for (j=0; j<len-1-i; j++) { /* 内循环为每趟比较的次数，第i趟比较len-i次 */
            if (arr[j] > arr[j+1]) { /* 相邻元素比较，若逆序则交换（升序为左大于右，降序反之） */
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
}
 
int main (void) {
    int arr[10] = {3,5,1,-7,4,9,-6,8,10,4};
    int len = 10;
    int i;
     
    bubbleSort (arr, len);
    for (i=0; i<len; i++)
        printf ("%d\t", arr[i]);
    putchar ('\n');
     
    return 0;
}