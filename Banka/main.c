#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int	i;
	int b;
	int	secim;
	int	para;
	int sifre;
	int cikis;
	int gecici;
	int eski;
	int secim1;
	int elek = 213;
	int su = 155;
	int dogaz = 396;
	int inter = 120;
	
	para = 1000;
	for(b = 3; b >= 0; b--)
	{
		printf("Sifre giriniz: ");
		scanf("%d",&sifre);
		if (sifre == 1975)
		{
			system("COLOR 2");
			printf("\nDogrulandi\n");
			b = 0;
		}
		else
		{
			printf("\nYanlis sifre girdiniz.Lutfen tekrar deneyiniz.\nKalan deneme hakkiniz %d\n\n",b);
			if(b == 0)
			{
				system("CLS");
				system("COLOR 4");
				printf("KARTINIZ BLOKE EDILDI.\nLUTFEN BANKAYLA ILETISIME GECIN!!");
				return(0);
			}
		}
	}
	
	for(i = 0; i <= 2; i++)
	{
		if(i = 1)
		{
			printf("\nMENULER\n\n1 - Bakiye Sorgulama\n2 - Para");
			printf(" Yatirma\n3 - Para Cekme\n4 - Fatura Yati");
			printf("rma\n5 - Cikis\n\n\nSeciminizi Yapiniz: ");
			scanf("%d",&secim);
			system("COLOR 7");
		}
		switch(secim)
		{
			case 1 :
				printf("\n--------------------------\n");
				printf("Guncel Bakiyeniz: %dTL",para);
				printf("\n--------------------------\n");
				for(b = 0; b <= 1; b++)
				{
					printf("Baska bir islem yapmak istiyorsaniz \"1\"i, istemiyorsaniz \"2\"yi tuslayiniz.\n");
					scanf("%d",&cikis);
					if (cikis == 1)
					{
						i = 1;
						b = 2;
					}
					else if (cikis == 2)
					{
						system("CLS");
						printf("Cikis Yapildi.Iyi gunler dileriz...!");
						i = 3;
						b = 2;
					}
					else
					{
						printf("Hatalý giris, tekrar deneyin.\n");
						b = 0;
					}
				}
			break;
			case 2 :
				printf("\n--------------------------\n");
				printf("Para Yatirma");
				printf("\n--------------------------\n");
				printf("Yatirilacak tutari giriniz: ");
				scanf("%d",&gecici);
				eski = para;
				para = para + gecici;
				printf("\nEski Bakiye: %dTL\nYatirilan Tutar: %dTL\nGuncel Bakiye: %dTL\n",eski,gecici,para);
				i = 0;
			break;
			case 3 :
				printf("\n--------------------------\n");
				printf("Para Cekme");
				printf("\n--------------------------\n");
				printf("Hesaptaki Aktif Bakiye: %dTL\n",para);
				printf("Cekilecek tutari giriniz: ");
				scanf("%d",&gecici);
				if(gecici > para)
					printf("\n!!Bakiye Yetersiz.!!\nAna Menuye Yonlendiriliyorsunuz...\n");
				else
				{
					eski = para;
					para = para - gecici;
					printf("\nEski Bakiye: %dTL\nCekilen Tutar: %dTL\nGuncel Bakiye: %dTL\n",eski,gecici,para);
				}
				i = 0;
			break;
			case 4 :
				printf("\n--------------------------\n");
				printf("Fatura Yatirma");
				printf("\n--------------------------\n");
				for(b = 0; b <= 1; b++)
				{
				printf("1 - Elektrik Faturasi: %dTL\n2 - Su Faturasi: %dTL\n",elek,su);
				printf("3 - Dogalgaz Faturasi: %dTL\n4 - Internet Faturasi: %dTL\n",dogaz,inter);
				printf("5 - Ust Menu\n");
				printf("Odemek istediginiz faturayi seciniz: ");
				scanf("%d",&secim1);
				switch(secim1)
				{
					case 1 :
						if(para >= elek)
						{
							para = para - elek;
							elek = 0;
							printf("\nFaturaniz Odenmistir.\nGuncel Bakiyeniz: %dTL\n\n",para);
						}
						else
							printf("!!Yetersiz Bakiye.!!\n");
						b = 1;
					break;
					case 2 :
						if(para >= su)
						{
							para = para - su;
							su = 0;
							printf("\nFaturaniz Odenmistir.\nGuncel Bakiyeniz: %dTL\n\n",para);
						}
						else
							printf("!!Yetersiz Bakiye.!!\n");
						b = 1;
					break;
					case 3 :
						if(para >= dogaz)
						{
							para = para - dogaz;
							dogaz = 0;
							printf("\nFaturaniz Odenmistir.\nGuncel Bakiyeniz: %dTL\n\n",para);
						}
						else
							printf("!!Yetersiz Bakiye.!!\n");
						b = 1;
					break;
					case 4 :
						if(para >= inter)
						{
							para = para - inter;
							inter = 0;
							printf("\nFaturaniz Odenmistir.\nGuncel Bakiyeniz: %dTL\n\n",para);
						}
						else
							printf("!!Yetersiz Bakiye.!!\n");
						b = 1;
					break;
					case 5 :
						b = 2;
						i = 0;
					break;
					default :
						printf("!Hatali Giris.!\n");
						b = 0;
					break;
				}
				}
			break;
			case 5 :
				system("CLS");
				printf("Cikis Yapildi.Iyi gunler dileriz...!");
				i = 3;
			break;
			default:
				printf("\n--------------------------\n");
				printf("Yanlis secim yaptiniz.Lutfen tekrar");
				printf("deneyiniz: ");
				printf("\n--------------------------\n");
			break;
		
		}
}
	return 0;
}
