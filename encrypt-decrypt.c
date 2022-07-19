/* Kullanici tarafindan girilen metni sifreleyip cozen program. */
 
#include <stdio.h> 
#include <string.h> 


void sifrele(/*parametreler*/char sifre[], int anahtar)
{
  /* isaretsiz (unsigned) ön eki kullanıldigi taktirde,
	 veri tipi ile saklanacak degerin sifir ve sifirdan büyük olmasi saglanir.*/
  unsigned int i;
  for (i = 0; i < strlen(sifre); ++i)
  // strlen : karakter dizisini verir. 
  // ++i : degiskenin degerini bir arttirir. sonra döngü işler. 
  {
  	
    sifre[i] = sifre[i] - anahtar;
  }
}

void sifrecoz(char sifre[], int anahtar)
{
  unsigned int i;
  for (i = 0; i < strlen(sifre); ++i)
  {
    sifre[i] = sifre[i] + anahtar;
  }
}

int main()
{
	// 0xFACA unicode karakter 
  char sifre[20];
  printf("Sifrelenecek Metni Giriniz: \n ");
  scanf("%s", sifre);
  printf("Girdiginiz deger	: %s\n", sifre);
  sifrele(sifre, 0xFACA);
  printf("Sifrelenmis bicimi	: %s\n", sifre);
  sifrecoz(sifre, 0xFACA);
  printf("Sifresi cozulmus bicimi	: %s\n", sifre);
  return 0;
  
}
