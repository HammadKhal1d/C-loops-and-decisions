# include <stdio.h>


int isPrime(int k){
	for ( int n = 2; n < k; n++ ){
		if ( k % n == 0 ){
			return 0;
		}
	}
	return 1 && k != 1;
}

int main(){
	int N;
	printf("Generate prime numbers upto : ");
	scanf("%d", &N);
	
	for( int i = 1; i <= N; i++ ){
		if ( isPrime(i) ){
			printf("%d, ", i);
		}
	}
	
	return 0;
}
