#include <stdio.h>

int gcd(int a, int b) {
	while(b!=0) {
		int temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}

long long lcm(long long a,int b) {
	return (a*b)/gcd(a,b);
}

int main() {
	long long result=1;
	for(int i=1;i<=20;i++) {
		result=lcm(result,1);

	}
	printf("%lld\n",result);
	return 0;
}

