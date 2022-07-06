#include <stdio.h>

/*
 1 1 1 0 
 0 0 1 0	Yandaki Algoritma 1 Takibi Yapmaktadýr.
 0 0 1 0	Saða Giderse Ekrana 1 Asagi Giderse Ekrana 2 Yazar
 0 0 0 1
*/
void function(int satir,int sutun,int dizi[satir][sutun]){
	
	int i=0,j=0; //Algoritma Takibi Ýçin Deðiþkenler
	int counter1=0;//Ne kadar saga gidildigini sayar
	int counter2=0;//Ne kadar asagi gidildigini sayar			    		
		while(counter2!=satir-1 || counter1!=sutun-1){//Dongu Bitirme Sartimiz.		 
		 
		  	if(dizi[i+1][j]>dizi[i][j+1]){//Hangi Yone Gitmeye Karar Verecek Algoritma
		 	printf(" 2 ");
		    i++;
	     	counter2++;
			}
				
			else if(dizi[i+1][j]<dizi[i][j+1]){
			printf(" 1 ");
				j++;
				counter1++;
			}
			else{	
			printf("***UYARI:Hatali Matris-404");
				break;
			}
		}
	}
	
int main(void){
	printf("\t*Matriste Gezinti* \n\n");//Baslik
	int k,l,N,M;
	printf(" Satir Sayisini Giriniz: ");
	scanf("%d",&N);
	printf(" Sutun Sayisini Giriniz: ");
	scanf("%d",&M);
	int dizi2[N][M];
		for(k=0;k<N;k++){//Dizi Elemanlarini Kullanicidan Istiyoruz.
			for(l=0;l<M;l++){
				printf(" Dizinizin %d. Satir %d. Sutunundaki Elemanini Giriniz: ",k+1,l+1);
				scanf("%d",&dizi2[k][l]);
			}
		}
			printf("\n Diziniz Su Sekildedir\n\n");
			for(k=0;k<N;k++){//Dizimizi Ekrana Yazdiriyoruz.
				for(l=0;l<M;l++){
			printf(" %d ",dizi2[k][l]);
				}
		printf(" \n");
			}		
		printf("\n Yukaridaki Dizinin Sifresi Su Sekildedir-->");
		function(N,M,dizi2);
		
	return 0;
}	

