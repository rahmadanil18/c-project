#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include <fstream>
//===========================================================================\\
//            				       pembayaran listrik                            \\
//			   	UNTUK MEMPERMUDAH DALAM MEMBAYAR BIAYA LISTRIK                \\
//          				   @Copyright By.Rahma Danil                         \\
//                                                                           \\
//            							width: :110                                 \\
//            							height :43                                  \\
//===========================================================================\\
//==============================VARIABEL GLOBAL===============================//
char pilih2,pilih4,meter[100],duit[100];
char nama[100][100],ktp[1000][100],user[1000][100],pass[1000][100];
int data=0;
int index=0;
int i=0;
int valangka=0;
float tamp[100];
float watt[100];
float daya=0,tagih,svTarif=0;
int uang=0,uang2,uang3;
int dolar[50];
//=================================PROTOTYPE==================================//
void hapusvalid();            void hapuspass();
void valuser();               void valpass();                   void valuser();
void namadaftar();            void daftar_ktp();                void hapusnama();
void hapusktp();              void hapususer();                 void nmrktp();
void bayar();                 void masuklogin3();               void barang();
void pilihan3();              void biayatarif();                void masuklogin2();
void isi();                   void masuklogin();                void ikon4();
void invalid();               void ikon3();                     void tentang();
void profil();                void judul();                     void layar2();
void layar1();                void tampilan2();                 void money();
void bertanya();              void kata();                      void loading();
void daftar();                void petir();                     void ikon();
void login();                 void pilihan();                   void ikon2();
void pilihan2();              void error();                     void hapuserror();
void lampu();                 void Llampu();                    void hapusLLampu();
void hapusLampu();            void televisi();                  void hapusTv();
void Latv();                  void hapusLtv();                  void setrika();
void hapussetrika();          void hapusLsetrika();             void Lsetrika();
void mcuci();                 void hapuscuci();                 void Lcuci();
void hapcuci();               void kulkas();                    void hapuskulkas();
void Lkulkas();               void hapkulkas1();                void ac();
void hapusac();               void Lac();                       void hapac1();
void hapuskipas();            void kipas();                     void kipas1();
void hapuskipas1();           void blender();                   void hapusblender();
void blender1();              void hapusblender1();             void komputer();
void hapuskom();              void hapuskom1();                 void komputer1();
void air();                   void hapusair();                  void hapusair1();
void air1();                  void dispenser();                 void hapusdis();
void dispenser1();            void hapusdis1();                 void hapusnasi();
void nasi();                  void hapusnsai1();                void nasi1();
void tarif();                 void kotak();                     void bertanya2();
void hapusmoney();

int validAngka(char a[]);

