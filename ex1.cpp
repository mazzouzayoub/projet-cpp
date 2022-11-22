#include <iostream>

using namespace std;

class M{
public:
  void display ()
  {
    cout << "affichage de la classe mere "<<endl;
  }
};

class F : public M{
public:
  void display ()
  {
    cout << "l affichage de la classe fille ";
  }
};

int main ()
{
  F f;
  f.display();
  return 0;
}