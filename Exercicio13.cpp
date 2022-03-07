#include<stdio.h>
main(){
	int a=1, b=1, c, qt=3;
	printf("%i, %i",a,b);
	while(qt<=15){
	c=a+b;
	printf(", %i",c);
	a=b;
	b=c;
	qt++;
	}
}