bool validasiAngka(char kata[]);
//================================TAMPILAN 1 ===================================//
void judul(){
	for(int a=1;a<=9;a++){
   	textcolor(6);
   	gotoxy(a+31,1);cprintf("%c",220);
   	textcolor(3);
		gotoxy(a+31,2);cprintf("%c",219);
   	if(a<=5){
   		textcolor(6);
   		gotoxy((a+62)-1,4);cprintf("%c",220);
   		textcolor(3);
   		gotoxy(61,5);cprintf("%c",219);
   		gotoxy((a+61)-1,5);cprintf("%c",219);
   	}
   	if(a<=6){
   		textcolor(3);
			gotoxy(a+49,2);cprintf("%c",219);
   		textcolor(6);
   		gotoxy(a+50,1);cprintf("%c",220);
   		textcolor(3);
   		gotoxy(50,2);cprintf("%c",219);
   		gotoxy(50,4);cprintf("%c",219);
   		gotoxy(a+49,4);cprintf("%c",219);
   	  	textcolor(6);
   		gotoxy(a+50,3);cprintf("%c",220);
   	}
   	if(a<=4){
   		textcolor(3);
   		gotoxy(31,a+1);cprintf("%c",219);
         gotoxy(35,a+1);cprintf("%c",219);
      	gotoxy(39,a+1);cprintf("%c",219);
      	textcolor(6);
      	gotoxy(50,a+1);cprintf("%c",219);
      	gotoxy(61,1);cprintf("%c",220);
      	gotoxy(61,a+1);cprintf("%c",219);
      	gotoxy(70,a+1);cprintf("%c",219);
      	gotoxy(76,a+1);cprintf("%c",219);
      	textcolor(3);
      	gotoxy(49,a+1);cprintf("%c",219);
      	gotoxy(60,a+1);cprintf("%c",219);
      	gotoxy(69,a+1);cprintf("%c",219);
      	gotoxy(75,a+1);cprintf("%c",219);
   	}else if(a>=8){
   		textcolor(6);
   		gotoxy(32,a-6+1);cprintf("%c",219);
      	gotoxy(36,a-6+1);cprintf("%c",219);
      	gotoxy(40,a-6+1);cprintf("%c",219);
      	gotoxy(40,2);cprintf("%c",219);
      	textcolor(3);
      	gotoxy(50,3);cprintf("%c",219);
      	gotoxy(55,a-6+1);cprintf("%c",219);
      	textcolor(6);
      	gotoxy(56,2);cprintf("%c",219);
      	gotoxy(56,a-7+1);cprintf("%c",219);
   	}
   gotoxy(44,3);cprintf("%c",220);
   gotoxy(45,3);cprintf("%c",220);
   gotoxy(46,3);cprintf("%c",220);
   textcolor(3);
   gotoxy(70,2);cprintf("%c",219);
   gotoxy(74,5);cprintf("%c",219);
   gotoxy(71,2);cprintf("%c",219);
   gotoxy(72,3);cprintf("%c",219);
   gotoxy(73,4);cprintf("%c",219);
   gotoxy(74,5);cprintf("%c",219);
   textcolor(6);
   gotoxy(72,2);cprintf("%c",219);
   gotoxy(73,3);cprintf("%c",219);
   gotoxy(74,4);cprintf("%c",219);
   gotoxy(50,3);cprintf("%c",219);
   gotoxy(50,1);cprintf("%c",220);
	}
}
//================================layar 2=====================================//
void layar2(){
	judul();
	for(int c=8;c<=42;c++){
		textcolor(8);gotoxy(25,c);cprintf("%c",219);
		gotoxy(26,c);cprintf("%c",219);
	}
	for(int c=1;c<=110;c++){
		gotoxy(c,8);cprintf("%c",219);
	}
	for(int c=3;c<=110;c++){
		gotoxy(c,8);cprintf("%c",219);
	}
}
//==============================ikon===========================================//
void ikon(){
	for(int c=4;c<=20;c++){
		textcolor(8);
		gotoxy(c,11);cprintf("%c",219);
   	gotoxy(c,12);cprintf("%c",219);
   	gotoxy(c,13);cprintf("%c",219);
   	gotoxy(c,14);cprintf("%c",219);
   	gotoxy(c,15);cprintf("%c",219);
   	gotoxy(c,17);cprintf("%c",219);
   	gotoxy(c,18);cprintf("%c",219);
   	gotoxy(c,19);cprintf("%c",219);
   	gotoxy(c,20);cprintf("%c",219);
   	gotoxy(c,21);cprintf("%c",219);
   	gotoxy(c,23);cprintf("%c",219);
   	gotoxy(c,24);cprintf("%c",219);
   	gotoxy(c,25);cprintf("%c",219);
   	gotoxy(c,26);cprintf("%c",219);
   	gotoxy(c,27);cprintf("%c",219);
   	gotoxy(c,29);cprintf("%c",219);
   	gotoxy(c,30);cprintf("%c",219);
   	gotoxy(c,31);cprintf("%c",219);
   	gotoxy(c,32);cprintf("%c",219);
   	gotoxy(c,33);cprintf("%c",219);
	}
	for(int c=6;c<=18;c++){
		textcolor(15);
   	gotoxy(c,12);cprintf("%c",219);
   	gotoxy(c,13);cprintf("%c",219);
   	gotoxy(c,14);cprintf("%c",219);
   	gotoxy(c,18);cprintf("%c",219);
   	gotoxy(c,19);cprintf("%c",219);
   	gotoxy(c,20);cprintf("%c",219);
   	gotoxy(c,24);cprintf("%c",219);
   	gotoxy(c,25);cprintf("%c",219);
   	gotoxy(c,26);cprintf("%c",219);
   	gotoxy(c,30);cprintf("%c",219);
   	gotoxy(c,31);cprintf("%c",219);
   	gotoxy(c,32);cprintf("%c",219);
      gotoxy(c,36);cprintf("%c",219);
   	gotoxy(c,37);cprintf("%c",219);
   	gotoxy(c,38);cprintf("%c",219);
	}
	textcolor(16);
   gotoxy(8,37);cprintf("PILIH |:");
	gotoxy(9,13);cprintf("1.MENU");
   gotoxy(8,19);cprintf("2.TENTANG");
   gotoxy(8,25);cprintf("3.PROFIL");
   gotoxy(8,31);cprintf("4.KELUAR");
}
//================================kata=========================================//
void kata(){
	textcolor(0);
   gotoxy(43,15);cprintf("PLN terus mengembangkan versi terbaru PLN");Sleep(200);
   gotoxy(43,17);cprintf("MOBILE sebagai aplikasi berbasis Bahasa C");Sleep(200);
   gotoxy(43,19);cprintf("dengan cara meningkatkan kualitas dari sisi");Sleep(200);
   gotoxy(43,21);cprintf("layanan dan penggunaan yang lebih user");Sleep(200);
   gotoxy(43,23);cprintf("friendly. Aplikasi yang sudah ter-");Sleep(200);
   gotoxy(43,25);cprintf("download oleh lebih dari 170.000 pengguna ini");Sleep(200);
   gotoxy(43,27);cprintf("memiliki fitur yang dapat memudahkan");Sleep(200);
   gotoxy(43,29);cprintf("pelanggan untuk mengakses layanan listrik");Sleep(200);
   gotoxy(43,31);cprintf("dalam satu genggaman.Selain itu aplikasi");Sleep(200);
   gotoxy(43,33);cprintf("ini diciptakan oleh sepasang orang terkenal yaitu");Sleep(200);
   textcolor(6);
   gotoxy(43,35);cprintf("Prof,Rahma Danil,Lc,MA & Ph.D. Muhammad Iqbal,Tse");Sleep(200);
}
//=================================bertanya=======================================//
void bertanya(){
   clrscr();
	char tanya;
   gotoxy(40,18);printf("Apakah anda yakin ingin keluar(y/t)");
   tanya=getche();
   if(tanya=='y'||tanya=='Y'){
   	clrscr();
      for(int d=1;d<=13;d++){cprintf("%c",7);}
   	for(int c=1;c<=20;c++){
      	textcolor(c);
      	gotoxy(30,18);cprintf("TERIMAKASIH TELAH MENGGUNAKAN APLIKASI MOBILE-PLN");Sleep(150);
		}exit(0);
   }else if(tanya=='t'||tanya=='T'){
    clrscr();
   }else{bertanya();}
}
void bertanya2(){
   clrscr();
	char tanya2;
   gotoxy(30,18);printf("Apakah anda yakin ingin menyimpan data(y/t)");
   tanya2=getche();
   if(tanya2=='y'||tanya2=='Y'){clrscr();
      for(int a=41;a<=64;a++){
			textcolor(8);
			gotoxy(a,33);cprintf("%c",219);
   	}loading();clrscr();
      for(int a=0;a<2;a++){
      	printf("%c",7);
         gotoxy(41,33);;printf("       Berhasil!        ");Sleep(500);
         gotoxy(41,33);;printf("                        ");Sleep(300);
      }clrscr();
   }else if(tanya2=='t'||tanya2=='T'){
    clrscr();layar2();ikon();kata();pilihan();
   }else{bertanya2();}
}
//=================================pilihan====================================//
void pilihan(){
   char pilih;
   gotoxy(17,37);pilih=getche();
   gotoxy(17,37);printf("%c",pilih);Sleep(400);
   if(pilih=='1'){
   	clrscr();layar2();ikon2();login();
      gotoxy(16,37);pilih2=getch();
		if(pilih2==13){
      	isi();
		}
   	pilihan2();
   }else if(pilih=='2'){
    	clrscr();layar2();ikon3();tentang();pilihan();
   }else if(pilih=='3'){
      clrscr(); layar2();ikon4();profil();pilihan();
   }else if(pilih=='4'){
      bertanya();layar2();ikon();kata();pilihan();
   }else{
   	invalid();hapusvalid();pilihan();
   }
}
//==================================pilihan 2==================================//
void pilihan2(){
   gotoxy(17,37);pilih2=getche();
   gotoxy(17,37);printf("%c",pilih4);Sleep(400);
   if(pilih2=='1'){
   	clrscr();layar2();ikon2();login();pilihan2();
   }else if(pilih2=='2'){
     	clrscr();layar2();daftar();namadaftar();daftar_ktp();valuser();valpass();clrscr();layar2();barang();clrscr();layar2();kotak();biayatarif();tarif();bertanya2();layar2();ikon2();login();
      gotoxy(16,37);pilih2=getch();
		if(pilih2==13){
      	isi();
		}
   	pilihan2();
   }else if(pilih2=='3'){
   	clrscr();layar2();ikon();kata();pilihan();
   }else if(pilih2==13){
   	isi();clrscr();layar2();masuklogin();kata();pilihan3();masuklogin2();
   }else{
   	invalid();hapusvalid();pilihan2();
   }
}
//============================username(login)=================================//
void login(){
	for(int c=50;c<=85;c++){
   	gotoxy(c,20);cprintf("%c",196);
   	gotoxy(c,26);cprintf("%c",196);
   }
   textcolor(0);
   gotoxy(40,19);cprintf("USERNAME |:");
   gotoxy(40,25);cprintf("PASSWORD |:");
}
//==============================login===================================//
void isi(){
	int tamp=0;
	char loginuser[50],loginpass[50];
   gotoxy(50,38);cprintf("                        ");
   textcolor(0);
   gotoxy(52,19);gets(loginuser);
   gotoxy(52,25);gets(loginpass);
   for(int a=0;a<=data;a++){
      if(loginuser[0]==NULL||loginpass[0]==NULL){
        tamp=0;
      }
   	else if(strcmp(loginuser,user[a])==0&&strcmp(loginpass,pass[a])==0){
        tamp++;clrscr();layar2();masuklogin();kata();pilihan3();
   	}else{
       tamp=0;
      }
   }
   if(tamp==0||pilih2=='1'){
   	invalid();clrscr();layar2();ikon2();login();pilihan2();
   	gotoxy(16,37);pilih4=getch();
		if(pilih4==13){
      	isi();clrscr();layar2();pilihan2();
      }
      if(pilih2=='2'){
      	clrscr();layar2();daftar();namadaftar();daftar_ktp();valuser();valpass();clrscr();layar2();ikon2();login();
      	gotoxy(16,37);pilih2=getch();
			if(pilih2==13){
      		isi();
			}
   		pilihan2();clrscr();layar2();barang();clrscr();layar2();kotak();biayatarif();tarif();bertanya2();clrscr();layar2();masuklogin();kata();pilihan3();
      }else if(pilih2=='3'){
      	clrscr();layar2();ikon();kata();pilihan();
      }
	}else{
   	invalid();hapusvalid();
   	}
}
//==============================pilihan3=====================================
void pilihan3(){
	char pilih3;
   gotoxy(17,31);pilih3=getche();
   gotoxy(17,31);printf("%c",pilih3);Sleep(400);
   if(pilih3=='1'){
    	clrscr();layar2();masuklogin3();bayar();pilihan3();
   }else if(pilih3=='2'){
   	clrscr();layar2();masuklogin2();biayatarif();pilihan3();
   }else if(pilih3=='3'){
      clrscr();layar2();ikon2();login();
      gotoxy(16,37);pilih2=getch();
		if(pilih2==13){
      	isi();clrscr();layar2();masuklogin();pilihan3();
		}
      pilihan2();
   }else{
   	invalid();hapusvalid();pilihan3();
   }
}
//=============================golongan tarif=================================//
void masuklogin(){
   for(int c=4;c<=20;c++){
		textcolor(8);
		gotoxy(c,11);cprintf("%c",219);
   	gotoxy(c,12);cprintf("%c",219);
   	gotoxy(c,13);cprintf("%c",219);
   	gotoxy(c,14);cprintf("%c",219);
   	gotoxy(c,15);cprintf("%c",219);
   	gotoxy(c,17);cprintf("%c",219);
   	gotoxy(c,18);cprintf("%c",219);
   	gotoxy(c,19);cprintf("%c",219);
   	gotoxy(c,20);cprintf("%c",219);
   	gotoxy(c,21);cprintf("%c",219);
      gotoxy(c,23);cprintf("%c",219);
   	gotoxy(c,24);cprintf("%c",219);
   	gotoxy(c,25);cprintf("%c",219);
   	gotoxy(c,26);cprintf("%c",219);
   	gotoxy(c,27);cprintf("%c",219);
   	}
	for(int c=6;c<=18;c++){
		textcolor(15);
   	gotoxy(c,12);cprintf("%c",219);
   	gotoxy(c,13);cprintf("%c",219);
   	gotoxy(c,14);cprintf("%c",219);
   	gotoxy(c,18);cprintf("%c",219);
   	gotoxy(c,19);cprintf("%c",219);
   	gotoxy(c,20);cprintf("%c",219);
   	gotoxy(c,24);cprintf("%c",219);
   	gotoxy(c,25);cprintf("%c",219);
   	gotoxy(c,26);cprintf("%c",219);
      gotoxy(c,30);cprintf("%c",219);
   	gotoxy(c,31);cprintf("%c",219);
   	gotoxy(c,32);cprintf("%c",219);
	}
   textcolor(0);
   gotoxy(9,13);cprintf("1.BAYAR ");
   gotoxy(9,19);cprintf("2.TARIF");
   gotoxy(9,25);cprintf("3.KEMBALI");
   gotoxy(8,31);cprintf("PILIH|:");
}
//==============================masuklogin3===================================
void masuklogin2(){
   for(int c=4;c<=20;c++){
		textcolor(8);
		gotoxy(c,11);cprintf("%c",219);
   	gotoxy(c,12);cprintf("%c",219);
   	gotoxy(c,13);cprintf("%c",219);
   	gotoxy(c,14);cprintf("%c",219);
   	gotoxy(c,15);cprintf("%c",219);
      gotoxy(c,23);cprintf("%c",219);
   	gotoxy(c,24);cprintf("%c",219);
   	gotoxy(c,25);cprintf("%c",219);
   	gotoxy(c,26);cprintf("%c",219);
   	gotoxy(c,27);cprintf("%c",219);
      textcolor(11);
   	gotoxy(c,17);cprintf("%c",219);
   	gotoxy(c,18);cprintf("%c",219);
   	gotoxy(c,19);cprintf("%c",219);
   	gotoxy(c,20);cprintf("%c",219);
   	gotoxy(c,21);cprintf("%c",219);
   	}
	for(int c=6;c<=18;c++){
		textcolor(15);
   	gotoxy(c,12);cprintf("%c",219);
   	gotoxy(c,13);cprintf("%c",219);
   	gotoxy(c,14);cprintf("%c",219);
   	gotoxy(c,18);cprintf("%c",219);
   	gotoxy(c,19);cprintf("%c",219);
   	gotoxy(c,20);cprintf("%c",219);
   	gotoxy(c,24);cprintf("%c",219);
   	gotoxy(c,25);cprintf("%c",219);
   	gotoxy(c,26);cprintf("%c",219);
      gotoxy(c,30);cprintf("%c",219);
   	gotoxy(c,31);cprintf("%c",219);
   	gotoxy(c,32);cprintf("%c",219);
	}
   textcolor(0);
   gotoxy(9,13);cprintf("1.BAYAR ");
   gotoxy(9,19);cprintf("2.TARIF");
   gotoxy(9,25);cprintf("3.KEMBALI");
   gotoxy(8,31);cprintf("PILIH|:");
}
//==============================masuk login3=================================//
void masuklogin3(){
   for(int c=4;c<=20;c++){
		textcolor(11);
		gotoxy(c,11);cprintf("%c",219);
   	gotoxy(c,12);cprintf("%c",219);
   	gotoxy(c,13);cprintf("%c",219);
   	gotoxy(c,14);cprintf("%c",219);
   	gotoxy(c,15);cprintf("%c",219);
      textcolor(8);
   	gotoxy(c,17);cprintf("%c",219);
   	gotoxy(c,18);cprintf("%c",219);
   	gotoxy(c,19);cprintf("%c",219);
   	gotoxy(c,20);cprintf("%c",219);
   	gotoxy(c,21);cprintf("%c",219);
      gotoxy(c,23);cprintf("%c",219);
   	gotoxy(c,24);cprintf("%c",219);
   	gotoxy(c,25);cprintf("%c",219);
   	gotoxy(c,26);cprintf("%c",219);
   	gotoxy(c,27);cprintf("%c",219);
   	}
	for(int c=6;c<=18;c++){
		textcolor(15);
   	gotoxy(c,12);cprintf("%c",219);
   	gotoxy(c,13);cprintf("%c",219);
   	gotoxy(c,14);cprintf("%c",219);
   	gotoxy(c,18);cprintf("%c",219);
   	gotoxy(c,19);cprintf("%c",219);
   	gotoxy(c,20);cprintf("%c",219);
   	gotoxy(c,24);cprintf("%c",219);
   	gotoxy(c,25);cprintf("%c",219);
   	gotoxy(c,26);cprintf("%c",219);
      gotoxy(c,30);cprintf("%c",219);
   	gotoxy(c,31);cprintf("%c",219);
   	gotoxy(c,32);cprintf("%c",219);
  	}
   textcolor(0);
   gotoxy(9,13);cprintf("1.BAYAR ");
   gotoxy(9,19);cprintf("2.TARIF");
   gotoxy(9,25);cprintf("3.KEMBALI");
   gotoxy(8,31);cprintf("PILIH|:");
}
//==============================bayar==========================================//
void bayar(){
	gotoxy(32,17);printf("|-------------------------------------------------------------------|");
	gotoxy(32,18);printf("|                      MOBILE - PLN                                 |");
	gotoxy(32,19);printf("|-------------------------------------------------------------------|");
	gotoxy(32,20);printf("| NAMA                        :                                     |");
	gotoxy(32,21);printf("| NO.KTP                      :                                     |");
   gotoxy(32,22);printf("| GOLONGAN TARIF              :                                     |");
	gotoxy(32,23);printf("| JUMLAH PEMAKAIAN/BULAN(Kwh) :                                     |");
	gotoxy(32,24);printf("| JUMLAH TAGIHAN/BULAN(Rp)    :                                     |");
   gotoxy(32,25);printf("|-------------------------------------------------------------------|");
   gotoxy(32,26);printf("| MASUKAN UANG                :                                     |");
   gotoxy(32,27);printf("|-------------------------------------------------------------------|");
   gotoxy(32,28);printf("| KEMBALIAN                   :                                     |");
   gotoxy(32,29);printf("|-------------------------------------------------------------------|");
   gotoxy(32,30);printf("| KETERANGAN                  :                                     |");
	gotoxy(32,31);printf("|-------------------------------------------------------------------|");
   gotoxy(64,20);printf("%s",nama[index]);
   gotoxy(64,21);printf("%s",ktp[index]);
   gotoxy(64,22);printf("%s",meter);
   gotoxy(64,23);printf("%.3f",daya);
   gotoxy(64,24);printf("%d",uang);
   money();
}
//==============================biaya tarif====================================//
void biayatarif(){
	gotoxy(45,17);printf("|-----------------------------------------|");
	gotoxy(45,18);printf("| NO |  Golongan tarif   |  Biaya/Kwh     |");
	gotoxy(45,19);printf("|------------------------------------------");
	gotoxy(45,20);printf("| 1. | R-1/TR            |   Rp. 1,200    |");
	gotoxy(45,21);printf("| 2. | R-2/TR            |   Rp. 1,300    |");
	gotoxy(45,22);printf("| 3. | R-3/TR            |   Rp. 1,400    |");
	gotoxy(45,23);printf("| 4. | B-2/TR            |   Rp. 1,500    |");
	gotoxy(45,24);printf("| 5. | B-3/TR            |   Rp. 1,600    |");
	gotoxy(45,25);printf("| 6. | I-3/TR            |   Rp. 1,700    |");
	gotoxy(45,26);printf("|-----------------------------------------|");
}
//===============================electronic====================================//
void barang(){
 	gotoxy(38-5,13);printf("     |--------------------|------------|----------------------|");
	gotoxy(38-5,14);printf("     | NO |  Electronic   |  Jumlah    | lama Pemakaian (jam) |");
	gotoxy(38-5,15);printf("     |--------------------------------------------------------|");
	gotoxy(38-5,16);printf("     | 1. | Lampu         |            |                      |");
	gotoxy(38-5,17);printf("     |--------------------------------------------------------|");
	gotoxy(38-5,18);printf("     | 2. | Televisi      |            |                      |");
   gotoxy(38-5,19);printf("     |--------------------------------------------------------|");
	gotoxy(38-5,20);printf("     | 3. | Setrika       |            |                      |");
   gotoxy(38-5,21);printf("     |--------------------------------------------------------|");
	gotoxy(38-5,22);printf("     | 4. | Mesin Cuci    |            |                      |");
   gotoxy(38-5,23);printf("     |--------------------------------------------------------|");
	gotoxy(38-5,24);printf("     | 5. | Kulkas        |            |                      |");
   gotoxy(38-5,25);printf("     |--------------------------------------------------------|");
	gotoxy(38-5,26);printf("     | 6. | Ac            |            |                      |");
   gotoxy(38-5,27);printf("     |--------------------------------------------------------|");
   gotoxy(38-5,28);printf("     | 7. | Kipas Angin   |            |                      |");
   gotoxy(38-5,29);printf("     |--------------------------------------------------------|");
   gotoxy(38-5,30);printf("     | 8. | Blender       |            |                      |");
   gotoxy(38-5,31);printf("     |--------------------------------------------------------|");
   gotoxy(38-5,32);printf("     | 9. | Komputer      |            |                      |");
   gotoxy(38-5,33);printf("     |--------------------------------------------------------|");
   gotoxy(38-5,34);printf("     | 10.| Mesin Air     |            |                      |");
   gotoxy(38-5,35);printf("     |--------------------------------------------------------|");
   gotoxy(38-5,36);printf("     | 11.| Dispenser     |            |                      |");
   gotoxy(38-5,37);printf("     |--------------------------------------------------------|");
   gotoxy(38-5,38);printf("     | 12.| Rice Cooker   |            |                      |");
	gotoxy(38-5,39);printf("     |--------------------|------------|----------------------|");
lampu();Llampu();televisi();Latv();setrika();Lsetrika();mcuci();Lcuci();kulkas();Lkulkas();ac();Lac();kipas();kipas1();blender();blender1();komputer();komputer1();air();air1();dispenser();dispenser1();nasi();nasi1();
}
//=========== vlidasi angka
bool validasiAngka(char kata[]){
	for(int i=0;kata[i]!=NULL;i++){
   	if(!(kata[i]>='0' && kata[i]<='9')){
      	return true;
      }
   }
	return false;
}
//================================validasi barang==============================///
//===============jumlah lampu
void lampu(){
	char tLampu[30];
   gotoxy(65,16);gets(tLampu);
   i=strlen(tLampu);
   validasiAngka(tLampu);
   if(validasiAngka(tLampu)>0){
   	hapusLampu();error();hapuserror();lampu();
   }else if(i>2){
      hapusLampu();gotoxy(63,16);printf("maks 99");Sleep(500);
      hapusLampu();lampu();
   }else{
   	tamp[0]=atoi(tLampu);gotoxy(65,16);printf("%.0f",tamp[0]);
   }
}
void hapusLampu(){
gotoxy(60,16);printf("           ");
}
//=================lama pakai lampu
void Llampu(){
	char LLampu[30];
   gotoxy(80,16);gets(LLampu);
   i=strlen(LLampu);
   validasiAngka(LLampu);
   if(validasiAngka(LLampu)>0){
   	hapusLLampu();error();hapuserror();Llampu();
   }else if((i>1&&LLampu[0]>'1'&&LLampu[1]>'4')||i>2){
   	hapusLLampu();gotoxy(80,16);printf("maks 24");Sleep(500);
      hapusLLampu();Llampu();
   }else{
      watt[0]=36;tamp[1]=atoi(LLampu);gotoxy(80,16);printf("%.0f",tamp[1]);
	}
}
void hapusLLampu(){
gotoxy(80,16);printf("            ");
}
//=========================jumlah televisi
void televisi(){
	char tTv[30];
   gotoxy(65,18);gets(tTv);
   i=strlen(tTv);
   validasiAngka(tTv);
   if(validasiAngka(tTv)>0){
   	hapusTv();error();hapuserror();televisi();
   }else if(i>2){
   	hapusTv();gotoxy(63,18);printf("maks 99");Sleep(500);
      hapusTv();televisi();
   }else{
      tamp[2]=atoi(tTv);gotoxy(65,18);printf("%.0f",tamp[2]);
   }
}
void hapusTv(){
gotoxy(60,18);printf("           ");
}
//=========================lama tv
void Latv(){
	char Ltv[30];
   gotoxy(80,18);gets(Ltv);
   i=strlen(Ltv);
   validasiAngka(Ltv);
   if(validasiAngka(Ltv)>0){
   	hapusLtv();error();hapuserror();Latv();
   }else if((i>1&&Ltv[0]>'1'&&Ltv[1]>'4')||i>2){
   	hapusLtv();gotoxy(80,18);printf("maks 24");Sleep(500);
      hapusLtv();Latv();
   }else{
      watt[1]=100;tamp[3]=atoi(Ltv);gotoxy(80,18);printf("%.0f",tamp[3]);
   }
}
void hapusLtv(){
gotoxy(80,18);printf("           ");
}
//=====================jumlah setrika
void setrika(){
	char tsetrika[30];
	gotoxy(65,20);gets(tsetrika);
   i=strlen(tsetrika);
   validasiAngka(tsetrika);
   if(validasiAngka(tsetrika)>0){
   	hapussetrika();error();hapuserror();setrika();
   }else if(i>2){
   	hapussetrika();gotoxy(63,20);printf("maks 99");Sleep(500);
      hapussetrika();setrika();
   }else{
   	tamp[4]=atoi(tsetrika);gotoxy(65,20);printf("%.0f",tamp[4]);
 	}
}
void hapussetrika(){
gotoxy(60,20);printf("          ");
}
//=============================lama setrika
void Lsetrika(){
	char Laset[30];
  	gotoxy(80,20);gets(Laset);
   i=strlen(Laset);
	validasiAngka(Laset);
   if(validasiAngka(Laset)>0){
   	hapusLsetrika();error();hapuserror();Lsetrika();
   }else if((i>2&&Laset[0]>'1'&&Laset[1]>'4')||i>2){
   	hapusLsetrika();gotoxy(80,20);printf("maks 24");Sleep(500);
      hapusLsetrika();Lsetrika();
   }else{
   	watt[2]=350;tamp[5]=atoi(Laset);gotoxy(80,20);printf("%.0f",tamp[5]);
   }
}
void hapusLsetrika(){
gotoxy(80,20);printf("            ");
}
//==========================jumlah mesin cuci
void mcuci(){
	char cuci[30];
	gotoxy(65,22);gets(cuci);
   i=strlen(cuci);
   validasiAngka(cuci);
   if(validasiAngka(cuci)>0){
   	hapuscuci();error();hapuserror();mcuci();
   }else if(i>2){
   	hapuscuci();gotoxy(63,22);printf("maks 99");Sleep(500);
      hapuscuci();mcuci();
   }else{
   	tamp[6]=atoi(cuci);gotoxy(65,22);printf("%.0f",tamp[6]);
 	}
}
void hapuscuci(){
gotoxy(60,22);printf("          ");
}
//==========================lama mesin cuci
void Lcuci(){
	char LMC[30];
  	gotoxy(80,22);gets(LMC);
   i=strlen(LMC);
	validasiAngka(LMC);
   if(validasiAngka(LMC)>0){
   	hapcuci();error();hapuserror();Lcuci();
   }else if((i>2&&LMC[0]>'1'&&LMC[1]>'4')||i>2){
   	hapcuci();gotoxy(80,22);printf("maks 24");Sleep(500);
      hapcuci();Lcuci();
   }else{
   	watt[3]=300;tamp[7]=atoi(LMC);gotoxy(80,22);printf("%.0f",tamp[7]);
   }
}
void hapcuci(){
gotoxy(80,22);printf("            ");
}
//==========================jumlah kulkas
void kulkas(){
	char kulkas1[30];
	gotoxy(65,24);gets(kulkas1);
   i=strlen(kulkas1);
   validasiAngka(kulkas1);
   if(validasiAngka(kulkas1)>0){
   	hapuskulkas();error();hapuserror();kulkas();
   }else if(i>2){
   	hapuskulkas();gotoxy(63,24);printf("maks 99");Sleep(500);
      hapuskulkas();kulkas();
   }else{
   	tamp[8]=atoi(kulkas1);gotoxy(65,24);printf("%.0f",tamp[8]);
 	}
}
void hapuskulkas(){
gotoxy(60,24);printf("          ");
}
//==========================lama kulkas
void Lkulkas(){
	char kulkas2[30];
  	gotoxy(80,24);gets(kulkas2);
   i=strlen(kulkas2);
	validasiAngka(kulkas2);
   if(validasiAngka(kulkas2)>0){
   	hapkulkas1();error();hapuserror();Lkulkas();
   }else if((i>2&&kulkas2[0]>'1'&&kulkas2[1]>'4')||i>2){
   	hapkulkas1();gotoxy(80,24);printf("maks 24");Sleep(500);
      hapkulkas1();Lkulkas();
   }else{
   	watt[4]=100;tamp[9]=atoi(kulkas2);gotoxy(80,24);printf("%.0f",tamp[9]);
   }
}
void hapkulkas1(){
gotoxy(80,24);printf("            ");
}
//==========================jumlah ac
void ac(){
	char ac1[30];
	gotoxy(65,26);gets(ac1);
   i=strlen(ac1);
   validasiAngka(ac1);
   if(validasiAngka(ac1)>0){
   	hapusac();error();hapuserror();ac();
   }else if(i>2){
   	hapusac();gotoxy(63,26);printf("maks 99");Sleep(500);
      hapusac();ac();
   }else{
   	tamp[10]=atoi(ac1);gotoxy(65,26);printf("%.0f",tamp[10]);
 	}
}
void hapusac(){
gotoxy(60,26);printf("           ");
}
//==========================lama ac
void Lac(){
	char ac2[30];
  	gotoxy(80,26);gets(ac2);
   i=strlen(ac2);
	validasiAngka(ac2);
   if(validasiAngka(ac2)>0){
   	hapac1();error();hapuserror();Lac();
   }else if((i>2&&ac2[0]>'1'&&ac2[1]>'4')||i>2){
   	hapac1();gotoxy(80,26);printf("maks 24");Sleep(500);
      hapac1();Lac();
   }else{
   	watt[5]=350;tamp[11]=atoi(ac2);gotoxy(80,26);printf("%.0f",tamp[11]);
   }
}
void hapac1(){
gotoxy(80,26);printf("             ");
}
//==========================jumlah kipas angin
void kipas(){
	char kipas1[30];
	gotoxy(65,28);gets(kipas1);
   i=strlen(kipas1);
   validasiAngka(kipas1);
   if(validasiAngka(kipas1)>0){
   	hapuskipas();error();hapuserror();kipas();
   }else if(i>2){
   	hapuskipas();gotoxy(63,28);printf("maks 99");Sleep(500);
      hapuskipas();kipas();
   }else{
   	tamp[12]=atoi(kipas1);gotoxy(65,28);printf("%.0f",tamp[12]);
 	}
}
void hapuskipas(){
gotoxy(60,28);printf("           ");
}
//==========================lama kipas
void kipas1(){
	char kipas2[30];
  	gotoxy(80,28);gets(kipas2);
   i=strlen(kipas2);
	validasiAngka(kipas2);
   if(validasiAngka(kipas2)>0){
   	hapuskipas1();error();hapuserror();kipas1();
   }else if((i>2&&kipas2[0]>'1'&&kipas2[1]>'4')||i>2){
   	hapuskipas1();gotoxy(80,28);printf("maks 24");Sleep(500);
      hapuskipas1();kipas1();
   }else{
   	watt[6]=100;tamp[13]=atoi(kipas2);gotoxy(80,28);printf("%.0f",tamp[13]);
   }
}
void hapuskipas1(){
gotoxy(80,28);printf("             ");
}
//=============================jumlah blender
void blender(){
	char blender1[30];
	gotoxy(65,30);gets(blender1);
   i=strlen(blender1);
   validasiAngka(blender1);
   if(validasiAngka(blender1)>0){
   	hapusblender();error();hapuserror();blender();
   }else if(i>2){
   	hapusblender();gotoxy(63,30);printf("maks 99");Sleep(500);
      hapusblender();blender();
   }else{
   	tamp[14]=atoi(blender1);gotoxy(65,30);printf("%.0f",tamp[14]);
 	}
}
void hapusblender(){
gotoxy(60,30);printf("            ");
}
//=============================lama blender
void blender1(){
	char blender2[30];
  	gotoxy(80,30);gets(blender2);
   i=strlen(blender2);
	validasiAngka(blender2);
   if(validasiAngka(blender2)>0){
   	hapusblender1();error();hapuserror();blender1();
   }else if((i>2&&blender2[0]>'1'&&blender2[1]>'4')||i>2){
   	hapusblender1();gotoxy(80,30);printf("maks 24");Sleep(500);
      hapusblender1();blender1();
   }else{
   	watt[7]=250;tamp[15]=atoi(blender2);gotoxy(80,30);printf("%.0f",tamp[15]);
   }
}
void hapusblender1(){
gotoxy(80,30);printf("             ");
}
//===========================jumlah komputer
void komputer(){
	char kom[30];
	gotoxy(65,32);gets(kom);
   i=strlen(kom);
   validasiAngka(kom);
   if(validasiAngka(kom)>0){
   	hapuskom();error();hapuserror();blender();
   }else if(i>2){
   	hapuskom();gotoxy(63,32);printf("maks 99");Sleep(500);
      hapuskom();komputer();
   }else{
   	tamp[16]=atoi(kom);gotoxy(65,32);printf("%.0f",tamp[16]);
 	}
}
void hapuskom(){
gotoxy(60,32);printf("           ");
}
//==========================lama komputer
void komputer1(){
	char kom1[30];
  	gotoxy(80,32);gets(kom1);
   i=strlen(kom1);
	validasiAngka(kom1);
   if(validasiAngka(kom1)>0){
   	hapuskom1();error();hapuserror();komputer1();
   }else if((i>2&&kom1[0]>'1'&&kom1[1]>'4')||i>2){
   	hapuskom1();gotoxy(80,32);printf("maks 24");Sleep(500);
      hapuskom1();komputer1();
   }else{
   	watt[8]=100;tamp[17]=atoi(kom1);gotoxy(80,32);printf("%.0f",tamp[17]);
   }
}
void hapuskom1(){
gotoxy(80,32);printf("             ");
}
//==============================jumlah mesin air
void air(){
	char mair[30];
	gotoxy(65,34);gets(mair);
   i=strlen(mair);
   validasiAngka(mair);
   if(validasiAngka(mair)>0){
   	hapusair();error();hapuserror();air();
   }else if(i>2){
   	hapusair();gotoxy(63,34);printf("maks 99");Sleep(500);
      hapusair();air();
   }else{
   	tamp[18]=atoi(mair);gotoxy(65,34);printf("%.0f",tamp[18]);
 	}
}
void hapusair(){
gotoxy(60,34);printf("           ");
}
//==============================lama mesin air
void air1(){
	char air2[30];
  	gotoxy(80,34);gets(air2);
   i=strlen(air2);
	validasiAngka(air2);
   if(validasiAngka(air2)>0){
   	hapusair1();error();hapuserror();air1();
   }else if((i>2&&air2[0]>'1'&&air2[1]>'4')||i>2){
   	hapusair1();gotoxy(80,34);printf("maks 24");Sleep(500);
      hapusair1();air1();
   }else{
   	watt[9]=280;tamp[19]=atoi(air2);gotoxy(80,34);printf("%.0f",tamp[19]);
   }
}
void hapusair1(){
gotoxy(80,34);printf("             ");
}
//=============================jumlah dispenser
void dispenser(){
	char minum[30];
	gotoxy(65,36);gets(minum);
   i=strlen(minum);
   validasiAngka(minum);
   if(validasiAngka(minum)>0){
   	hapusdis();error();hapuserror();dispenser();
   }else if(i>2){
   	hapusdis();gotoxy(63,36);printf("maks 99");Sleep(500);
      hapusdis();dispenser();
   }else{
   	tamp[20]=atoi(minum);gotoxy(65,36);printf("%.0f",tamp[20]);
 	}
}
void hapusdis(){
gotoxy(60,36);printf("           ");
}
//===========================lama dispenser
void dispenser1(){
	char dis2[30];
  	gotoxy(80,36);gets(dis2);
   i=strlen(dis2);
	validasiAngka(dis2);
   if(validasiAngka(dis2)>0){
   	hapusdis1();error();hapuserror();dispenser1();
   }else if((i>2&&dis2[0]>'1'&&dis2[1]>'4')||i>2){
   	hapusdis1();gotoxy(80,36);printf("maks 24");Sleep(500);
      hapusdis1();dispenser1();
   }else{
   	watt[10]=100;tamp[21]=atoi(dis2);gotoxy(80,36);printf("%.0f",tamp[21]);
   }
}
void hapusdis1(){
gotoxy(80,36);printf("             ");
}
//==============================jumlah rice cooker
void nasi(){
	char nasi1[30];
	gotoxy(65,38);gets(nasi1);
   i=strlen(nasi1);
   validasiAngka(nasi1);
   if(validasiAngka(nasi1)>0){
   	hapusnasi();error();hapuserror();nasi();
   }else if(i>2){
   	hapusnasi();gotoxy(63,38);printf("maks 99");Sleep(500);
      hapusnasi();nasi();
   }else{
   	tamp[22]=atoi(nasi1);gotoxy(65,38);printf("%.0f",tamp[22]);
 	}
}
void hapusnasi(){
gotoxy(60,38);printf("           ");
}
//==============================lama nasi
void nasi1(){
	char nasi2[30];
  	gotoxy(80,38);gets(nasi2);
   i=strlen(nasi2);
	validasiAngka(nasi2);
   if(validasiAngka(nasi2)>0){
   	hapusnsai1();error();hapuserror();nasi1();
   }else if((i>2&&nasi2[0]>'1'&&nasi2[1]>'4')||i>2){
   	hapusnsai1();gotoxy(80,38);printf("maks 24");Sleep(500);
      hapusnsai1();nasi1();
   }else{
   	watt[11]=200;tamp[23]=atoi(nasi2);gotoxy(80,38);printf("%.0f",tamp[23]);
   }
}
void hapusnsai1(){
gotoxy(80,38);printf("             ");
}
//==============================daftar========================================//
void daftar(){
   for(int c=6;c<=20;c++){
   	textcolor(8);
   	gotoxy(c,11);cprintf("%c",219);
   	gotoxy(c,12);cprintf("%c",219);
   	gotoxy(c,13);cprintf("%c",219);
   	gotoxy(c,14);cprintf("%c",219);
   	gotoxy(c,15);cprintf("%c",219);
      textcolor(11);
   	gotoxy(c,17);cprintf("%c",219);
   	gotoxy(c,18);cprintf("%c",219);
   	gotoxy(c,19);cprintf("%c",219);
   	gotoxy(c,20);cprintf("%c",219);
   	gotoxy(c,21);cprintf("%c",219);
      }
   for(int c=8;c<=18;c++){
      textcolor(15);
   	gotoxy(c,12);cprintf("%c",219);
   	gotoxy(c,13);cprintf("%c",219);
   	gotoxy(c,14);cprintf("%c",219);
   	gotoxy(c,18);cprintf("%c",219);
   	gotoxy(c,19);cprintf("%c",219);
   	gotoxy(c,20);cprintf("%c",219);
   }
   textcolor(16);
	gotoxy(10,13);cprintf("1,LOGIN");
   gotoxy(9,19);cprintf("2.DAFTAR");
	for(int c=45;c<=72;c++){
   	gotoxy(c,15);cprintf("%c",196);
   	gotoxy(c,20);cprintf("%c",196);
      gotoxy(c,25);cprintf("%c",196);
   	gotoxy(c,30);cprintf("%c",196);
   }
   textcolor(0);
   gotoxy(35,14);cprintf("NAMA    |:");
   gotoxy(35,19);cprintf("NO.KTP  |:");
   gotoxy(35,24);cprintf("USERNAME|:");
   gotoxy(35,29);cprintf("PASSWORD|:");
}
//=============================LAYAR 1========================================//
void layar1(){
	system("color 70");
   textbackground(7);
	for(int d=40;d<=68;d++){
   		textcolor(11);
   		gotoxy(d,13);cprintf("%c",219);
      	gotoxy(d,15);cprintf("%c",219);
      	gotoxy(d,17);cprintf("%c",219);
   }petir();

   gotoxy(46,20);cprintf("Republik Indonesia");
   textbackground(7);
	for(int d=34;d<=72;d++){
		for(int c=30;c<=35;c++){
   		textcolor(15);
   		gotoxy(d,c);cprintf("%c",219);
		}
	}
   for(int d=32;d<=70;d++){
		for(int c=31;c<=36;c++){
   		textcolor(11);
   		gotoxy(d,c);cprintf("%c",219);
		}
	}
   for(int c=50;c<=68;c++){
  		textcolor(15);
  		gotoxy(c,33);cprintf("%c",219);
	}
   textcolor(0);
	gotoxy(37,33);cprintf("Masukan Kode|:");
	char kode[20];
	gotoxy(51,33);gets(kode);
	if(strcmp(kode,"danil")==0){
   	clrscr();
	}else{
   	cprintf("%c",7);
   	for(int a=-10;a<=6;a++){
         textcolor(a);
      	gotoxy(46,27);cprintf("Kode salah!");Sleep(100);
      }
 		clrscr();
 		layar1();
	}
}
//=================================loading====================================//
void loading(){
	int b=0;
   textcolor(16);
	gotoxy(50,32);cprintf("LOADING");
	for(int a=1;a<=100;a++){
   	textcolor(16);
		gotoxy(66,33);cprintf("%d%",a);Sleep(50);
      if(a==100){clrscr();}
   	if(a%4==0){
      	b++;textcolor(11);
			gotoxy(40+b,33);cprintf("%c",219);Sleep(50);
		}
	}
}
//================================tampilan 2==================================//
void tampilan2(){
	for(int d=36;d<=74;d++){
		for(int c=13;c<=25;c++){
   		textcolor(8);
   		gotoxy(d,c);cprintf("%c",219);Sleep(0.90);
		}
	}
	for(int d=34;d<=72;d++){
		for(int c=14;c<=26;c++){
   		textcolor(15);
   		gotoxy(d,c);cprintf("%c",219);Sleep(0.90);
		}
	}
	for(int c=15;c<=25;c++){
   	textcolor(11);
		gotoxy(36,c);cprintf("%c",219);Sleep(10);
   	gotoxy(37,c);cprintf("%c",219);Sleep(10);
   	gotoxy(38,c);cprintf("%c",219);Sleep(10);
  		gotoxy(46,c);cprintf("%c",219);Sleep(10);
   	gotoxy(47,c);cprintf("%c",219);Sleep(10);
   	gotoxy(48,c);cprintf("%c",219);Sleep(10);
  		gotoxy(56,c);cprintf("%c",219);Sleep(10);
   	gotoxy(57,c);cprintf("%c",219);Sleep(10);
   	gotoxy(58,c);cprintf("%c",219);Sleep(10);
	}for(int c=36;c<=56;c++){
		gotoxy(c,15);cprintf("%c",219);Sleep(10);
   	gotoxy(c,16);cprintf("%c",219);Sleep(10);
	}for(int c=57;c<=70;c++){
   	gotoxy(c,15);cprintf("%c",219);Sleep(10);
   	gotoxy(c,16);cprintf("%c",219);Sleep(10);
   	gotoxy(c,20);cprintf("%c",219);Sleep(10);
   	gotoxy(c,21);cprintf("%c",219);Sleep(10);
	}for(int c=15;c<=20;c++){
		gotoxy(68,c);cprintf("%c",219);Sleep(10);
   	gotoxy(69,c);cprintf("%c",219);Sleep(10);
   	gotoxy(70,c);cprintf("%c",219);Sleep(10);
	}textcolor(16);
	gotoxy(60,23);cprintf("  MOBILE ");
	gotoxy(61,24);cprintf("   PLN   ");
	gotoxy(62,25);cprintf("         ");
	gotoxy(38,11);cprintf("Selamat Datang di Program MOBILE PLN");
	gotoxy(42,28);cprintf("Copy Right by Rahma Danil");
	for(int a=41;a<=64;a++){
		textcolor(8);
		gotoxy(a,33);cprintf("%c",219);
   }
	loading();
	clrscr();
}
//============================petir=============================//
void petir(){
	textcolor(12);
	gotoxy(15+42,9);cprintf("%c",220);
	gotoxy(13+42,10);cprintf("%c%c",219,219);
	gotoxy(11+42,11);cprintf("%c%c%c",219,219,219);
	gotoxy(9+42,12);cprintf("%c%c%c%c",219,219,219,219);
	gotoxy(7+42,13);cprintf("%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219);
	gotoxy(5+42,14);cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219);
	gotoxy(12+42,15);cprintf("%c%c%c%c%c",219,219,219,219,219);
	gotoxy(11+42,16);cprintf("%c%c%c%c",219,219,219,219);
	gotoxy(10+42,17);cprintf("%c%c%c",219,219,219);
	gotoxy(9+42,18);cprintf("%c%c",219,219);
	gotoxy(8+42,19);cprintf("%c",223);
}
//===========================ikon2===============================//
void ikon2(){
	for(int c=6;c<=20;c++){
   	textcolor(11);
   	gotoxy(c,11);cprintf("%c",219);
   	gotoxy(c,12);cprintf("%c",219);
   	gotoxy(c,13);cprintf("%c",219);
   	gotoxy(c,14);cprintf("%c",219);
   	gotoxy(c,15);cprintf("%c",219);
      textcolor(8);
   	gotoxy(c,17);cprintf("%c",219);
   	gotoxy(c,18);cprintf("%c",219);
   	gotoxy(c,19);cprintf("%c",219);
   	gotoxy(c,20);cprintf("%c",219);
   	gotoxy(c,21);cprintf("%c",219);
   	gotoxy(c,23);cprintf("%c",219);
   	gotoxy(c,24);cprintf("%c",219);
   	gotoxy(c,25);cprintf("%c",219);
   	gotoxy(c,26);cprintf("%c",219);
   	gotoxy(c,27);cprintf("%c",219);
   }
   for(int c=8;c<=18;c++){
      textcolor(15);
   	gotoxy(c,12);cprintf("%c",219);
   	gotoxy(c,13);cprintf("%c",219);
   	gotoxy(c,14);cprintf("%c",219);
   	gotoxy(c,18);cprintf("%c",219);
   	gotoxy(c,19);cprintf("%c",219);
   	gotoxy(c,20);cprintf("%c",219);
   	gotoxy(c,24);cprintf("%c",219);
   	gotoxy(c,25);cprintf("%c",219);
   	gotoxy(c,26);cprintf("%c",219);
   }
   for(int c=6;c<=18;c++){
   	gotoxy(c,36);cprintf("%c",219);
   	gotoxy(c,37);cprintf("%c",219);
   	gotoxy(c,38);cprintf("%c",219);
   }
   textcolor(16);
   gotoxy(8,37);cprintf("PILIH |:");
	gotoxy(10,13);cprintf("1,LOGIN");
   gotoxy(9,
   19);cprintf("2.DAFTAR");
   gotoxy(9,25);cprintf("3.KEMBALI");
   gotoxy(50,38);cprintf("TEKAN ENTER UNTUK MASUK!");
}
//===================================validasi nama================================//
void namadaftar(){
	gotoxy(46,14);gets(nama[index]);
   int Z=0,j=0;
	i=strlen(nama[index]);
    while(j<i){
		if(nama[index][j]==' '||nama[index][j]>='a'&&nama[index][j]<='z'||nama[index][j]>='A'&&nama[index][j]<='Z'){
        	Z++;
       }
    	j++;
    }
     if(nama[index][0]==NULL||nama[index][0]==' '||nama[index][1]==' '||nama[index][2]==' '){

    	hapusnama();
      gotoxy(46,14);printf("invalid");Sleep(500);
      hapusnama();namadaftar();
    }else if(j==Z&&i<3){
      gotoxy(46,14);printf("min 3 huruf");Sleep(500);
      hapusnama();namadaftar();
    }else if(j==Z&&i>25){
      hapusnama();
      gotoxy(46,14);printf("max 25 huruf");Sleep(500);
      hapusnama();namadaftar();
    }else if(j==Z){
      gotoxy(46,14);printf("%s",nama[index]);
    }else{
      hapusnama();
      gotoxy(46,14);printf("invalid");Sleep(500);
      hapusnama();namadaftar();
    }
}
//===========================validasi ktp========================//
void daftar_ktp(){
   gotoxy(46,19);gets(ktp[index]);
   int Z=0,j=0;
   	i=strlen(ktp[index]);
    while(j<i){
		if(ktp[index][j]>='0'&&ktp[index][j]<='9'){
        	Z++;
        }
    	j++;
    }
    if(ktp[index][0]==NULL||ktp[index][0]==' '){
      hapusktp();
    	gotoxy(46,19);printf("invalid");Sleep(500);
      hapusktp();daftar_ktp();
    }
    else if(j==Z&&i==14){
    	gotoxy(46,19);printf("%s",ktp[index]);
    }else if(j==Z&&i<14||i>14){
    	hapusktp();
      gotoxy(46,19);printf("isi 14 digit");Sleep(500);
      hapusktp();daftar_ktp();
    }else{
    	hapusktp();
    	gotoxy(46,19);printf("invalid");Sleep(500);
      hapusktp();daftar_ktp();
    }
 }
