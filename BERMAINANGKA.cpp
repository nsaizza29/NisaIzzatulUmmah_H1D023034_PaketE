#include <iostream>
#include <algorithm>

using namespace std;

// Fungsi untuk memeriksa apakah bilangaan adalah bilangan prima
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}
//fungsi untuk mencari nilai di array menggunakan linear search
int linearSearch(int arr[],int n, int x){
    for (int i = 0; i < n; i++){
        if (arr[i] == x){
            return i;
        }
    }
    return -1;
}

int main() {
    int n, m;
    cin >> n >> m;

    int array_A(n);
    int array_B(m);

    //input array A
    for (int i = 0; i < n; i++) {
        cin >> array_A[i];
    }

    //input array B
    for (int i = 0; i < m; i++) {
        cin >> array_B[i];
    }

    int results[n+m]; //menggunakan array untuk hasil
    int result_count= 0; //counter untuk hasil

    // cari nilai menggunakn sarat
    for(int i=1;i<n;i++){
        cin >> array_A[i];
    }

    for(int i=100;m<i;i++){
        cin >> array_B[i];
    }

    sort(results,results+result_count);

    
    if (result_count==0) {
        cout << "TIDAK ADA" << endl;
    } else {
        for (int i = 0; i < result_count; i++) {
            cout << results[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
