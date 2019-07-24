#include <stdio.h>
#include <stdlib.h>

int main()
{
int pilihan,ganjilgenap,x,angka_asli,angka_random;
char yesno,jawaban;
printf("1.Menu Ganjil Genap\n2.Menu Tebak Angka\n3.Print Nama NIM\nMasukkan pilihan :");
pilihan: 1,2,3;
scanf("%i", &pilihan);
switch(pilihan)
{
case 1 :
    printf("\n");
    printf("Menu Ganjil Genap :\n");
    do{
    printf("Masukkan angkanya :");
    scanf("%i", &ganjilgenap);
    x = ganjilgenap;

    if(x%2 == 0)
    {
        printf("%i adalah angka genap\n",x);
    }   else if(x%2 == 1)
    {
        printf("%i adalah angka ganjil\n",x);
    }
    printf("Ingin lanjut?? [y/n]");
    scanf("%s",&yesno);
    }while(yesno=='y' && yesno!='n');
    if(yesno=='n')
    {
        printf("\n");
        printf("Permainan Selesai\n");
    system("pause");
    system("cls");
    main();
    }

    break;

case 2 :
    printf("\n");
    printf("Permainan tebak angka!\n");
    printf("Masukkan angkanya :");
    scanf("%i",&angka_asli);
    printf("Okee,angkanya adalah %i\n",angka_asli);
    printf("\n");
    do{
    printf("Tebak angkanya :");
    scanf("%i",&angka_random);
    if(angka_asli==angka_random)
    {
        printf("Anda benar!!\n\nPermainan Selesai\n");
    system("pause");
    system("cls");
    main();
    }   else if(angka_asli>angka_random)
    {
        printf("Angka terlalu kecil :(\n");
    }   else if(angka_asli<angka_random)
    {
        printf("Angka terlalu besar :(\n");
    }
    printf("Ingin lanjut nebak?? [y/n]");
    scanf("%s",&jawaban);
    }   while(jawaban=='y' && jawaban!='n');
    if(jawaban=='n')
    {
        printf("\n");
        printf("Permainan Selesai\n");
    system("pause");
    system("cls");
    main();
    }

    break;

case 3 :
    printf("\n");
    printf("Nama : Nadia Renatha Yuwono  NIM : 672018004\n");
    printf("\n");
    system("pause");
    system("cls");
    main();
    break;
}
}
