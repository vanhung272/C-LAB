#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void input(int n)
{
	printf("Input string in numeric format:");
	scanf("%d",&n);
}

void convert(int n){
	if(n==1) printf("one");
	else if(n==2) printf("two");
	else if(n==3) printf("three");
	else if(n==4) printf("four");
	else if(n==5) printf("five");
	else if(n==6) printf("six");
	else if(n==7) printf("seven");
	else if(n==8) printf("eight");
	else if(n==9) printf("nine");
	else if(n==10) printf("ten");
	else if(n==11)	printf("eleven");
	else if(n==12) printf("twelve");
	else if(n==13) printf("thirteen");
	else if(n==14) printf("fourteen");
	else if(n==15) printf("fifteen");
	else if(n==16) printf("sixteen");
	else if(n==17) printf("seventeen");
	else if(n==18) printf("eighteen");
	else if(n==19) printf("nineteen");
	else if(n>=20&&n<100){
		int b; int c;// khai bao hang chuc, hang don vi
		a=n/10;
		b=n%10;
		switch(a){
			case 2: printf("twenty"); break;
			case 3: printf("thirty"); break;
			case 4: printf("forty"); break;
			case 5: printf("fifty"); break;
			case 6: printf("sixty"); break;
			case 7: printf("seventy"); break;
			case 8: printf("eighty"); break;
			case 9: printf("ninety"); break;
		}
		switch(b){
			case 0: printf(""); break;
			case 1: printf("-one"); break;
			case 2: printf("-two"); break;
			case 3: printf("-three"); break;
			case 4: printf("-four"); break;
			case 5: printf("-five"); break;
			case 6: printf("-six"); break;
			case 7: printf("-seven"); break;
			case 8: printf("-eight"); break;
			case 9: printf("-nine"); break;
		}
	}
	else if(n>=100&&n<1000)
	{
		int a, b, c; // khai bao hang tram,chuc,don vi
		a=n/100; b=n%100/10; c=n%100%10;
		switch(a){
			case 1: printf("one hundred "); break;
			case 2: printf("two hundred "); break;
			case 3: printf("three hundred "); break;
			case 4: printf("four hundred "); break;
			case 5: printf("five hundred "); break;
			case 6: printf("six hundred "); break;
			case 7: printf("seven hundred "); break;
			case 8: printf("eight hundred "); break;
			case 9: printf("nine hundred "); break;
		}
		switch(b){
			case 0: printf(" and "); break;
			case 2: printf("twenty"); break;
			case 3: printf("thirty"); break;
			case 4: printf("forty"); break;
			case 5: printf("fifty"); break;
			case 6: printf("sixty"); break;
			case 7: printf("seventy"); break;
			case 8: printf("eighty"); break;
			case 9: printf("ninety"); break;
		}
		switch(c){
			case 0: printf(""); break;
			case 1: printf("-one"); break;
			case 2: printf("-two"); break;
			case 3: printf("-three"); break;
			case 4: printf("-four"); break;
			case 5: printf("-five"); break;
			case 6: printf("-six"); break;
			case 7: printf("-seven"); break;
			case 8: printf("-eight"); break;
			case 9: printf("-nine"); break;
		}
	}
	
}

int main(){
	int n;
	input(n);
	printf("The converted string: ");
	convert(n);
	return 0;
}