//=========================validasi username==================================//
void valuser(){
   gotoxy(46,24);gets(user[data]);
   int Z=0,j=0;
   	i=strlen(user[data]);
    while(j<i){
		if(user[data][j]>='0'&&user[data][j]<='9'||user[data][j]>='a'&&user[data][j]<='z'||user[data][j]>='A'&&user[data][j]<='Z'){
        	Z++;
        }
    	j++;
    }if(j==Z&&i>5&&i<25){
    	gotoxy(46,24);printf("%s",user[data]);
    }else if(user[data][0]==NULL||user[data][j]==' '){
      hapususer();
    	gotoxy(46,24);printf("invalid");Sleep(500);
     	hapususer();valuser();
    }else if(j==Z&&i>25){
    	hapususer();
      gotoxy(46,24);printf("max 25 digit");Sleep(500);
      hapususer();valuser();

    }else if(j==Z){
    	hapususer();
      gotoxy(46,24);printf("min 6 digit");Sleep(500);
      hapususer();valuser();
    }else{
    	hapususer();
    	gotoxy(46,24);printf("invalid");Sleep(500);
      hapususer();valuser();
    }
}
//================================validasi pasword============================//
void valpass(){
gotoxy(46,29);gets(pass[data]);
	int Z=0,j=0;
   	i=strlen(pass[data]);
    while(j<i){
		if(pass[data][j]>='0'&&pass[data][j]<='9'||pass[data][j]>='a'&&pass[data][j]<='z'||pass[data][j]>='A'&&pass[data][j]<='Z'){
        	Z++;
        }
    	j++;
    }
    if(pass[data][0]==NULL||pass[data][0]==' '){
     hapuspass();
    	gotoxy(46,29);printf("invalid");Sleep(500);
		hapuspass();valpass();
    }else if(j==Z&&i>5&&i<25){
    	gotoxy(46,29);printf("%s",pass[data]);
    }else if(j==Z&&i>25){
    	hapuspass();
      gotoxy(46,29);printf("max 25 digit");Sleep(500);
      hapuspass();valpass();

    }else if(j==Z){
    	hapuspass();
      gotoxy(46,29);printf("min 6 digit");Sleep(500);
      hapuspass();valpass();
    }else{
    	hapuspass();
    	gotoxy(46,29);printf("invalid");Sleep(500);
      hapuspass();valpass();
    }
    data++;
}
//============================tentang kami======================//
void tentang(){
textcolor(6);
gotoxy(30,14);cprintf("PROFIL PERUSAHAAN");
gotoxy(30,16);cprintf("Visi");
gotoxy(30,20);cprintf("Misi");
gotoxy(30,27);cprintf("Motto");
gotoxy(30,30);cprintf("Maksud dan Tujuan perseroan");
textcolor(0);
gotoxy(30,17);cprintf("1)Diakui sebagai Perusahaan Kelas Dunia yang Bertumbuh kembang,");
gotoxy(30,18);cprintf("2)Unggul dan terpercaya dengan bertumpu pada Potensi Insani.");
gotoxy(30,21);cprintf("1)Menjalankan bisnis kelistrikan dan bidang lain yang terkait,berorientasi");
gotoxy(31,22);cprintf("pada kepuasan pelanggan, anggota perusahaan dan pemegang saham.");
gotoxy(30,23);cprintf("2)Menjadikan tenaga listrik untuk meningkatkan kualitas kehidupan masyarakat");
gotoxy(30,24);cprintf("3)Mengupayakan agar tenaga listrik menjadi pendorong kegiatan ekonomi.");
gotoxy(30,25);cprintf("4)Menjalankan kegiatan usaha yang berwawasan lingkungan.");
gotoxy(30,28);cprintf("Listrik untuk Kehidupan yang Lebih Baik");
gotoxy(30,31);cprintf("Untuk menyelenggarakan usaha penyediaan tenaga listrik bagi kepentingan umum");
gotoxy(30,32);cprintf("dalam jumlah dan mutu yang memadai serta memupuk keuntungan dan melaksanakan");
gotoxy(30,33);cprintf("penugasan Pemerintah di bidang ketenagalistrikan dalam rangka menunjang");
gotoxy(30,34);cprintf("pembangunan dengan menerapkan prinsip-prinsip Perseroan Terbatas.");
}
//============================ikon3==============================//
void ikon3(){
	for(int c=4;c<=20;c++){
		textcolor(8);
		gotoxy(c,11);cprintf("%c",219);
   	gotoxy(c,12);cprintf("%c",219);
   	gotoxy(c,13);cprintf("%c",219);
   	gotoxy(c,14);cprintf("%c",219);
   	gotoxy(c,15);cprintf("%c",219);
      textcolor(11);
   	gotoxy(c,17);cprintf("%c",219);
   	gotoxy(c,18);cprintf("%c",219);
   	gotoxy(c,19);cprintf("%c",219);
   	gotoxy(c,20);cprintf("%c",219);
   	gotoxy(c,21);cprintf("%c",219);
      textcolor(8);
   	gotoxy(c,23);cprintf("%c",219);
   	gotoxy(c,24);cprintf("%c",219);
   	gotoxy(c,25);cprintf("%c",219);
   	gotoxy(c,26);cprintf("%c",219);
   	gotoxy(c,27);cprintf("%c",219);
   	gotoxy(c,29);cprintf("%c",219);
   	gotoxy(c,30);cprintf("%c",219);
   	gotoxy(c,31);cprintf("%c",219);
   	gotoxy(c,32);cprintf("%c",219);
   	gotoxy(c,33);cprintf("%c",219);
	}
	for(int c=6;c<=18;c++){
		textcolor(15);
   	gotoxy(c,12);cprintf("%c",219);
   	gotoxy(c,13);cprintf("%c",219);
   	gotoxy(c,14);cprintf("%c",219);
   	gotoxy(c,18);cprintf("%c",219);
   	gotoxy(c,19);cprintf("%c",219);
   	gotoxy(c,20);cprintf("%c",219);
   	gotoxy(c,24);cprintf("%c",219);
   	gotoxy(c,25);cprintf("%c",219);
   	gotoxy(c,26);cprintf("%c",219);
   	gotoxy(c,30);cprintf("%c",219);
   	gotoxy(c,31);cprintf("%c",219);
   	gotoxy(c,32);cprintf("%c",219);
      gotoxy(c,36);cprintf("%c",219);
   	gotoxy(c,37);cprintf("%c",219);
   	gotoxy(c,38);cprintf("%c",219);
	}
	textcolor(16);
   gotoxy(8,37);printf("PILIH |:");
	gotoxy(9,13);cprintf("1.MENU");
   gotoxy(8,19);cprintf("2.TENTANG");
   gotoxy(8,25);cprintf("3.PROFIL");
   gotoxy(8,31);cprintf("4.KELUAR");
}
//===========================profil=============================//
void profil(){
gotoxy(30,14);printf("BIODATA DIRI");
gotoxy(30,16);printf("Nama                : Rahma Danil");
gotoxy(30,18);printf("Tempat,Tanggal Lahir: Kampung Pinang,31-Juli-2000");
gotoxy(30,20);printf("Perguruan Tinggi    : Universitas Nasional Pasim");
gotoxy(30,22);printf("Jurusan             : D3 Manajemen Informatika");
gotoxy(30,24);printf("Fakultas            : Ilmu Komputer");
gotoxy(30,28);printf("Pembimbing          : Muhammad Iqbal(17)");
gotoxy(30,30);printf("Status              : Allhamdulillah");
gotoxy(30,32);printf("Instagram           : Rohma Danil15");
textcolor(12);
gotoxy(30,26);cprintf("Motto               : Optimis,Ikhtiar,Tawakal");
}
//===========================ikon 4=============================//
void ikon4(){
	for(int c=4;c<=20;c++){
		textcolor(8);
		gotoxy(c,11);cprintf("%c",219);
   	gotoxy(c,12);cprintf("%c",219);
   	gotoxy(c,13);cprintf("%c",219);
   	gotoxy(c,14);cprintf("%c",219);
   	gotoxy(c,15);cprintf("%c",219);
   	gotoxy(c,17);cprintf("%c",219);
   	gotoxy(c,18);cprintf("%c",219);
   	gotoxy(c,19);cprintf("%c",219);
   	gotoxy(c,20);cprintf("%c",219);
   	gotoxy(c,21);cprintf("%c",219);
      gotoxy(c,29);cprintf("%c",219);
   	gotoxy(c,30);cprintf("%c",219);
   	gotoxy(c,31);cprintf("%c",219);
   	gotoxy(c,32);cprintf("%c",219);
   	gotoxy(c,33);cprintf("%c",219);
      textcolor(11);
   	gotoxy(c,23);cprintf("%c",219);
   	gotoxy(c,24);cprintf("%c",219);
   	gotoxy(c,25);cprintf("%c",219);
   	gotoxy(c,26);cprintf("%c",219);
   	gotoxy(c,27);cprintf("%c",219);
	}
	for(int c=6;c<=18;c++){
		textcolor(15);
   	gotoxy(c,12);cprintf("%c",219);
   	gotoxy(c,13);cprintf("%c",219);
   	gotoxy(c,14);cprintf("%c",219);
   	gotoxy(c,18);cprintf("%c",219);
   	gotoxy(c,19);cprintf("%c",219);
   	gotoxy(c,20);cprintf("%c",219);
   	gotoxy(c,24);cprintf("%c",219);
   	gotoxy(c,25);cprintf("%c",219);
   	gotoxy(c,26);cprintf("%c",219);
   	gotoxy(c,30);cprintf("%c",219);
   	gotoxy(c,31);cprintf("%c",219);
   	gotoxy(c,32);cprintf("%c",219);
      gotoxy(c,36);cprintf("%c",219);
   	gotoxy(c,37);cprintf("%c",219);
   	gotoxy(c,38);cprintf("%c",219);
	}
	textcolor(16);
   gotoxy(8,37);printf("PILIH |:");
	gotoxy(9,13);cprintf("1.MENU");
   gotoxy(8,19);cprintf("2.TENTANG");
   gotoxy(8,25);cprintf("3.PROFIL");
   gotoxy(8,31);cprintf("4.KELUAR");
}
//==========================invalid=================================//
void invalid(){
   textcolor(12);
	cprintf("%c",7);
   gotoxy(60,40);cprintf("MASUKAN INVALID!");Sleep(500);
}
void hapusvalid(){
   gotoxy(60,40);printf("                            ");
}
//==========================void hapus nama=======================//
void hapusnama(){
gotoxy(46,14);printf("                                                        ");
}
void hapusktp(){
gotoxy(46,19);printf("                                                       ");
}
void hapususer(){
gotoxy(46,24);printf("                                                       ");
}

