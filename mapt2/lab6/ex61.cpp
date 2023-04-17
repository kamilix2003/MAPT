#include <string>
#include <iostream>
using namespace std;

void replace_message(std::string *str, std::string to_rep, std::string rep_be)
{
  size_t n;
  n = find(to_rep);

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
    cout << txt.at(i) << endl;
    /* cout << txt[i] << endl;
       alternative, but using .at() is safer */
    /*  2.
        operator[] does not do range checking. Accessing element not presenting in vector silently leads to undefined behavior.
        .at() member function does range checking and throws an exception when you are trying to access nonexisting element.
    */
  }
	
  string txt2(" Find out what will happen with the message.");
  
  txt.append(txt2).append(" One more message?");
  
  txt.replace
    (txt.find("message!!!"),
     string("message!!!").length(),
     "MESSAGE!!!");
  
  cout << txt << endl;

  
  return 0;
}