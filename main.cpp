#include <iostream>
#include <algorithm>
using namespace std;


int calcularciclo(int n){
    int Longitud_ciclo =1;
    while(n!=1) {

        if (n%2==0){
            n=n/2;
        }else n=3*n+1;

        Longitud_ciclo ++;

    }
    return Longitud_ciclo;
}
int calcularmayor(int i,int j){

    int size=j-i;
    if(i>j){ size=i-j;}
    int valores[size];
    for (int h=0;i<=j;h++,i++){
        valores[h]=calcularciclo(i);

    }
    sort(valores, valores+size, greater<int>());

    return valores[0];
}
int main ()
{
    int i=0, j=0;

    while ( scanf ("%d %d", &i, &j) != EOF  ) {

        int ii = i;
        int jj = j;



       cout<<ii<<" "<<jj<<" "<<calcularmayor(ii,jj)<<endl;

    }

    return 0;
}
