#include <iostream>
using namespace std;
const int SLEN = 30;
struct student
{
  char fullname[SLEN];
  char hobby[SLEN];
  int ooplevel;
};
// getinfo() has two arguments: a pointer to the first element of
// an array of student structures and an int representing the
// number of elements of the array. The function solicits and
// stores data about students. It terminates input upon filling
// the array or upon encountering a blank line for the student
// name. The function returns the actual number of array elements
// filled.
int getinfo(student pa[], int n);

// display1() takes a student structure as an argument
// and displays its contents
void display1(student st);

// display2() takes the address of student structure as an
// argument and displays the structure’s contents
void display2(const student *ps);

// display3() takes the address of the first element of an array
// of student structures and the number of array elements as
// arguments and displays the contents of the structures
void display3(const student pa[], int n);

int main()
{
  cout << "Enter class size : ";
  int class_size;
  cin >> class_size;
  while (cin.get() != '\n')
    continue;

  student *ptr_stu = new student[class_size];
  int entered = getinfo(ptr_stu, class_size);
  for (int i = 0; i < entered; i++)
  {
    display1(ptr_stu[i]);
    display2(&ptr_stu[i]);
  }
  display3(ptr_stu, entered);
  delete[] ptr_stu;
  cout << "Done\n";
  return 0;
}

int getinfo(student pa[], int n)
{
  using namespace std;

  int size = 0;
  cout << "Enter the student info: \n";

  for (int i = 0; i < n; i++)
  {
    cout << "name: ";
    cin >> pa[i].fullname;
    cout << "hobby: ";
    cin >> pa[i].hobby;
    cout << "ooplevel: ";
    cin >> pa[i].ooplevel;

    if (!cin)
    {
      cin.clear();
      while (cin.get() != '\n')
        continue;
      cout << "Bad input.";
      break;
    }
    size++;
  }

  return size;
}

void display1(student st)
{
  using namespace std;

  cout << "fullname = " << st.fullname << endl;
  cout << "hobby = " << st.hobby << endl;
  cout << "ooplevel = " << st.ooplevel << endl
       << endl;
}

void display2(const student *ps)
{
  using namespace std;

  cout << "fullname = " << ps->fullname << endl;
  cout << "hobby = " << ps->hobby << endl;
  cout << "ooplevel = " << ps->ooplevel << endl
       << endl;
}

void display3(const student pa[], int n)
{
  using namespace std;

  for (int i = 0; i < n; i++)
  {
    cout << "fullname = " << pa[i].fullname << endl;
    cout << "hobby = " << pa[i].hobby << endl;
    cout << "ooplevel = " << pa[i].ooplevel << endl
         << endl;
  }
}