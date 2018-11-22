#include <iostream>
#include <math.h>
using namespace std;

float majemuk(int x,float c,int d){
	float z;
	z = x * (pow((1+c),d));
	return z;
	}


int main(){
	cout << "Lama menabung (bulan): ";
	int a;
	cin >> a;
	int arr[a];
	int total=0;
	for (int i=0;i<a;i++){
		int b = 0; int c = 0;
		cout << "Jumlah Uang ditabung bulan ke-" << i+1 << "(Rupiah): ";
		cin >> b;
		cout << "Jumlah Uang diambil bulan ke-" << i+1 << "(Rupiah): ";
		cin >> c;
		arr[i] = b-c;
		total+=arr[i];
		if (total < 0){
			cout << "Input salah, program berhenti" << endl;
			goto END;
			}
		}
	cout << "Suku bunga yang digunakan..." << endl;
	cout << "B untuk suku bunga dalam bulan, T untuk suku bunga dalam bulan" << endl;
	char in;
	cin >> in;
	float b;
	
	if (in == 'b' || in == 'B'){
		cout << "Suku bunga per bulan (persen): ";
		cin >> b;
		b/=100;
		
			} else if (in == 't' || in == 'T'){
		cout << "Suku bunga per tahun (persen): ";
		cin >> b;
		b/=12;
		b/=100;
			} else {
			cout << "Input salah, program berhenti" << endl;
			goto END;
			}
	int c;
	cout << "Periode penghitungan bunga per ... bulan: ";
	cin >> c;
	if ((c <= 0)||(c > a)){
		cout << "Input salah, program berhenti" << endl;
		goto END;
		} else {
	int counter=0;
	int aa=0;
	float sum=0;
	while ((counter < c) && (aa < a)){
		sum+=arr[aa];
		counter++;
		aa++;
		if (counter == c){
			sum=majemuk(sum,b,c);
			counter=0;
			}
			
		
		}
	cout << "Jumlah Tabungan di akhir bulan ke-" << a << " adalah: " << sum << endl;
	}
	END:;
}
