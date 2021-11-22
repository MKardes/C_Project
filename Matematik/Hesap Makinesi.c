#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int	secim;
	int	secim1;
	int	i;
	int	c;
	int	x;
	int a;
	int b;
	int	d;
	int	g;
	
	printf("******************************\n");
	printf("*                            *\n");
	printf("*       Hesap Makinesi       *\n");
	printf("*                            *\n");
	printf("******************************\n");
	c = 0;
	while (c <= 1)
	{
		printf("\n\nIslemler\n\n1 - Toplama\n2 - Cikarma\n3 - Carpma\n4 - Bolme\n");
		printf("5 - Girilen Denklem Koku Bulma\n6 - Karekok Bulma\n7 - Faktoryel Hesabi\n");
		printf("8 - Uslu Sayi Hesabi\n9 - Cikis");
		printf("\n\n Lutfen islem seciniz: ");
		scanf("%d",&secim);
		system("CLS");
		i = 0;
		while (i <= 1)
		{
			if (secim == 1)
			{
				printf("******************************\n");
				printf("*                            *\n");
				printf("*          Toplama           *\n");
				printf("*                            *\n");
				printf("******************************\n");
				printf("\n\n1.Sayiyi Giriniz: ");
				scanf("%d",&a);
				printf("2.Sayiyi Giriniz: ");
				scanf("%d",&b);
				a = a + b;
				printf("\nSonuc: %d\n",a);
				x = 0;
				while(x <= 1)
				{
					printf("Baska bir islem yapmak istiyorsaniz 1\'i, istemiyosaniz 2\'yi tuslayiniz: ");
					scanf("%d",&secim1);
					if (secim1 == 1)
						c = -1;
					else if (secim1 == 2)
						c = 2;
					else
					{
						printf("\nYanlis tuslama yaptiniz!\nLutfen tekrar deneyiniz...\n");
						x = -1;
					}
					i = 1;
					x+=2;
					system("CLS");
				}
			}
			else if (secim == 2)
			{
				printf("******************************\n");
				printf("*                            *\n");
				printf("*          Cikarma           *\n");
				printf("*                            *\n");
				printf("******************************\n");
				printf("\n\n1.Sayiyi Giriniz: ");
				scanf("%d",&a);
				printf("2.Sayiyi Giriniz: ");
				scanf("%d",&b);
				a = a - b;
				printf("\nSonuc: %d\n",a);
				x = 0;
				while(x <= 1)
				{
					printf("Baska bir islem yapmak istiyorsaniz 1\'i, istemiyosaniz 2\'yi tuslayiniz: ");
					scanf("%d",&secim1);
					if (secim1 == 1)
						c = -1;
					else if (secim1 == 2)
						c = 2;
					else
					{
						printf("\nYanlis tuslama yaptiniz!\nLutfen tekrar deneyiniz...\n");
						x = -1;
					}
					i = 1;
					x+=2;
					system("CLS");
				}
			}
			else if (secim == 3)
			{
				printf("******************************\n");
				printf("*                            *\n");
				printf("*           Carpma           *\n");
				printf("*                            *\n");
				printf("******************************\n");
				printf("\n\n1.Sayiyi Giriniz: ");
				scanf("%d",&a);
				printf("2.Sayiyi Giriniz: ");
				scanf("%d",&b);
				a = a * b;
				printf("\nSonuc: %d\n",a);
				x = 0;
				while(x <= 1)
				{
					printf("Baska bir islem yapmak istiyorsaniz 1\'i, istemiyosaniz 2\'yi tuslayiniz: ");
					scanf("%d",&secim1);
					if (secim1 == 1)
						c = -1;
					else if (secim1 == 2)
						c = 2;
					else
					{
						printf("\nYanlis tuslama yaptiniz!\nLutfen tekrar deneyiniz...\n");
						x = -1;
					}
					i = 1;
					x+=2;
					system("CLS");
				}
			}
			else if (secim == 4)
			{
				printf("******************************\n");
				printf("*                            *\n");
				printf("*           Bolme            *\n");
				printf("*                            *\n");
				printf("******************************\n");
				printf("\n\n1.Sayiyi Giriniz: ");
				scanf("%d",&a);
				printf("2.Sayiyi Giriniz: ");
				scanf("%d",&b);
				d = a % b;
				a = a / b;
				if(d == 0)
					printf("\nSonuc: %d\n",a);
				else
					printf("\nSonuc: %d,%d\n",a,d);
				x = 0;
				while(x <= 1)
				{
					printf("Baska bir islem yapmak istiyorsaniz 1\'i, istemiyosaniz 2\'yi tuslayiniz: ");
					scanf("%d",&secim1);
					if (secim1 == 1)
						c = -1;
					else if (secim1 == 2)
						c = 2;
					else
					{
						printf("\nYanlis tuslama yaptiniz!\nLutfen tekrar deneyiniz...\n");
						x = -1;
					}
					i = 1;
					x+=2;
					system("CLS");
				}
			}
			else if (secim == 5)
			{
				printf("******************************\n");
				printf("*                            *\n");
				printf("*     Denklem Koku Bulma     *\n");
				printf("*                            *\n");
				printf("******************************\n");
				printf("\n\n[y = ax^2 + bx + c]\na\'yi giriniz: ");
				scanf("%d",&a);
				printf("\nb\'yi giriniz: ");
				scanf("%d",&b);
				printf("\nc\'yi giriniz: ");
				scanf("%d",&d);
				printf("Denkleminiz: y = %dx^2 + %dx + %d\n",a,b,d);
				g = (b*b) - (4*a*d);
				if (g >= 0)
				{
					g = karekok(g);
					g = (- b + g) / (2 * a);
					if (g == 0)
						printf("\n\nDenklemin koku: %d\n",g);
					else
					{
						printf("\n\nDenklemin 1.koku: %d",g);
						g*=-1; 
						printf("\nDenklemin 2.koku: %d\n",g);
					}
				}
				else
					printf("\nDenkleminizin reel koku yoktur.\n");
				x = 0;
				while(x <= 1)
				{
					printf("Baska bir islem yapmak istiyorsaniz 1\'i, istemiyosaniz 2\'yi tuslayiniz: ");
					scanf("%d",&secim1);
					if (secim1 == 1)
						c = -1;
					else if (secim1 == 2)
						c = 2;
					else
					{
						printf("\nYanlis tuslama yaptiniz!\nLutfen tekrar deneyiniz...\n");
						x = -1;
					}
					i = 1;
					x+=2;
					system("CLS");
				}
			}
			else if (secim == 6)
			{
				printf("******************************\n");
				printf("*                            *\n");
				printf("*        Karekok Bulma       *\n");
				printf("*                            *\n");
				printf("******************************\n");
				printf("\n\nKarekoku bulunacak sayiyi giriniz: ");
				scanf("%d",&a);
				if (a > 0)
				{
					b = 0;
					while (b * b <= a)
					{
						b++;
						if(b * b == a)
							printf("\nSonuc: %d\n\n",b);
					}
					if ((b - 1) * (b - 1) != a)
					{
						printf("\nGirilen sayinin bir tamsayi karsiligi yok.\n");
						b = b - 1;
						c = b * b;
						printf("Bu sayidan onceki en buyuk tamkare sayi:\n%d ==> %d\n",c,b);
						b = b + 1;
						c = b * b;
						printf("Bu sayidan sonraki en kucuk tamkare sayi:\n%d ==> %d\n",c,b);
					}
				}
				else if (a == 0)
					printf("\nSonuc: 0\n\n");
				else
					printf("\nKarekokte tanimsiz sayi girilmiitir.\n\n");
				x = 0;
				while(x <= 1)
				{
					printf("Baska bir islem yapmak istiyorsaniz 1\'i, istemiyosaniz 2\'yi tuslayiniz: ");
					scanf("%d",&secim1);
					if (secim1 == 1)
						c = -1;
					else if (secim1 == 2)
						c = 2;
					else
					{
						printf("\nYanlis tuslama yaptiniz!\nLutfen tekrar deneyiniz...\n");
						x = -1;
					}
					i = 1;
					x+=2;
					system("CLS");
				}
			}
			else if (secim == 7)
			{
				printf("******************************\n");
				printf("*                            *\n");
				printf("*      Faktoryel Hesabi      *\n");
				printf("*                            *\n");
				printf("******************************\n");
				printf("\n\nSayi giriniz: ");
				scanf("%d",&a);
				b = factorial(a);
				if (b == -1)
					printf("Int tanim araligini astiniz.\n\n");
				else
					printf("\nSonuc: %d\n\n",b);
				x = 0;
				while(x <= 1)
				{
					printf("Baska bir islem yapmak istiyorsaniz 1\'i, istemiyosaniz 2\'yi tuslayiniz: ");
					scanf("%d",&secim1);
					if (secim1 == 1)
						c = -1;
					else if (secim1 == 2)
						c = 2;
					else
					{
						printf("\nYanlis tuslama yaptiniz!\nLutfen tekrar deneyiniz...\n");
						x = -1;
					}
					i = 1;
					x+=2;
					system("CLS");
				}
			}
			else if (secim == 8)
			{
				printf("******************************\n");
				printf("*                            *\n");
				printf("*     Uslu Sayi Hesabi       *\n");
				printf("*                            *\n");
				printf("******************************\n");
				printf("\n\nUslu Sayinin Altini Giriniz: ");
				scanf("%d",&a);
				printf("\nUslu Sayiyinin Ustunu Giriniz: ");
				scanf("%d",&b);
				printf("\n\nSonuc: %d\n\n",uslusayi(a,b));
				x = 0;
				while(x <= 1)
				{
					printf("Baska bir islem yapmak istiyorsaniz 1\'i, istemiyosaniz 2\'yi tuslayiniz: ");
					scanf("%d",&secim1);
					if (secim1 == 1)
						c = -1;
					else if (secim1 == 2)
						c = 2;
					else
					{
						printf("\nYanlis tuslama yaptiniz!\nLutfen tekrar deneyiniz...\n");
						x = -1;
					}
					i = 1;
					x+=2;
					system("CLS");
				}
				
			}
			else if (secim == 9)
			{
				system("CLS");
				printf ("Basariyla Cikis Yapilmistir.");
				system("COLOR 2");
			}
			else
			{
				printf("Yanlis tuslama yaptiniz!\nLutfen tekrar deneyiniz...\n\n");
				i = 1;
				c = -1;
			}
			i++;
		}
		c+=2;
	}
	system("CLS");
	printf ("Basariyla Cikis Yapilmistir.");
	system("COLOR 2");
	return 0;
}

int	uslusayi(int a, int b)
{
	if (b == 0)
		return(1);
	else if(b < 0)
		return(0);
	return(a * uslusayi(a , b - 1));
}

int	factorial(int a)
{
	if (a == 1 || a == 0)
		return(1);
	else if (a < 0)
		return(0);
	else if (a > 13);
		return (-1);
	return(a * factorial(a - 1));
}

int	karekok(int a)
{
	int b;
	int i;

	b = 0;
	while(b * b <= a)
		b++;
	return(b - 1);
}

