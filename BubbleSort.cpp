#include <iostream>
#include <string>
using namespace std;


int arr[20]; //deklarasi variable global array a dengan ukuran 20
int n; //deklarasi variable global n untuk menyimpan banyaknya elemen pada arrray

void input() {
    while (true) {
        cout << "masukkan banyak elemen pada array : "; //output pada layar
        cin >> n; //input dari pengguna untuk memasukkan element
        if (n <=20) //jika n kurang dari atau sama dengan 20
        break; //keluar dari loop
        else {
            cout << "\nArray dapat mempunyai maksimal 20 element.\n"; //output ke layar
        }

        cout << endl;
        cout << "======================" << endl;
        cout << "Masukkan element array" << endl;
        cout << "======================" << endl;


        for (int i = 0; 1 <n; i++) {
            cout << "Data ke-" << (i+1) << ";";
            cin >> arr[i];
        } 
    }
void bubbleSortArray()
 {
       int pass = 1; //step 1

        do
        { 
            for (int j = 0; j <= n - 1 - pass; j++)
            { //step2
                if (arr[j] > arr [j + 1]) //step 3
                {
                    int temp;
                    temp = arr[j];
                    arr[j] = arr [j+1];
                    arr[j + 1] = temp;
                }
            }
            pass = pass + 1; //step 4
            
        } while (pass <= n - 1); //step 5

        void display() {
            cout << ednl;
            cout << "==========================" << endl;
            cout << "Element Array yang telah tersusun" << endl;
            cout << endl;
            for (int j = 0; j < n; j++) {
                cout << arr[j]; //menampilkan array
                if (j < n -1){
                    cout << " -->";
                }
            }
            cout << endl;
            cout << endl;

            cout << "jumlah pss = " << n -1 << endl; //menampilkan jumlah dari dari pass
            cout << endl;
            cout <<



        }
        int main(){
            
            input();

            bubbleSortArray();
            display();
            
            system("pause");
            return 0;

        }



    
        


        



        


    
}

    



    