void hapuspass(){
gotoxy(46,29);printf("                                                       ");
}
//=========================ERROR================================
void error(){
	textcolor(12);
	gotoxy(8,9+2);cprintf("%c%c%c%c%c",219,219,219,219,219);
	gotoxy(8,10+2);cprintf("%c           ",219);
	gotoxy(8,11+2);cprintf("%c%c%c%c%c",219,219,219,219,219);
	gotoxy(8,12+2);cprintf("%c           ",219);
	gotoxy(8,13+2);cprintf("%c%c%c%c%c ",219,219,219,219,219);
	gotoxy(8,15+2);cprintf("%c%c%c%c%c ",219,219,219,219,219);
	gotoxy(8,16+2);cprintf("%c   %c     ",219,219 );
	gotoxy(8,17+2);cprintf("%c%c%c%c%c%c%c ",219,219,219,219,219,219,219);
	gotoxy(8,18+2);cprintf("%c     %c       ",219,219);
	gotoxy(8,19+2);cprintf("%c     %c      ",219,219);
	gotoxy(8,21+2);cprintf("%c%c%c%c%c  ",219,219,219,219,219);
	gotoxy(8,22+2);cprintf("%c   %c     ",219,219);
	gotoxy(8,23+2);cprintf("%c%c%c%c%c%c%c  ",219,219,219,219,219,219,219,219,219);
	gotoxy(8,24+2);cprintf("%c     %c        ",219,219);
	gotoxy(8,25+2);cprintf("%c     %c       ",219,219);
	gotoxy(8,27+2);cprintf("%c%c%c%c%c  ",219,219,219,219,219);
	gotoxy(8,28+2);cprintf("%c   %c      ",219,219);
	gotoxy(8,29+2);cprintf("%c   %c      ",219,219);
	gotoxy(8,30+2);cprintf("%c   %c      ",219,219);
	gotoxy(8,31+2);cprintf("%c%c%c%c%c  ",219,219,219,219,219);
	gotoxy(8,33+2);cprintf("%c%c%c%c%c   ",219,219,219,219,219);
	gotoxy(8,34+2);cprintf("%c   %c      ",219,219);
	gotoxy(8,35+2);cprintf("%c%c%c%c%c%c%c    ",219,219,219,219,219,219,219);
	gotoxy(8,36+2);cprintf("%c     %c          ",219,219);
	gotoxy(8,37+2);cprintf("%c     %c         ",219,219);Sleep(650);
}
//=========================HAPUS ERROR
void hapuserror(){ printf("%c",7);
	textcolor(12);
	gotoxy(8,9+2);cprintf("               ");
	gotoxy(8,10+2);cprintf("              ");
	gotoxy(8,11+2);cprintf("              ");
	gotoxy(8,12+2);cprintf("              ");
	gotoxy(8,13+2);cprintf("              ");
	gotoxy(8,15+2);cprintf("              ");
	gotoxy(8,16+2);cprintf("              ");
	gotoxy(8,17+2);cprintf("              ");
	gotoxy(8,18+2);cprintf("              ");
	gotoxy(8,19+2);cprintf("              ");
	gotoxy(8,21+2);cprintf("              ");
	gotoxy(8,22+2);cprintf("              ");
	gotoxy(8,23+2);cprintf("              ");
	gotoxy(8,24+2);cprintf("              ");
	gotoxy(8,25+2);cprintf("              ");
	gotoxy(8,27+2);cprintf("              ");
	gotoxy(8,28+2);cprintf("              ");
	gotoxy(8,29+2);cprintf("              ");
	gotoxy(8,30+2);cprintf("              ");
	gotoxy(8,31+2);cprintf("              ");
	gotoxy(8,33+2);cprintf("              ");
	gotoxy(8,34+2);cprintf("              ");
	gotoxy(8,35+2);cprintf("              ");
	gotoxy(8,36+2);cprintf("              ");
	gotoxy(8,37+2);cprintf("              ");
}
//=============================Pilih tarif
void tarif(){
	daya=((((tamp[0]*tamp[1])*watt[0]))+(((tamp[2]*tamp[3])*watt[1]))+(((tamp[4]*tamp[5])*watt[2]))+(((tamp[6]*tamp[7])*watt[3]))+(((tamp[8]*tamp[9])*watt[4]))+(((tamp[10]*tamp[11])*watt[5]))+(((tamp[12]*tamp[13])*watt[6]))+(((tamp[14]*tamp[15])*watt[7]))+(((tamp[16]*tamp[17])*watt[8]))+(((tamp[18]*tamp[19])*watt[9]))+(((tamp[20]*tamp[21])*watt[10]))+(((tamp[22]*tamp[23])*watt[11])))/1000;
	daya=daya*30;
	char klik;
   gotoxy(17,31);klik=getche();
   gotoxy(17,31);printf("%c",klik);Sleep(400);
   if(klik=='1'){
   	svTarif=1200;
      uang=svTarif*daya;
      strcpy(meter,"R-1/TR");
   }else if(klik=='2'){
     svTarif=1300;
     uang=svTarif*daya;
     strcpy(meter,"R-2/TR");
   }else if(klik=='3'){
     svTarif=1400;
     uang=svTarif*daya;
     strcpy(meter,"R-3/TR");
   }else if(klik=='4'){
     svTarif=1500;
     uang=svTarif*daya;
     strcpy(meter,"B-2/TR");
   }else if(klik=='5'){
   	svTarif=1600;
      uang=svTarif*daya;
      strcpy(meter,"B-3/TR");
   }else if(klik=='6'){
   	svTarif=1700;
      uang=svTarif*daya;
      strcpy(meter,"I-3/TR");
   }else{
    tarif();
   }
}
void kotak(){
	for(int c=6;c<=18;c++){
    textcolor(15);
    gotoxy(c,30);cprintf("%c",219);
    gotoxy(c,31);cprintf("%c",219);
    gotoxy(c,32);cprintf("%c",219);
    }textcolor(0);
    gotoxy(8,31);cprintf("PILIH|:");
}
//===========================bayar
void money(){
char enter;
   gotoxy(64,26);gets(duit);
    if(uang==0){

     gotoxy(64,30);printf("SUDAH BAYAR");
     hapusmoney();gotoxy(64,26);printf("             ");Sleep(500);
     gotoxy(50,40);printf(" TEKAN ENTER UNTUK KEMBALI!");
     getch();
     gotoxy(50,40);printf("                            ");
     enter=getch();
      if(enter==13){
      	 pilihan3();
     	}
     money();
    }
   int Z=0,j=0;
   	i=strlen(duit);
    while(j<i){
		if(duit[j]>='0'&&duit[j]<='9'){
        	Z++;
        }
    	j++;
    }
    if(duit[0]==NULL||duit[0]==' '){
      hapusmoney();
    	gotoxy(64,26);printf("invalid");Sleep(500);
      hapusmoney();money();
   }else if(j>Z){
    	hapusmoney();gotoxy(64,26);printf("invalid");Sleep(500);
      hapusmoney();money();
   }else if(i>9){
    	hapusmoney();gotoxy(64,26);printf("maks 9 digit");Sleep(500);
      hapusmoney();money();
   }else if(j==Z){
    	dolar[0]=atoi(duit);gotoxy(64,26);printf("%d",dolar[0]);
   }else{
    	hapusmoney();gotoxy(64,26);printf("invalid");Sleep(500);
      hapusmoney();money();
    }if(dolar[0]<uang){
    uang3=uang-dolar[0];
    textcolor(12);
    gotoxy(64,26);cprintf("UANG MINIMAL PAS!");Sleep(1500);
     hapusmoney();money();
    }else if(dolar[0]>uang){
    uang2=dolar[0]-uang;
    uang=0;daya=0;
    gotoxy(64,28);printf("Rp.%d",uang2);
    gotoxy(64,30);printf("LUNAS");
    }else if(dolar[0]==uang){
     gotoxy(64,28);printf("0");
     uang=0;daya=0;
     gotoxy(64,30);printf("LUNAS");
    }
 }
void hapusmoney(){
gotoxy(64,26);printf("                                    ");
}
//=========================== main ============================//
main(){
layar1();tampilan2();layar2();ikon();kata();pilihan();
getch();
}