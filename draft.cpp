#include<iostream>
#include<fstream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ofstream;
using std::ifstream;
using std::ios;

void interface();
void daftar();
void daftaremail();
void daftartelepon();
void masuk();
void masukemail();
void masuktelepon();
void lupa();
void close();
void berhasil();
void utama();
void undangan_baru();
void daftar_undangan();
void islam();
void kristen()

int main(){
	interface();
	int n;
	cin >> n;
	switch(n){
		case 1 :
		    daftar();
		    break;
		case 2 :
            masuk();
            break;
        case 3 :
        	close();
        	break;
		default :
			printf("Inputan tidak valid\n");
			break;
	}
	return 0;
}

void interface(){
	system("cls");
	system("color 1");
	printf("======================================================================================\n\n");
	printf("\t\t\t\t  S W I N V I T E\n\n");
	printf("======================================================================================\n\n");
	printf("Buat undangan pernikahan digital tanpa menunggu dengan tema eksklusif siap pakai\n\n");
	printf("\t\t\t\t 1. Daftar\n");
	printf("\t\t\t\t 2. Masuk\n");
	printf("\t\t\t\t 3. Keluar\n");
	printf("\nDengan mendaftar, saya menyetujui Persyaratan Layanan dan Keebijakan Privasi Swinvite.\n\n");
	printf("======================================================================================\n\n");
	printf("\t\t\t\t Pilihan : ");

}

void daftar(){
	system("cls");
	int d;
	printf("======================================================================================\n\n");
	printf("\t\t\t\t     D A F T A R\n\n");
	printf("======================================================================================\n\n");
	printf("\t\t\t     1. Daftar dengan e-mail\n");
	printf("\t\t\t     2. Daftar dengan nomor telepon\n");
	printf("\t\t\t     3. Kembali\n\n");
	printf("======================================================================================\n\n");
	printf("\t\t\t\t Pilihan : ");
	cin >> d;
	switch(d){
		case 1 :
			daftaremail();
			break;
		case 2 :
			daftartelepon();
			break;
		case 3 :
			main();
			break;
		default :
			printf("\nInputan tidak valid!\n");
			system("pause");
			daftar();
				
	}
}

void daftaremail(){
	system("cls");
	int count;
	string email, sandi, konfirsandi;
	printf("======================================================================================\n\n");
	printf("\t\t   Email\t\t\t: ");
	cin >> email;
	printf("\t\t   Kata Sandi\t\t\t: ");
	cin >> sandi;
	printf("\t\t   Konfirmasi Kata Sandi\t: ");
	cin >> konfirsandi;
	printf("======================================================================================\n\n");
	if (sandi != konfirsandi){
		printf(" Konfirmasi kata sandi tidak valid!\n");
		system("pause");
		daftaremail();
	} else {
		int pil;
		system("cls");
		printf("======================================================================================\n\n");
		printf("\t\t\t\t  KONFIRMASI PROFIL\n\n");
		printf("======================================================================================\n\n");
		printf(" \t\t\tKonfirmasi bahwa informasi kamu benar.\n");
		cout << "\t\t\t Email\t\t: " << email << endl;;
		cout << "\t\t\t Kata Sandi\t: "<< sandi << endl;	
		printf(" \t\t\t\t(1) Edit\n \t\t\t\t(2) Konfirmasi\n\n");
		printf("======================================================================================\n\n");
		printf("\t\t\t\t Pilihan : ");
		cin >> pil;
		if(pil == 1){
			daftaremail();
		} else {
			ofstream f1("dataemail.txt", ios::app);
			f1 << email << ' ' << sandi << endl;
			berhasil();
		}
	}
}

void daftartelepon(){
	system("cls");
	int count;
	string telp, sandi, konfirsandi;
	printf("======================================================================================\n\n");
	printf("\t\t   No.Telp\t\t\t: ");
	cin >> telp;
	printf("\t\t   Kata Sandi\t\t\t: ");
	cin >> sandi;
	printf("\t\t   Konfirmasi Kata Sandi\t: ");
	cin >> konfirsandi;
	printf("======================================================================================\n\n");
	if (sandi != konfirsandi){
		printf(" Konfirmasi kata sandi tidak valid!\n");
		system("pause");
		daftartelepon();
	} else {
		int pil;
		system("cls");
		printf("======================================================================================\n\n");
		printf("\t\t\t\t  KONFIRMASI PROFIL\n\n");
		printf("======================================================================================\n\n");
		printf(" \t\t\tKonfirmasi bahwa informasi kamu benar.\n");
		cout << "\t\t\t No.Telp\t: " << telp << endl;;
		cout << "\t\t\t Kata Sandi\t: "<< sandi << endl;	
		printf(" \t\t\t\t(1) Edit\n \t\t\t\t(2) Konfirmasi\n\n");
		printf("======================================================================================\n\n");
		printf("\t\t\t\t Pilihan : ");
		cin >> pil;
		if(pil == 1){
			daftaremail();
		} else {
			ofstream f1("datatelp.txt", ios::app);
			f1 << telp << ' ' << sandi << endl;
			berhasil();
		}
	}
}

