#include <iostream>

using namespace std;

class Animal
{
  public:
    virtual void make_sound () const = 0;
};

void poke (Animal const & animal)
{ animal.make_sound(); }

class Dog: public Animal
{
    public:
        void make_sound () const
        { cout << "woof" << endl; }
};

class Cat: public Animal
{
    public:
        void make_sound () const
        { cout << "meow" << endl; }
};


class Cow : public Animal
{
  public:
    void make_sound () const override
    { cout << "moo" << endl; }
};

class FullCow : public Cow
{
  public:
    void make_sound () const override
    { cout << "Ooof - I ate too much" << endl; }
};

int main ()
{
  Cow c;
  FullCow fc;
  
  Dog d;
  Cat ct;

  poke(c);
  poke(fc);
  poke(d);
  poke(ct);

  return 0;
}

