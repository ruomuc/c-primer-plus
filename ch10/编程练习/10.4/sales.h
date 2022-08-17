namespace SALES
{
  class Sales
  {
  private:
    static const int QUARTERS = 4;
    double m_sales[QUARTERS];
    double average_;
    double max_;
    double min_;
    void compute(int n = QUARTERS);

  public:
    Sales();
    Sales(const double ar[], int n);
    void showSales() const;
  };
}
