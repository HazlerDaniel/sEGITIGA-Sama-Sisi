#include <stdio.h>
#include<conio.h>
#include<stdlib.h>

main()
{
	double a,b,c;
	
	printf("menentukan segitiga sama sisi atau bukan\n");
	printf("===========================================\n\n");
	
	printf("masukan sisi a:");
	scanf("%lf",&a); fflush(stdin);
	
	printf("masukan panjang sisi b :");
	scanf("%lf",&b); fflush(stdin);
	
	printf("masukan sisi c :");
	scanf("%lf",&c); fflush(stdin);
	
	printf("\n==================================================================\n\n");
	if(a&&b==c)
	
	printf("segitiga sama sisi\n");
	else
	printf("bukan segitiga sama sisi");
	
	system("pause");
}
