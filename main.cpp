#include <iostream>
using namespace std;

class Ducks{
    int number_ducks;
  public:
    Ducks(int);
    void countDucks(){
      for(int i = number_ducks; i > 0;i--){
        if(i==1){
          cout << i << " patinho foi passear.\nAlém das montanhas para para brincar.\nA mamãe gritou: 'Quá Quá Quá Quá'.\nMas nenhum patinho voltou de lá.\n\nA mamãe patinha foi procurar\nAlém das montanhas\nNa beira do mar\nA mamãe gritou\nQuá Quá Quá Quá\nE os " << number_ducks << " patinhos voltaram de lá\n";
        }else{
          cout << i << " patinhos foram passear.\nAlém das montanhas para para brincar.\nA mamãe gritou: 'Quá Quá Quá Quá'.\n";
          if(i-1 == 1){
            cout << "Mas só " << i-1 << " patinho voltou de lá.\n" << endl;
          }else {
            cout << "Mas só " << i-1 << " patinhos voltaram de lá.\n" << endl;
          }
        }
      }
      return;
    }
};

Ducks::Ducks(int i){
  number_ducks = i;
}

int main() {
  int count;
  cout<< "MUSIC MENU\n-----------------------------------\n";
  cout << "0 - Sair do menu\n";
  cout << "{quaquer valor} - Numero de patinhos\n";
  cout << "-----------------------------------\n";
  cout << "Escolha o numero de patinhos: ";
  cin >> count;
  cout << endl;
  while(count !=0){
    Ducks d(count);
    d.countDucks();
    cout<< "MUSIC MENU\n-----------------------------------\n";
    cout << "0 - Sair do menu\n";
    cout << "{quaquer valor} - Numero de patinhos\n";
    cout << "-----------------------------------\n";
    cout << "Escolha o numero de patinhos: ";
    cin >> count;
    cout << endl;
  }
  return 0;
}