#include <iostream>
#include <string>
using namespace std;

class Student {
private:
  string description = "A student of the group";
public:
  void printDescription();
  Student();
};

Student::Student() {
  cout << "Creating an object of the class "
          "Student, with description: "
       << endl << " " << description << endl;
}

void Student::printDescription() {
  cout << "description: " << description << endl;
}

class Chairman: public Student {
public:
  Chairman();
  void printDescription();
  string description = "A chairman of the group";
};

Chairman::Chairman() 
{
   cout << "Creating an object of the class "
          "Student, with description: "
       << endl << " " << description << endl;   
}

void Chairman::printDescription()
{
    cout << "description: " << description << endl;
}

int main() {
//   Student stud;
  Chairman chair;
//   stud.printDescription();
  chair.printDescription();
  return EXIT_SUCCESS;
}
