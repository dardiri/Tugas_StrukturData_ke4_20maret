#include <iostream>
using namespace std;

int main(){

	bool Adatukar=true;
	int i, j, n, temp;
	int x[7];
	i=1;
    cout<<"#######################\n";
    cout<<"#Bubble Sort Ascending#\n";
    cout<<"#######################\n\n";
	cout << "Input Jumlah Data Angka: ";
	cin >> n;

	for(int a=1;a<n+1;a++){

		cout << "Input Angka: ";
		cin >> x[a];
	}

	while(i<n && Adatukar){
		j=1;
		Adatukar =false;
		while(j<=(n-i)){
			if (x[j]>x[j+1]){
				Adatukar= true;
				temp=x[j];
				x[j]=x[j+1];
				x[j+1]=temp;
            }
			j++;
		}
		i++;
    }
    cout<<"\nHasil pengurutan Ascending: ";
    for(int k=1;k<n+1;k++){
        cout << x[k] << " ";
    }



	return 0;
}
