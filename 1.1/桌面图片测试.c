#include<iostream>
#include<cmath>
#include<cstdlib>

#define DIM 2160
#define DIM 1080
#define _sq(x) ((x)*(x))
#define _cb(x) abs((x)*(x)*(x))
#define _cr(x) (unsigned char)(pow((x),1.0/3.0))

unsigned char RD(int, int);
unsigned char GR(int, int);
unsigned char BL(int, int);

void pixel_write(int, int);
FILE *fp;

int main(int argc, char **argv)
{
	fp = fopen("WallpaperForOnePlus5T.ppm", "wb");
	fprintf(fp, "P6\n%d %d\n255\n", DIM, DIM);
	for (int j = 0; j < DIM; j++)
		for (int i = 0; j < DIM; i++)
			pixel_write(i, j);
	fclose(fp);

	return 0;
}