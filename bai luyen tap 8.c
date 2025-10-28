#include <stdio.h>

int main() {
    float soDien, tienBacThang, phuPhi, tienDien;
    int cacLoaiHoSuDungDien;

    printf("nhap so dien tieu thu: ");
    scanf("%f", &soDien);

    printf("nhap loai ho su dung dien : ");
    scanf("%d", &cacLoaiHoSuDungDien);

    if (soDien <= 0) {
        printf("so dien khong hop le \n");
        return 0;
    }
    else if (soDien <= 50) {
        tienBacThang = soDien * 1500;
    }
    else if (soDien <= 100) {
        tienBacThang = 50 * 1500 + (soDien - 50) * 2000;
    }
    else if (soDien <= 200) {
        tienBacThang = 50 * 1500 + 50 * 2000 + (soDien - 100) * 2500;
    }
    else {
        tienBacThang = 50 * 1500 + 50 * 2000 + 100 * 2500 + (soDien - 200) * 3000;
    }

    switch (cacLoaiHoSuDungDien) {
        case 1:
            phuPhi = tienBacThang * 0.05;
            break;
        case 2:
            phuPhi = tienBacThang * 0.10;
            break;
        case 3:
            phuPhi = tienBacThang * 0.08;
            break;
        default:
            printf("loai ho su dung dien khong hop le \n");
            return 0;
    }

    tienDien = tienBacThang + phuPhi;

    printf("so dien tieu thu: %f kWh\n",soDien);
    printf("tien bac thang: %f \n", tienBacThang);
    printf("phu phi: %f \n", phuPhi);
    printf("tong tien dien cua thang la: %f \n", tienDien);

    return 0;
}

