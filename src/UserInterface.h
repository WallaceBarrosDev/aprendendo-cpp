#include <string>
using std::string;

class UserInterface {
public:
  UserInterface(string);
  string getName(void);
  void sendHelloMessage(void);
private:
  string userName;
};
