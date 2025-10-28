#include <stdio.h>
#include <math.h>

int main(){
	float a;
	printf ("vui long nhap diem tb: ");
	scanf ("%f",&a);
	if (a < 1 || a > 10){
		printf ("diem khong hop le vui long nhap lai");
	}
	else if(a >= 8){
		printf ("hoc luc gioi");
	}
	else if(a >= 6.5){
		printf ("hoc luc kha");
	}
	else if(a >= 5){
		printf("hoc luc trung binh");
	}
	else if(a < 5){
		printf ("hoc luc yeu");
	}
	
	
	return 0;
	
}
