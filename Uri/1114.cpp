#include <iostream>
using namespace std;

int main()
{
  int pass;
  while(1){
        cin>>pass;
    if(pass==2002){
        cout<<"Acesso Permitido"<< endl;
        return 0;
    }

    else
        cout<<"Senha Invalida"<<endl;
  }

 return 0;
}
