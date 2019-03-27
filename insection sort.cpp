#include<iostream>
using namespace std;
int main(){
	int i,b,key, j,n,arr[100];

    cout<<"------FARIDA WIJAYANTI---------\n";
    cout<<"---------18050623012-----------\n";
    cout<<"----PROGRAM INSERTION SORT-----\n";
    cout<<endl;
	cout<<"masukkan jumlah angka = ";
    cin>>n;
    cout<<endl;
    for(int t=0;t<n;t++){

            cout<<"masukan angka ke- " <<t+1<<" : ";
            cin >> arr[t];
        }
        cout<<endl;

    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    for (i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
