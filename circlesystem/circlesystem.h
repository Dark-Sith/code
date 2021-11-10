#include <iostream>
#include <string>
using namespace std;

class circle
{
    public:
        string name, type, crowd, gachi, venue, nomi, genderratio;
        int selection, count = 0;
        void display_output(void);
};

void circle::display_output(void)
{
    cout << name  << "(" << count << ")" << endl;
}
