#include <stdio.h>

int main(){
	int soNuoc;
	int tongTien;
	
	printf ("nhap so nuoc tieu thu: ");
	scanf ("%d",&soNuoc);
	
	if (soNuoc < 0){
		printf ("so nuoc khong hop le");
	}
	else if (soNuoc <= 10){
		tongTien = 10 * 6000 + (soNuoc - 10) * 7000;
	}
	else if (soNuoc <= 30) {
        tongTien = 10 * 6000 + 10 * 7000 + (soNuoc - 20) * 8500;
    } 
    else {
        tongTien = 10 * 6000 + 10 * 7000 + 10 * 8500 + (soNuoc - 30) * 10000;
    }
     printf("so tien phai tra la: %d \n", tongTien);
	
	return 0;
}
