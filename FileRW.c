
// #include <time.h>
// #include <stdio.h>
// clock_t mulai, selesai;
// double elapsed;
// int main() {
//     mulai = clock();
//     for (int i = 1; i < 100000; i++){
//         for (int j = 1; j < 1000; j++) {
//             for (int k = 1; k < 100; k++) {
                
//             }
//         }
//     }
//     selesai = clock();
//     elapsed = ((double) (selesai - mulai)) / CLOCKS_PER_SEC;
//     printf("Elapsed: %10.10f\n", elapsed);
// }
// 4.275 sec

// #include <time.h>
// #include <stdio.h>
// time_t mulai, selesai;
// double elapsed;
// int main() {
//     time(&mulai);
//     for (int i = 1; i < 100000; i++){
//         for (int j = 1; j < 10000; j++) {
            
//         }
//     }
//     time(&selesai);
//     elapsed = difftime(selesai,mulai);
//     printf("Elapsed: %10.10f\n", elapsed);
// }
// // program time merupakan berapa lama suatu program dieksekusi sedangkan program clock berapa lama prosesor mengeksekusi program


// #include <time.h>
// #include <sys/time.h>
// #include <stdio.h>
// struct timeval waktu;
// int main() {

//     gettimeofday(&waktu,NULL);
//     printf("detik:%ld \nmicro detik:%ld\n", waktu.tv_sec,waktu.tv_usec);

//     //formating
//     time_t t;
//     struct tm *info;
//     char buffer[64];
//     t = waktu.tv_sec;

//     info = localtime(&t); //ambil infonya
//     printf("format standard: %s", asctime (info));
//     strftime (buffer, sizeof buffer, "Hari ini %A, %B %d.\n", info);
//     printf("%s",buffer);
//     strftime (buffer, sizeof buffer, "Waktu: %I:%M %p.\n", info);
//     printf("%s",buffer);
    
// }

// #include <stdio.h>
// int main () {
//     FILE * fp;
//     fp = fopen ("file.txt", "w+");
//     fprintf(fp, "%s %d %f %s", "Satu", 1, 0.5, "hello");
//     fclose(fp);
//     //baca file
//     char str1[10],str2[10];
//     int int1;
//     double float1;
//     fp = fopen("file.txt","r");
//     fscanf(fp,"%s %d %lf %s", str1, &int1, &float1, str2);
//     printf(" isi file: %s ; %d ; %f ; %s \n",str1,int1,float1,str2);
//     fclose(fp);
//     return(0);
// }

// #include <stdio.h>
// int main () {
//     FILE *fp;
//     //menulis string dengan fput
//     fp = fopen("file.txt", "w+");
//     fputs("Halo-halo bandung", fp);
//     fputs("Pada hari minggu kuturut ayah ke kota \n", fp);
//     fputs("Test di baris baru\n\n", fp);
//     // menulis perkarakter dengan fputc
//     char str[4] = {'s', 'a', 't', 'u'};
//         for (int i=0 ; i<4; i++) {
//         fputc(str[i],fp);
//     }
//     fclose(fp);
//     return(0);
// }

// #include <stdio.h>
// #include <string.h>
// int main () {
//     FILE *fp;
//     char str[60]; //buffer
//     fp = fopen("file.txt" , "r");
//     if(fp == NULL) {
//         perror("Gagal membuka file");
//         return(-1);
//     }
//     while ( fgets (str, 60, fp)!=NULL ) {
//         /* tulis ke stdout */
//         str[strcspn(str, "\n")] = 0; //membuang ekstra /n
//         puts(str);
//     }
//     fclose(fp);
//     return(0);
// }

// #include <stdio.h>
// #include <string.h>
// int main () {
//     FILE *fp;
//     //menulis string dengan fput
//     fp = fopen("file.txt", "w+");
//     fputs("Halo-halo bandung", fp);
//     fputs("Pada hari minggu kuturut ayah ke kota \n", fp);
//     // menulis perkarakter dengan fputc
//     char coba[4] = {'s', 'a', 't', 'u'};
//         for (int i=0 ; i<4; i++) {
//         fputc(coba[i],fp);
//     }
//     fclose(fp);

