#include <stdio.h>
#include <stdlib.h>
 
void sirayadiz(int dizi[]){  //Binary Search karisik dizimli sayilari siraya dizmek icin bu fonksiyonu kullaniyoruz.
int i,a;
int gecici;
for(a=1;a<9;a++){     //dongu icinde dongu kullanarak once ilk indexi gecici degere atiyoruz daha sonra kucukle buyugu yer degistiriyoruz.

     for(i=0;i<8;i++){
	    if(dizi[i]>dizi[i+1]){
	    gecici=dizi[i];
	    dizi[i]=dizi[i+1];
	    dizi[i+1]=gecici;	
			}	
}	
}

}
//Binary search icin olusturulan fonksiyon
int binarySearch(int dizi[],int ilk_index,int Son_index,int arananSayi){ 

while(Son_index>=ilk_index){  //indexleri karsilastirip donguye sokuyoruz
int mid= ilk_index + ((Son_index-ilk_index)/2); //ortadaki sayi ile basliyoruz aratmayi

if(dizi[mid]==arananSayi) //eger ortadaki sayi ise arananSayi cagrilir
return mid;

if(dizi[mid]<arananSayi)  // mid degeri arananSayidan kucukse ilk index 1 arttirilir
ilk_index= mid+1;

else //mid degeri arananSayidan buyukse index degeri 1 azaltilir
Son_index=mid-1;	
	
}


return -1;  //sayi dizide yoksa -1 degeri cagrilir

}


int main() {
	int dizi[]={4,8,3,84,47,76,9,24,68}; 
int i,arananSayi,index;	
	
printf("Dizinin onceki hali:4 8 3 84 47 76 9 24 68\n");

	

sirayadiz(dizi); //sayilari siraya dizme.

printf("\nDizinin binary search icin dizilmis hali:");  
	for(i=0;i<9;i++){     //dizi sirali sekilde diziliyor
	printf(" %d",dizi[i]);  
}
printf("\n\nAramak istediginiz sayiyi giriniz:");
scanf("%d",&arananSayi);

int boyut= sizeof(dizi)/sizeof(dizi[0]); //sizeof kullanimi ile boyutu hesapliyoruz

index=binarySearch(dizi,0,boyut,arananSayi); //binarySearch fonksiyonu cagrilir

if(index==-1)   //index -1 olarak cagrilirsa
printf("Sayi dizide mevcut degil");
else  //index mod seklinde tanimlanir
printf("Aradiginiz sayinin indexi:%d",index);

	return 0;
}
