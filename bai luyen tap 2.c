#include <stdio.h>
#include <math.h>

int main (){
	float thuNhap;
	float thue;
	float thuePhaiDong;
	printf ("nhap thu nhap 1 thang cua ban: ");
	scanf ("%f",&thuNhap);
	
	if (thuNhap <= 5.0) {
		thuePhaiDong = thuNhap * 0.05;
	}
	else if (thuNhap > 5.0 && thuNhap <= 10){
		thuePhaiDong = thuNhap * 0.1;
	}else{
		thuePhaiDong = thuNhap * 0.15;
	}
	
	printf ("thue phai dong la: %.2f", thuePhaiDong);
	
	return 0;
}
