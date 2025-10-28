#include <stdio.h>

int main(){
	float a;
	float b;
	float ketQua;
	char toanTu;
	
	printf("nhap vao so nguyen a: ");
    scanf("%f", &a);

    printf("nhap vao so nguyen b: ");
    scanf("%f", &b);

    printf("nhap toan tu: ");
    scanf(" %c", &toanTu);
	
	switch (toanTu) {
        case '+':
            ketQua = a + b;
            printf("Ket qua: %.2f + %.2f = %.2f", a, b, ketQua);
            break;

        case '-':
            ketQua = a - b;
            printf("Ket qua: %.2f - %.2f = %.2f", a, b, ketQua);
            break;

        case '*':
            ketQua = a * b;
            printf("Ket qua: %.2f * %.2f = %.2f", a, b, ketQua);
            break;

        case '/':
            if (b == 0)
                printf("Loi: Khong the chia cho 0");
            else {
                ketQua = a / b;
                printf("Ket qua: %.2f / %.2f = %.2f", a, b, ketQua);
            }
            break;

        default:
            printf("Loi: Toan tu khong hop le");
    }
	
	return 0;
}
