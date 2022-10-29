#include "wine.h"

template <class T1, class T2>
T1 &Pair<T1, T2>::first()
{
    return b;
}

template <class T1, class T2>
T2 &Pair<T1, T2>::second()
{
    return a;
}

Wine::Wine(const char *l, int y, const int yr[], const int bot[])
    : string(l), year(y), PairArray(ArrayInt(yr, y), ArrayInt(bot, y))
{
}

Wine::Wine(const char *l, int y)
    : string(l), year(y), PairArray(ArrayInt(0, 0), ArrayInt(0, 0))
{
}

void Wine::GetBottles()
{
    cout << "Enter " << (const string &)(*this) << " data for " << year << " year(s):\n";
    this->first().resize(year);
    this->second().resize(year);

    for (int i = 0; i < year; i++)
    {
        cout << "Enter year: ";
        cin >> this->first()[i];
        cout << "Enter bottles for that year: ";
        cin >> this->second()[i];
    }
}

const string &Wine::Label() const
{
    return (const string &)(*this);
}

int Wine::Sum() const
{
    return this->second().sum();
}

void Wine::Show()
{
    cout << "Wine: " << (const string &)(*this) << endl;
    cout << "   Year   Bottles" << endl;
    for (int i = 0; i < year; i++)
    {
        cout << "  " << this->first()[i]
             << "  " << this->second()[i] << endl;
    }
}
