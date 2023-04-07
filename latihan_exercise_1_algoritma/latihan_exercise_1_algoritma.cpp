// jawabas soal exercise

//1. algoritma sangat penting dalam menyelesaikan suatu masalah program karena algoritma merupakan langkah awal dalam mengurutkan suatu cara/ fungsi agar berjalan secara terstruktur.
//2. dalam algoritma, struktur data di bagi menjadi 2 yaitu : 
//		statis/ linear, contohnya array
//		dinamis/non-linear, contohnya linked list
//3. Faktor- faktor yang mempengaruhi efisiensi waktu algoritma yaitu:
//		kecepatan mesin, complier, Operating system, Bahas pemrograman yang di gunakan, ukuran dari inputnya.
//4. Berdasarkan materi yang telah di sampaikan, untuk penggunaan algoritma dalam jumlah data yang besar lebih mudah untuk menggunakan metode quicksort karena cara yang digunakan adalah mencari titik tengah (pivot) kemudian mencari mana yang terbesar dan yang terkecil dari titik tengah.
//5. berdadsarkan algoritma yang telah di pelajari, algoritma yang termasuk quadratic adalah: Bubble sort, selection sort, Insertion sort
//	 sedangkan yang loglinear adalah: mergesort dan quick sort.

//jawaban no 6

#include <iostream>
using namespace std;

int alif[95];
int n[95];

void input() {
    while (true)
    {
        cout << "masukan jumlah banyaknya elemen pada array:";
        cin >> alif[95];
        if (n <= 95)
            break;
        else {
            cout << "n\Maksimal array yaitu 95 elemen.\n";
        }
    }

}

void merge(int low, int high,int mid) {
    int i;
    int k;
    int MA;

    i = low;
    MA = mid + 1;
    k = low;

    while (i <= mid && MA <= high) {
        if (alif[i] <= alif[MA]) {
            n[k] = alif[i];
            i++;
        }
        else {
            n[k] = alif[MA];
            MA++;
        }
        k++;
    }

    while (MA <= high) {
        n[k] = alif[MA];
        MA++;
        k++;
    }

    while (i <= mid) {
        n[k] = alif[i];
        i++;
        k++;
    }

    for (int i = low; i <= high; i++) {
        alif[i] = n[i];
    }


}


void mergesort(int low, int high) {
    if (low >= high) {
        return;
    }
    int mid = (low + high) / 2;
    merge(low, mid, high);
    merge(mid + 1, high);
    merge(low, mid, high);
}



void output() {
    cout << "Hasil Pengurutan: " << endl;
    for (int i = 0; i < 85; i++)
    {
        cout << alif[i] << " ";
    }
    cout << endl;
}

int main() {
    input();
    mergesort(0,95 - 1);
    output();
    return 0;
}