//     char str[60]; //buffer
//     fp = fopen("file.txt" , "r");
//     for (int i = 0; i < 60; i++){
//         fscanf(fp, "%c", &str[i]);
//     }
//     fclose(fp);

//     fp = fopen("file2.txt", "w+");
//     // menulis perkarakter dengan fputc
//         for (int i=0 ; i<60; i++) {
//             if(str[i]=='o'){
//                 str[i]='a';
//             }
//             fputc(str[i],fp);
//         }
//     fclose(fp);


//     return(0);
// }


// #include<stdio.h>
// typedef struct Mahasiswa{
//     char nim[10];
//     char nama[25];
//     float nilai;
// } Mahasiswa;

// int main(){
//     FILE *fp;
//     Mahasiswa mhs1, mhs2; //nantinya array
//     fp = fopen("mhs.dat","w");
//     if(fp == NULL) {
//         perror("Gagal membuka file");
//         return(-1);
//     }
//     mhs1 = (Mahasiswa) {.nim="13594022", .nama="Budi Martami", .nilai=70.85};
//     fwrite(&mhs1,sizeof(mhs1),1,fp);
//     mhs2 = (Mahasiswa) {.nim="13594036", .nama="Elfan Noviari", .nilai=80.05};
//     fwrite(&mhs2,sizeof(mhs2),1,fp);
//     fclose(fp);
//     //baca file
//     fp = fopen("mhs.dat","r");
//     if(fp == NULL) {
//         perror("Gagal membuka file");
//         return(-1);
//     }
//     struct Mahasiswa mhsout;
//     if(fp == NULL) {
//         perror("Gagal membuka file");
//         return(-1);
//     }
//     while(fread(&mhsout,sizeof(mhsout),1,fp)>0)
//     printf("\n\t%s\t%s\t%f",mhsout.nim,mhsout.nama,mhsout.nilai);
//     printf("\n\n");
//     fclose(fp);

//     return 0;
// }


// #include<stdio.h>
// typedef struct Mahasiswa{
//     char nim[10];
//     char nama[25];
//     float nilai;
// } Mahasiswa;

// int main(){
//     FILE *fp;
//     Mahasiswa mhs1[2]; //nantinya array
//     fp = fopen("mhs.dat","w");
//     if(fp == NULL) {
//         perror("Gagal membuka file");
//         return(-1);
//     }
//     mhs1[0] = (Mahasiswa) {.nim="13594022", .nama="Budi Martami", .nilai=70.85};
//     mhs1[1] = (Mahasiswa) {.nim="13594036", .nama="Elfan Noviari", .nilai=80.05};
//     for(int i=0; i<2; i++){
//         fwrite(&mhs1[i],sizeof(mhs1[i]),1,fp);
//     }
//     fclose(fp);
//     //baca file
//     fp = fopen("mhs.dat","r");
//     if(fp == NULL) {
//         perror("Gagal membuka file");
//         return(-1);
//     }
//     struct Mahasiswa mhsout;
//     if(fp == NULL) {
//         perror("Gagal membuka file");
//         return(-1);
//     }
//     while(fread(&mhsout,sizeof(mhsout),1,fp)>0)
//     printf("\n\t%s\t%s\t%f",mhsout.nim,mhsout.nama,mhsout.nilai);
//     printf("\n\n");
//     fclose(fp);

//     return 0;
// }


// #include <stdio.h>
// #include <string.h>
// int main () {
//     FILE *fp;
//     //menulis string dengan fput
//     fp = fopen("file.txt", "w+");
//     char str[100] = "Halo-halo Bandung";
//     fwrite(str, 1, sizeof(str), fp);
//     fclose(fp);

//     char str2[60]; //buffer
//     fp = fopen("file.txt" , "r");
//     for (int i = 0; i < 60; i++){
//         fscanf(fp, "%c", &str2[i]);
//     }
//     fclose(fp);

//     fp = fopen("file2.txt", "w+");
//     // menulis perkarakter dengan fputc
//     for (int i=0 ; i<60; i++) {
//         if(str2[i]=='o'){
//             str2[i]='a';
//         }
//     }
//     fwrite(str2, 1, sizeof(str2), fp);
//     fclose(fp);


//     return(0);
// }