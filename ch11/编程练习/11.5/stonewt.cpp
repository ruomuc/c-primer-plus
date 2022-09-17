#include <iostream>
using std::cout;
#include "stonewt.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs)
{
  stone = int(lbs) / Lbs_per_stn; // integer division
  pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
  pounds = lbs;
  mode = POUND;
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs)
{
  stone = stn;
  pds_left = lbs;
  pounds = stn * Lbs_per_stn + lbs;
  mode = FLOAT_POUND;
}

Stonewt::Stonewt() // default constructor, wt = 0
{
  stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt() // destructor
{
}

void Stonewt::Set_Mode(Mode m)
{
  mode = m;
}

Stonewt Stonewt::operator+(const Stonewt &s) const
{
  Stonewt temp;
  temp.pounds = pounds + s.pounds;
  temp.stone = temp.pounds / Lbs_per_stn;
  temp.pds_left = int(temp.pounds) % Lbs_per_stn + temp.pounds - int(temp.pounds);
  temp.mode = this->mode;
  return temp;
}

Stonewt Stonewt::operator-(const Stonewt &s) const
{
  Stonewt temp;
  temp.pounds = pounds - s.pounds;
  temp.stone = temp.pounds / Lbs_per_stn;
  temp.pds_left = int(temp.pounds) % Lbs_per_stn + temp.pounds - int(temp.pounds);
  temp.mode = this->mode;
  return temp;
}

Stonewt Stonewt::operator*(double n) const
{
  Stonewt temp;
  temp.pounds = pounds * n;
  temp.stone = temp.pounds / Lbs_per_stn;
  temp.pds_left = int(temp.pounds) % Lbs_per_stn + temp.pounds - int(temp.pounds);
  temp.mode = this->mode;
  return temp;
}

std::ostream &operator<<(std::ostream &os, const Stonewt &st)
{
  if (st.mode == Stonewt::STONE)
  {
    double p = st.stone + st.pds_left / Stonewt::Lbs_per_stn;
    os << p << " stone\n";
  }
  if (st.mode == Stonewt::POUND)
  {
    os << st.pounds << " pounds\n";
  }
  if (st.mode == Stonewt::FLOAT_POUND)
  {
    os << st.stone << " stone, " << st.pds_left << " pounds\n";
  }
  return os;
}
