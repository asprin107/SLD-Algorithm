#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	FILE *file;
	int i, cases;
	int x1, x2, x3, y1, y2, y3;
	int x4, y4;
	
	file = fopen("input.txt", "r");
	fscanf(file,"%d", &cases);
	for (i = 0; i < cases; i++)
	{
		fscanf(file,"%d %d", &x1, &y1);
		fscanf(file,"%d %d", &x2, &y2);
		fscanf(file,"%d %d", &x3, &y3);

		if (x1 == x2){
			x4 = x3;
		}

		else if (x1 == x3){
			x4 = x2;
		}

		else {
			x4 = x1;
		}

		if (y1 == y2){
			y4 = y3;
		}

		else if (y1 == y3){
			y4 = y2;
		}

		else {
			y4 = y1;
		}

		printf("%d %d\n", x4, y4);
	}
}