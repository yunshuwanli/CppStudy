// example: Person类的设计与实现
// 由书本中的练习逐步完善而来

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;

struct Person
{
	friend std::istream& read_person(std::istream &is, Person &person);
	friend std::ostream& print_person(std::ostream &os, const Person &person);

public: 
	// 构造函数
	Person() = default;
	Person(const std::string &_name, const std::string &_addr) :
	       name(_name), addr(_addr) {}
	explicit Person(std::istream &is);

	std::string GetName() const { return name; }
	std::string GetAddr() const { return addr; }

private:
	std::string name;
	std::string addr;
};

std::istream& read_person(std::istream &is, Person &person);
std::ostream& print_person(std::ostream &os, const Person &person);

Person::Person(std::istream &is)
{
	read_person(is, *this);
}

std::istream& read_person(std::istream &is, Person &person)
{
	is >> person.name >> person.addr;
	return is;
}

std::ostream& print_person(std::ostream &os, const Person &person)
{
	os << person.name << " "
	   << person.addr;

	return os;
}

int main()
{
	Person p1("liudiwen", "Guangzhou");
	print_person(cout, p1) << endl;

	Person p2(cin);
	print_person(cout, p2) << endl;

	return 0;
}
