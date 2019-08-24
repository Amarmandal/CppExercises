#include <iostream>
using namespace std;

class Engine
{
public:
  Engine(){
    cout << "Engine constructor" << endl;
  }

  void run()
  {
    cout << "I'm running ..." << endl;
  }
};

class Wheels
{
public:
  int id;

  Wheels(int parameterId){
    this->id = parameterId;
    cout << "Wheel constructor" << endl;
  }

  void spin() {
    cout << "I'm spinning ... id = " << id << endl;
  }
};

class Doors
{
public:
  Doors(){
    cout << "Doors constructor" << endl;
  }

  void open()
  {
    cout<< "I am opening the doors" << endl;
  }
};

class Car
{
  public:
  Wheels *wheels;
  Engine engine;
  Doors *doors;

  Car(Wheels *theWheels, Doors *thisDoors)
  {
    wheels = theWheels; // same as:  this->wheels = theWheels;
    doors = theDoors;
  }
};


int main()
{
  Wheels* wheels = new Wheels(5);
  Doors* doors = new Doors();

  Car car(wheels, doors);

  car.wheels = wheels;
 
  cout << car.wheels << endl;
 
  car.wheels->spin();
  car.engine.run();
  car.doors->open();
 
  return 0;
}
