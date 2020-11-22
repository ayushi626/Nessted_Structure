#include <iostream>
#include <string>

using namespace std;

struct address
{
  int house_no;
  string street_name;
};

struct student
{
    string name;
    int rollno;
    address addr;
};

int main()
{
    student anil;
    anil.name="anil";
    anil.rollno=1234;

    anil.addr.house_no=68;
    anil.addr.street_name="M G Road";

    cout<<anil.name<<endl;
    cout<<anil.rollno<<endl;
    cout<<anil.addr.house_no<<endl;
    cout<<anil.addr.street_name<<endl;
    return 0;
}
