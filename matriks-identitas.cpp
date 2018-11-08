#include<iostream>
#include<iomanip>
using namespace std;
main(){



int a,b,n;

int L[25][25];

cout<<"Matriks identitas"<<endl;
cout<<"masukkan panjang matriks: ";
cin>>n;
for(a=1;a<=n;a++){
for(b=1;b<=n;b++){
cout<<"masukkan isi baris ["<<a<<"]["<<b<<"]: ";
cin>>L[a][b];
}
}

cout<<""<<endl;
cout<<"Matriks Identitas"<<endl;
cout<<""<<endl;
for(a=1;a<=n;a++){
for(b=1;b<=n;b++){
if(a+b==n+1){
L[a][b]=0;
cout<<setw(5)<<L[a][b];
}

else{
cout<<setw(5)<<L[a][b];
}
}

cout<<endl;

}


}
