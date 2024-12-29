#include <stdio.h>

int main() {
    int pil_suhu;
    float celcius, reamur, far, kelvin;

    while (1) {
        printf("Konversi Suhu\n\nYang akan Anda konversi Adalah:\n");
        printf("1. Celcius\n");
        printf("2. Reamur\n");
        printf("3. Fahrenheit\n");
        printf("4. Kelvin\n");
        printf("5. Keluar\n\n");
        printf("Masukkan Pilihan Anda: ");
        scanf("%i", &pil_suhu);
        printf("\n");

        switch (pil_suhu) {
            case 1: 
                printf("Suhu Dalam Celcius: ");
                scanf("%f", &celcius);

                reamur = celcius * 0.8;
                kelvin = celcius + 273.15;
                far = celcius * 1.8 + 32;

                printf("Suhu Reamur: %.2f\n", reamur);
                printf("Suhu Fahrenheit: %.2f\n", far);
                printf("Suhu Kelvin: %.2f\n", kelvin);
                break;

            case 2: 
                printf("Suhu Dalam Reamur: ");
                scanf("%f", &reamur);

                celcius = reamur / 0.8;
                kelvin = celcius + 273.15;
                far = celcius * 1.8 + 32;

                printf("Suhu Celcius: %.2f\n", celcius);
                printf("Suhu Fahrenheit: %.2f\n", far);
                printf("Suhu Kelvin: %.2f\n", kelvin);
                break;

            case 3: 
                printf("Suhu Dalam Fahrenheit: ");
                scanf("%f", &far);

                celcius = (far - 32) / 1.8;
                kelvin = celcius + 273.15;
                reamur = celcius * 0.8;

                printf("Suhu Celcius: %.2f\n", celcius);
                printf("Suhu Reamur: %.2f\n", reamur);
                printf("Suhu Kelvin: %.2f\n", kelvin);
                break;

            case 4: 
                printf("Suhu Dalam Kelvin: ");
                scanf("%f", &kelvin);

                celcius = kelvin - 273.15;
                far = celcius * 1.8 + 32;
                reamur = celcius * 0.8;

                printf("Suhu Celcius: %.2f\n", celcius);
                printf("Suhu Reamur: %.2f\n", reamur);
                printf("Suhu Fahrenheit: %.2f\n", far);
                break;

            case 5: 
                printf("Terima kasih! Program dihentikan.\n");
                return 0;

            default:
                printf("Pilihan Anda Salah. Silakan coba lagi.\n");
                break;
              
        }
      printf("_____________________________________________");
        printf("\n\n"); 
    }

    return 0;
}
