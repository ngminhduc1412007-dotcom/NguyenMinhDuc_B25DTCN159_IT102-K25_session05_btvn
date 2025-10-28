#include <stdio.h>
#include <math.h>

int mian (){
	char kiTu;
	printf ("hay nhap 1 ki tu: ");
	scanf ("%c",&kiTu);
	if (kiTu >= 'a' && kiTu <= 'z'){
		kiTu = kiTu - 32;
		printf ("chu cai viet hoa tuong ung: %c", kiTu);
	} 
	else if (kiTu >= 'A' && kiTu <= 'Z'){
		kiTu = kiTu + 32;
		printf ("chu cai viet thuong tuong ung: %c", kiTu);
	}
	else {
		printf ("chu cai khong hop le");
	}
	return 0;
}
