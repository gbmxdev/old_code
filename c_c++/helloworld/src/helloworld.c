/*
 ============================================================================
 Name        : helloworld.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#define IN 1
#define OUT 0
int temp(int f){
	int c=0;
	//(32°F − 32) × 5/9 = 0°C
	c = (f - 32) * 5/9 ;
	return c;
}
int main() {
	/*
	int cha;
	while ((cha=getchar()) != EOF){
		if (cha=='\t')
			printf("%c", "\t");
		if (cha=='\b')
			printf("%c", "\b");
		if (cha=='\\')
			printf("%c", "\\");
	}*/
	//(32°F − 32) × 5/9 = 0°C
	/*
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while ((c=getchar()) != EOF) {
		++nc;
		printf("%c",c);
		if(c=='\n')
			++nl;
		if(c==' '||c=='\n'||c=='\t')
		{
			state = OUT;
			printf("\n");

		}
		else if (state == OUT){
			state = IN;
			++nw;
		}
	}
*/


	int error_code;
	error_code = (getchar() != EOF);
	printf("Hello World! %d\n%d",error_code,temp(80)); /* prints !!!Hello World!!! */
	return 0;
}
