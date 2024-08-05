#include<iostream>
#include<string>
using namespace std;

class String
{
private:
	char* m_buffer;
	unsigned int m_size;
public:
	//counsructor
	String(const char* string)
	{
		m_size = strlen(string);
		m_buffer = new char[m_size+1];
		memcpy(m_buffer, string, m_size);
		m_buffer[m_size] = 0;
	}
	//copy function
	String(const String& other) :m_size(other.m_size)
	{
		m_buffer = new char[m_size + 1];
		memcpy(m_buffer, other.m_buffer, m_size+1);
	}
	//destructor 
	~String()
	{
		delete[] m_buffer;
	}
	//operator overloading
	char& operator[](unsigned int index)
	{
		return m_buffer[index];
	}

	friend ostream& operator<<(ostream& stream, const String& string);

	//using arrow operator
	void printf()
	{
		cout << "demo for arrow operator"<<endl;
	}
};

//first methid to print strings

ostream& operator<<(ostream& stream, const String& string)
{
	stream << string.m_buffer;
	return stream;
}

//second method to print strings

void Printstring(const String& string)
{
	cout << string << endl;
}

struct vec3
{
	int x, y, z;
};

int main()
{
	String string="Hello"; //object 1
	String String2=string; //object 2
	string[2] = 'y';
	Printstring(string);
	cout << String2 << endl;

	// Pointer to String object
	String* ptr = &string;
	ptr->printf();

	//getting offset of the values from class or struct
	int offset = (int)&((vec3*)nullptr)->y;
	cout << offset << endl;


	return 0;
}