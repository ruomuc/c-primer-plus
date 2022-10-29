#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Person
{
private:
  string firstName;
  string lastName;

public:
  Person() : firstName(""), lastName(""){};
  Person(const string &fn, const string &ln) : firstName(fn), lastName(ln){};
  void Show() const
  {
    cout << "Person info: " << endl;
    cout << "First name: " << firstName << endl;
    cout << "Last name: " << lastName << endl;
  };
};

class Gunslinger : virtual public Person
{
private:
  int nick;

public:
  Gunslinger() : Person(), nick(0){};
  Gunslinger(const string &fn, const string &ln, int n) : Person(fn, ln), nick(n){};
  double Draw() const
  {
    srand(time(0));
    return rand() % 60;
  };
  void Show() const
  {
    Person::Show();
    cout << "Nick: " << nick << endl;
  };
};

struct Card
{
  enum SUITE
  {
    SPADE,
    HEART,
    DIAMOND,
    CLUB
  };

  SUITE suite;
  int number;
};

class PokerPlayer : virtual public Person
{
public:
  PokerPlayer() : Person(){};
  PokerPlayer(const string &fn, const string &ln) : Person(fn, ln){};
  Card Draw() const;
};

Card PokerPlayer::Draw() const
{
  Card c;
  srand(time(0));
  c.number = rand() % 52;
  c.suite = Card::SUITE(rand() % 4);

  return c;
}

class BadDude : public Gunslinger, public PokerPlayer
{
public:
  BadDude() : Person(), Gunslinger(), PokerPlayer(){};
  BadDude(const string &fn, const string &ln, int nick = 0) : Person(fn, ln), Gunslinger(fn, ln, nick), PokerPlayer(){};
  double Gdraw() const { return Gunslinger::Draw(); };
  Card Cdraw() const { return PokerPlayer::Draw(); };
  void Show() const { Gunslinger::Show(); };
};

#endif
