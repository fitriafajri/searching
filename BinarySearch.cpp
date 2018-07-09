#include <iostream>
#include <conio.h>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int binarySearch(vector<int>& data, int kiri, int kanan, int hasil) 
{
	if (kanan >= kiri) {
		int tengah = kiri + (kanan - kiri) / 2;
		if (data[tengah] == hasil) {
			return tengah;
		}
		if (data[tengah] > hasil) {
			return binarySearch(data, kiri, tengah - 1, hasil);
		}
		else {
			return binarySearch(data, tengah + 1, kanan, hasil);
		}
	}
	return -1;
}
 
int main() 
{
	system("color F0");
	int maxData;
	int maxIteration;
	cout<<"\n\n\t---------------------------------------------------------";
	cout<<"\n\t|		Fitria Fajri Utami \t\t\t|";
	cout<<"\n\n\t---------------------------------------------------------";
	cout<<"\n\t|		PROGRAM Searching\t\t\t|";
	cout<<"\n\t|	   Mata kuliah Struktur Data\t\t\t|";
	cout<<"\n\n\t---------------------------------------------------------"<<endl;
	cout << "\t\t\t-Program Pencarian Biner-\n"<<endl;
	cout << "Banyak kasus yang mau diselesaikan: ";
	cin >> maxIteration;
	vector<int> result(maxIteration);
	vector<int> search(maxIteration);
	for (int i = 0; i < maxIteration; ++i) {
		bool sorted = 1;
		system("cls");
		cout << "Kasus " << i+1 << "\n";
		cout << "Banyak elemen yang di input: ";
		cin >> maxData;
		vector<int> input(maxData);
		cout << "Masukan input: ";
			for (int j = 0; j < maxData; j++) {
				cin >> input[j];
			}
		cout << "Masukan nilai yang akan dicari: ";
		cin >> search[i];
		result[i] = binarySearch(input, 0, input.size() - 1, search[i]);
	}
	system("cls");
	for (int i = 0; i < maxIteration; i++) {
		if (result[i] == -1) {
			cout << "Pencarian " << search[i] << " untuk kasus " << i + 1 << " tidak dapat ditemukan\n";
		}
		else {
			cout << "Pencarian " << search[i] << " untuk kasus " << i + 1 << " ditemukan di index [" << result[i] << "]\n";
		}
	}
	
	return 0;
	
	getch ();
}