void masuk(){
	system("cls");
	int m;
	printf("======================================================================================\n\n");
    printf("\t\t\t\t     M A S U K\n\n");
	printf("======================================================================================\n\n");
    printf("\t\t\t     1. Masuk dengan e-mail\n");
    printf("\t\t\t     2. Masuk dengan nomor telepon\n");
    printf("\t\t\t     3. Batal\n\n");
	printf("======================================================================================\n\n");
    printf("\t\t\t\t Pilihan : ");
    cin>>m;
    switch(m){
		case 1 :
			masukemail();
			break;
		case 2 :
			masuktelepon();
			break;
		case 3 :
			interface();
			break;
		default :
			printf("Inputan tidak valid!\n");
			system("pause");
			masuk();
	}
}

void masukemail(){
	system("cls");
	int count=0;
	string xemail, xsandi, remail, rsandi;
	printf("======================================================================================\n\n");
    printf("\t\t\t\t     M A S U K\n\n");
	printf("======================================================================================\n\n");
	printf("\t\t Silahkan Masukkan Akun Email dan Kata Sandi.\n");
	printf("\t\t\t Email        : ");
	cin>>xemail;
	printf("\t\t\t Kata Sandi   : ");
	cin>>xsandi;
	ifstream input("dataemail.txt");
	while(input>>remail>>rsandi){
		if(remail==xemail && rsandi==xsandi){
			count=1;
			system("cls");
		}
	}
	input.close();
	printf("\n======================================================================================\n\n");
	if(count==1){
		printf(" Anda berhasil masuk!\n");
		system("pause");
		utama();
	} else {
		printf(" Gagal masuk!\n Mohon periksa kembali nama lengkap dan kata sandi Anda!\n");
		system("pause");
		main();
	}
}

void masuktelepon(){
	system("cls");
	int count=0;
	string xtelp, xsandi, rtelp, rsandi;
	printf("======================================================================================\n\n");
    printf("\t\t\t\t     M A S U K\n\n");
	printf("======================================================================================\n\n");
	printf("\t\t Silahkan Masukkan Nomor Telepon dan Kata Sandi.\n");
	printf("\t\t\t No.Telp      : ");
	cin>>xtelp;
	printf("\t\t\t Kata Sandi   : ");
	cin>>xsandi;
	ifstream input("datatelp.txt");
	while(input>>rtelp>>rsandi){
		if(rtelp==xtelp && rsandi==xsandi){
			count=1;
			system("cls");
		}
	}
	input.close();
	printf("\n======================================================================================\n\n");
	if(count==1){
		printf(" Anda berhasil masuk!\n");
		system("pause");
		utama();
	} else {
		printf(" Gagal masuk!\n Mohon periksa kembali nama lengkap dan kata sandi Anda!\n");
		system("pause");
		main();
	}
}

void close(){
	system("cls");
    printf("======================================================================================\n\n");
    printf("\t\t\t\tT E R I M A  K A S I H !\n\n");
    printf("======================================================================================\n\n");
}

void berhasil(){
	system("cls");
	printf("======================================================================================\n\n");
	printf("\t\t\t R E G I S T R A S I  B E R H A S I L !\n\n");
	printf("======================================================================================\n\n");
	system("pause");
	main();
}

void utama(){
	system("cls");
	int pilihan;
	printf("=======================================================================================\n\n");
	printf("\t\t\t\t Selamat Datang!!\n");
	printf("\t\t Buat undangan digitalmu lebih elegan dan eksklusif!\n\n");
	printf("=======================================================================================\n\n");
	printf("\t\t\t\t   O V E R V I E W \n\n");
	printf("\t\t\t      1. [+] Buat Undangan Baru\n");
	printf("\t\t\t      2. Daftar Undangan\n\n");
	printf("_______________________________________________________________________________________\n\n");
	printf("\t\t\t\t   Pilihan : ");
	cin >> pilihan;
	switch(pilihan){
		case 1 :
			undangan_baru();
			break;
		case 2 :
			daftar_undangan();
			break;
		default :
			printf(" Pilihan tidak tersedia.\n");
	}
}

void undangan_baru(){
	system("cls");
	int agama;
	printf("=======================================================================================\n\n");
	printf("\t\t\t 4 Langkah Langsung Jadi\n");
	printf("---------------------------------------------------------------------------------------\n");
	printf(" Mulai kreasikan undangan kamu, selesaikan langkahnya undangan langsung bisa disebar.\n");
	system("pause");
	system("cls");
	printf(" Silahkan pilih kutipan yang kamu sukai\n");
	printf("=======================================================================================\n\n");
	printf(" Berdasarkan kepercayaan :\n");
	printf(" 1. Islam\n 2. Kristen\n 3. Hindu\n 4. Budha\n");
	printf(" Pilihan : ");
	cin >> agama;
	switch (agama){
		case 1 :
			islam();
			break;
//		case 2 :
//			kristen();
//			break;
//		case 3 :
//			hindu();
//			break;
//		case 4 :
//			budha();
			break;
		default :
			printf(" Pilihan tidak tersedia!\n");
	}
}

void islam(){
	
}
