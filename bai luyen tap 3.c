#include <stdio.h>
#include <math.h>

int main (){
	int tuoi;
	int giaVe;
	printf ("nhap tuoi cua ban: ");
	scanf("%d",&tuoi);
	if (tuoi < 1 || tuoi > 150){
		printf ("tuoi khong hop le");
	}
	if (tuoi < 6){
		printf ("mien phi");
		return 0;
	}
	else if (tuoi >= 6 && tuoi <= 18){
	    giaVe = 20000 * 0.5;
	}
	else if (tuoi >= 19 && tuoi <= 6){
		giaVe = 20000;
	}
	else if (tuoi > 60){
		giaVe = 20000 * 0.7;
	}
	printf ("so tien ve la: %d", giaVe);
	return 0;
}
