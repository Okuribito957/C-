#include<stdio.h>
#include"hotel.h"
int main()
{
	int days;
	double hotel_rate;
	int code;
	while ((code = menu()) != QUIT)
	{
		switch (code)
		{
		case 1:
			hotel_rate = HOTEL1;
			break;
		case 2:
			hotel_rate = HOTEL2;
			break;
		case 3:
			hotel_rate = HOTEL3;
			break;
		case 4:
			hotel_rate = HOTEL4;
			break;
		}
		days = getdays();
		showprice(hotel_rate, days);
	}
	printf("ллʹ�ã�\n");
	return 0;
}