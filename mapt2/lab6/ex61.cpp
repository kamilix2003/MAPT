#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

void replace_message(std::string *str)
{
  const string msg = "message";
  const string real_msg = "real MESSAGE";
  const string og_msg = "original MESSAGE";
  size_t msg_index;
  while(str->find(real_msg) < 9999)
  {
    msg_index = str->find(real_msg);
    str->replace(msg_index, real_msg.size(), og_msg);
  }
  while(str->find(msg) < 9999)
  {
    msg_index = str->find(msg);
    str->replace(msg_index, msg.size(), real_msg);
  }
}

int main(){
  string txt;
  txt = " real message!!!";	// overloaded operator =
  cout << txt << endl;
	
  if (txt == "real message!!!") {
    cout << "comparison with use of the overloaded operator"
         << endl;
  } else {
    cout << "!@#$% ???" << endl;
  }
		
  cout << "text size =" << txt.size() << endl;
  cout << "Where is NULL???" << endl;
	
  for (size_t i = 0; i < txt.size(); i++) {
    cout << txt.at(i) << " ";
    /* cout << txt[i] << endl;
       alternative, but using .at() is safer */
    /*  2.
        operator[] does not do range checking. Accessing element not presenting in vector silently leads to undefined behavior.
        .at() member function does range checking and throws an exception when you are trying to access nonexisting element.
    */
  }
  std::cout<<"\n";
	
  string txt2(" Find out what will happen with the message.");
  
  txt.append(txt2).append(" One more message?");
  
  txt.replace
    (txt.find("message!!!"),
     string("message!!!").length(),
     "MESSAGE!!!");
  
  cout << txt << endl;

  replace_message(&txt);

  cout << txt << "\n";

  return 0;
}