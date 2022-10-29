#include "person.h"

int main()
{
  Person p("Jack", "Slong");
  p.Show();

  Gunslinger gs("Tidy", "White", 12);
  gs.Show();
  cout << "nick = " << gs.Draw() << endl;

  PokerPlayer pk("m", "z");
  pk.Show();

  BadDude bd("wx", "z");
  bd.Show();
}
