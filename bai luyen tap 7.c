#include <stdio.h>

int main(){
	float heSoLuong, luong, phuCap, thuong;
	int soNgayCong, chucVu;
	
	printf("he so luong: ");
    scanf("%f", &heSoLuong);

    printf("so ngay cong trong thang: ");
    scanf("%d",&soNgayCong);
    
    printf("chuc vu: ");
    scanf("%d", &chucVu);
    
     switch (chucVu) {
        case 1:
            phuCap = 500000;
            break;
        case 2:
            phuCap = 1000000;
            break;
        case 3:
            phuCap = 2000000;
            break;
        default:
            printf("khong hop le \n");
            return 0;
    }
    
      if (soNgayCong > 26) {
        thuong = (soNgayCong - 26) * 200000;
    }
    
    luong = soNgayCong * 160000 * heSoLuong + phuCap + thuong;
    
    printf("he so luong: %f \n", heSoLuong);
    printf("so ngay cong: %d \n", soNgayCong);
    printf("phu cap: %f \n", phuCap);
    printf("thuong: %f \n", thuong);
    printf("luong: %f \n", luong);

		
	return 0;
}
