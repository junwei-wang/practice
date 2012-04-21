/*
ID:wakemec1
LANG:C
TASK:ride
*/
#include <stdlib.h>
#include <stdio.h>

#define MAXLINE 6

main()
{
		FILE *fin = fopen("ride.in", "r");
		FILE *fout = fopen("ride.out", "w");
		char comet[MAXLINE], group[MAXLINE];
		int i = MAXLINE + 1, j = MAXLINE;
		int comet_res = 1, group_res = 1;

		while (i--) {
				comet[i] = '\0'; 
				group[i] = '\0'; 
		}

		char tmpc;
		int tmpi = 0;
		while ( (tmpc = fgetc(fin)) != '\n' ) {
				comet[tmpi++] = tmpc; 
		} 
		tmpi = 0;
		while ( (tmpc = fgetc(fin)) != EOF && tmpc != '\n' ) {
				
				group[tmpi++] = tmpc; 
		} 

		while (j--) {
				if ( comet[j] != '\0' ) {
					comet_res *= comet[j] - 64;
					if (comet_res >= 47 )
							comet_res %= 47;
				}
				if ( group[j] != '\0' ) {
					group_res *= group[j] - 64;
					if (group_res >= 47 )
							group_res %= 47;
				}
		}

		if ( comet_res == group_res ) {
				fprintf(fout, "%s\n", "GO");
		} else {
				fprintf(fout, "%s\n", "STAY");
		}
		exit(0);
}
