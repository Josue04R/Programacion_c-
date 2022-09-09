#include<iostream> //llamamos la biblioteca 

using namespace std;
//Creamos una funcion que recibira el numero de colimas 
float compra_col(int num_colimas)
{
    //proceso

    //creamos condiciones para evluar los precios 
    if (num_colimas >= 0 && num_colimas <= 100)
    {
          return num_colimas * 6 ;
    }
    if (num_colimas >= 101 && num_colimas <= 1000)
    {
       return num_colimas * 5.20 ;
    }
    else
    {
         return num_colimas * 4.50 ;//retornara el precio a la funcion principal
    }
    

    
}

int main()
{
    
    //definimos variables 
    int num_colimas;
    string nombre;
   //entrada de date 
    cout<<"Nombre del cliente: \n";
    getline(cin,nombre);
    cout<<"Ingresa la cantidad de colima a comprar\n";
    cin>>num_colimas;
   //salida de date
   cout<<"El cliente: "<<nombre<<" realizo una compra de: "<<num_colimas<<" colimas"<<endl;
   cout<<"total a pagar:$"<<compra_col(num_colimas);

}