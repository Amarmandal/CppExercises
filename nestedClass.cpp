#include <iostream>
#include <string.h>
using namespace std;

class student
{
    private:
    int roll;
    char name[32];
    char branch[32];

    class address
    {
        private:
        int houseno;
        int pancode;
        char street[32];
        char city[32];

        public:
        void set(int h, int p, const char *s, const char *c);
        
        void display();
            

    };
    address add;
    public:
    void set(int h, int p, const char *s, const char *c);
    void data(int r, const char *n, const char *b);
    void output();
};

void student :: address ::  set(int h, int p, const char *s, const char *c)
    {
          houseno=h;
          pancode=p;
          strcpy(street,s);
          strcpy(city,c);

    }
void student :: address :: display()
    {
            cout << "house no.: " << houseno << endl << "pancode: " << pancode << endl << "street: " << street << endl << "city: " << city << endl; 
    }


void student :: set(int h, int p, const char *s, const char *c)
    {
        add.set(h, p, s, c);
    }

void student :: data(int r, const char *n, const char *b)
{
    roll=r;
    strcpy(name,n);
    strcpy(branch,b);
}

void student :: output()
{
    cout << "roll no: " << roll << endl << "name: " << name << endl << "branch: " << branch << endl;
    add.display();
}

int main()
{
    student std;void set(int h, int p, const char *s, const char *c);
    std.data(23, "rt", "ee");
    std.set(234, 2345, "28kilo", "dhulikhel");
    std.output();
}    
    

