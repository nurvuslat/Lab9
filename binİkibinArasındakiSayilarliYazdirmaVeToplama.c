//1000-2000 aras�ndaki �ift say�lar� ve toplamlar�n� ekrana yazd�ran program

#include <stdio.h>

main()
{
	int sayi = 1000, toplam = 0;
	
		while (sayi<2000)
		{
			sayi+=2;
			printf("%d\n", sayi);
			toplam = sayi*(sayi+1);
		}
			printf("Toplam: %d\n", toplam);	
			
}
