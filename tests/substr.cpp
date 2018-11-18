#include <iostream>
#include <string>

int main(){
	  //first receives the nickname;servername
  std::string msg = "otario;babao";
  int pos = msg.find(";");
  std::string nickname = msg.substr(0,pos);
  std::string servername = msg.substr(pos+1, msg.length());

  std::cout << "servername: " << servername << " nickname: " << nickname << std::endl;

  const char *b[] = {"abc","def","ghi","jkl"};

  for(int i=1; i<10; i++){
  	std::string a = std::string(b[i%4]);
  	std::cout << a << std::endl;
  }
  return 0;

}