#include <iostream> 
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::getline;

#include "UserInterface.h"

UserInterface::UserInterface(string name) {
  if (name.length() <= 0) {
    cout << "Digite seu nome > ";
    getline(cin, userName);
  } else {
    userName = name;
  }
} 

string UserInterface::getName(void) {
  return userName;
}

void UserInterface::sendHelloMessage(void) { 
  cout << "Olá " << getName() << ", seja bem vindo !" << endl;
}
