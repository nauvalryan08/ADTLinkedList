#include "linked.h"
#include "linked.c"

int main() {
	LinkedList L;
    initList(&L);
	
	printf("masukan bilangan 7 sebagai elemen pertama {insert first}\n");
	insertFirst(&L, 7);
	printf("elemen list = ");
	printList(L);
	
	printf("\nmasukan bilangan 11 sebagai elemen kedua {insert last}\n");
	insertLast(&L, 11);
	printf("elemen list = ");
	printList(L);
	
	printf("\nmasukan bilangan 9 diantara bilangan 7 dan 11 {insert after}\n");
	insertAfter(&L, 9, 2);
	printf("elemen list = ");
	printList(L);
	
	printf("\nmasukan bilangan 5 di awal list {insert first}\n");
	insertFirst(&L, 5);
	printf("elemen list = ");
	printList(L);
	
	printf("\nmasukan bilangan 13 di akhir list {insert last}\n");
	insertLast(&L, 13);
	printf("elemen list = ");
	printList(L);
	
	printf("\nhapus elemen terakhir (bilangan 13) pada list {delete last}\n");
	deleteLast(&L);
	printf("elemen list = ");
	printList(L);
	
	printf("\nhapus bilangan 7 pada list\n");
	deleteBetween(&L, 2);
	printf("elemen list = ");
	printList(L);
	
	printf("\nhapus elemen pertama (bilangan 5) pada list {delete first}\n");
	deleteFirst(&L);
	printf("elemen list = ");
	printList(L);
	
	printf("\nhapus semua elemen list deret bilangan ganjil\n");
	deleteFirst(&L);
	deleteFirst(&L);
	printf("elemen list = ");
	printList(L);

	return 0;
}
