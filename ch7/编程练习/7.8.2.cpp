//arrobj.cpp -- functions with array objects (C++11)
#include <iostream>
#include <string>
// constant data
const int Seasons = 4;
const char *Snames[] =
    {"Spring", "Summer", "Fall", "Winter"};

struct expenses
{
    double ex[Seasons];
};

// function to modify array object
void fill(expenses &);
// function that uses array object without modifying it
void show(const expenses &);

int main()
{
    expenses e = {{}};

    fill(e);
    show(e);
    return 0;
}

void fill(expenses &ex)
{
    using namespace std;
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> ex.ex[i];
    }
}

void show(const expenses &ex)
{
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << ex.ex[i] << endl;
        total += ex.ex[i];
    }
    cout << "Total Expenses: $" << total << endl;
}