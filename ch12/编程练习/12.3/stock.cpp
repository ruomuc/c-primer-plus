#include "stock.h"

// constructors
Stock::Stock() // default constructor
{
  company = nullptr;
  shares = 0;
  share_val = 0.0;
  total_val = 0.0;
}

Stock::Stock(const std::string &co, long n, double pr)
{
  company = new char[co.size() + 1];
  std::copy(co.begin(), co.end(), company);

  if (n < 0)
  {
    std::cout << "Number of shares can’t be negative; "
              << company << " shares set to 0.\n";
    shares = 0;
  }
  else
    shares = n;
  share_val = pr;
  set_tot();
}

// class destructor
Stock::~Stock() // quiet class destructor
{
}

// other methods
void Stock::buy(long num, double price)
{
  if (num < 0)
  {
    std::cout << "Number of shares purchased can’t be negative. "
              << "Transaction is aborted.\n";
  }
  else
  {
    shares += num;
    share_val = price;
    set_tot();
  }
}

void Stock::sell(long num, double price)
{
  using std::cout;
  if (num < 0)
  {
    cout << "Number of shares sold can’t be negative. "
         << "Transaction is aborted.\n";
  }
  else if (num > shares)
  {
    cout << "You can’t sell more than you have! "
         << "Transaction is aborted.\n";
  }
  else
  {
    shares -= num;
    share_val = price;
    set_tot();
  }
}

void Stock::update(double price)
{
  share_val = price;
  set_tot();
}

const Stock &Stock::topval(const Stock &s) const
{
  if (s.total_val > total_val)
    return s;
  else
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Stock &st)
{
  using std::ios_base;
  // set format to #.###
  ios_base::fmtflags orig =
      os.setf(ios_base::fixed, ios_base::floatfield);
  std::streamsize prec = os.precision(3);

  os << "Company: " << st.company
     << " Shares: " << st.shares << '\n';
  os << " Share Price: $" << st.share_val;
  // set format to #.##
  os.precision(2);
  os << " Total Worth: $" << st.total_val << '\n';

  // restore original format
  os.setf(orig, ios_base::floatfield);
  os.precision(prec);

  return os;
}
