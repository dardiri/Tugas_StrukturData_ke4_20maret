#include <iostream>
#include <conio.h>
using namespace std;

void quicksort( int save[], int L, int R){
    int i=L, j=R;
    int temp;
    int pembagian=save[(L+R)/2];

    while(i<=j){
        while(save[i]<pembagian)
            i++;
        while(save[j]>pembagian)
            j--;
        if(i<=j){
            temp=save[i];
            save[i]=save[j];
            save[j]=temp;
            i++;
            j--;
        }
    }

    if(L<j)
        quicksort(save,L,j);
    if(i<R)
        quicksort(save,i,R);
}
main(){
    int save[100];
    int i,n,ba,br;
    ba=0;
    cout<<"######################\n";
    cout<<"#Quick Sort Ascending#\n";
    cout<<"######################\n\n";
    cout<<"Input Jumlah Data Angka: "; cin>>n;

    br=n;
    cout<<"Input Angka: \n\n";
    for(i=1; i<=n; i++){
        cout<<"data ke- "<<i<<" : "; cin>>save[i];
    }

    quicksort(save,ba,br);
    cout<<"\nHasil Pengurutan Ascending: ";
    for(i=1; i<=n; i++)
        cout<<" "<<save[i];
    getch();
}
