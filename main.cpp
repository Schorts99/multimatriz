#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[]) {
  int m; // columnas primera matriz
  int n; // Filas primera matriz
  int o; // columnas segunda matriz
  int p; // Filas segunda matriz

  cout<<"Multiplicador de matrices"<<endl;

  cout<<"Ingresa el tamaño de la primera matríz ( filas x columnas )"<<endl;
  cin>>n;
  cin>>m;
  int a[m][n];

  cout <<"Ingresa el tamaño de la segunda matríz ( filas x columnas )"<<endl;
  cin>>p;
  cin>>o;
  int b[o][p];
  cout<<"Ingresa los valores de la primera matriz: "<<endl;
  /* El número de filas de la primera matriz debe ser igual al numero de columnas
  de la segunda matriz */
  if (m == p) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin>>a[j][i];
      }
    }

    cout<<"Ingresa los valores de la segunda matriz: "<<endl;

    for (int i = 0; i < p; i++) {
      for (int j = 0; j < o; j++) {
        cin>>b[j][i];
      }
    }

    cout<<endl<<endl;
    cout<<"Primera matriz: "<<endl;

    for (int i = 0; i < n; i++) {
      cout<<endl<<endl;
      for (int j = 0; j < m; j++) {
        cout<<setw(8)<<a[j][i];
      }
    }

    cout<<endl<<endl;

    cout<<"Segunda matriz: "<<endl;

    for (int i = 0; i < p; i++) {
      cout<<endl<<endl;
      for (int j = 0; j < o; j++) {
        cout<<setw(8)<<b[j][i];
      }
    }

    cout<<endl<<endl;
    cout<<setw(15)<<"Se multiplicarán las matrices"<<endl;
    cout<<"**********************************"<<endl;

    int ab[o][n];

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < o; j++) {
        ab[j][i]= 0;
        for (int k = 0; k < p; k++) {
          ab[j][i]=ab[j][i] + a[k][i] * b[j][k];
        }
      }
    }

    cout<<endl<<endl;
    cout<<"Matriz resultante: "<<endl;

    for (int i = 0; i < n; i++) {
      cout<<endl<<endl;
      for (int j = 0; j < o; j++) {
        cout<<setw(8)<<ab[j][i];
      }
    }

  }

  else{
    cout<<"No se pueden multiplicar las matrices"<<endl;
    return 0;
  }

  cout<<endl;

  return 0;
}
