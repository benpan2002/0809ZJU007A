#include <stdio.h>
#include<math.h>
int JudgePrime(int num);
int main( int argc, char const *argv[]) {
	int num, first, last, bool, cnt = 1;
	printf("   4 =    2 +    2\t");
	for (num = 6; num <= 2000; num += 2) {
		for (first = 3; first <= num; first += 2) {
			bool = JudgePrime(first);
			if (bool == 0)continue;
			last = num - first;
			bool = JudgePrime(last);
			if (bool == 0)continue;
			printf("%4d = %4d + %4d\t",num,first,last);
            cnt++;
            if (cnt == 5) {
                printf("\n");
                cnt = 0;
            }
			break;
		}
	}
    printf("\n");
}
int JudgePrime(int num) {
	int i, isPrime = 1;
	for (i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) {
			isPrime = 0;
			break;
		}
	}
	return isPrime;
}