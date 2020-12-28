//gcc -o mult test.c
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <tgmath.h>
#include <string.h>

int main (int argc, char **argv) {

	int factor1=0, factor2=0, answer;
	int size1=0, size2=0;
	int i=0;	
	char *s1, *s2;

	if (argc!=3) {
		printf("\nHi\n");
		printf("\nYou  have to provide two numbers.\n\n");
	}
	else {
		s1=argv[1];
		s2=argv[2];
		
		size1=strlen(s1);
		size2=strlen(s2);

		for(int j=0; j<size1;j++) {
			//printf("\ns1[%d]=%c\n",j,s1[j]);
			if(isnumber(s1[j])) {
				factor1 += ( s1[j]-'0')*pow(10,size1-j-1);
			}
			else {
				printf("\n\tBAD input for factor 1: %s\n\n",s1);	
				return EXIT_FAILURE;
			}
		}

		for(int j=0; j<size2;j++) {
			//printf("\ns2[%d]=%c\n",j,s2[j]);
			if(isnumber(s2[j])) {
				factor2 += (s2[j] -'0')*pow(10,size2-j-1);
			}
			else {
				printf("\n\tBAD input for factor 2: %s\n\n",s2);
				return EXIT_FAILURE;
			}
		}

		answer=factor1*factor2;	
		printf("\n\n%d X %d = %d\n\n",factor1, factor2, answer);

		return EXIT_SUCCESS;
	}
	return EXIT_FAILURE;
}
