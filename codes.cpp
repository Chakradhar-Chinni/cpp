````````Hello World
#include<iostream>
using namespace std;

int main()
{
	cout << "Hello World" << endl;
	return 0;
}

`````````Data Types
#include<iostream>
 using namespace std;
 
 int main()
 {
	int n1 = 10;
	string name="Snow";   
	char grade = 'A';
	float n2 = 5.7135;
	double n3 = 5.700001;
	bool n4 = true;
	bool n5 = false;
	
	cout << n1 << name << endl;
	cout << n4;
	cout << grade;
 }

`````````Observe diff. b/w using endl vs not using endl;

#include<iostream>
using namespace std;
            
int main()
{
	cout << "Hello World" << endl;
	cout << "Hey there, Hello";
	
	cout << "\n----" << endl;
	
	cout << "Hey there, Hello";
	cout << "Hello World" << endl;
	
}

```````````Working with strings
#include<iostream>
using namespace std;
            
int main()
{
	string phrase = "Programming in cpp";
	cout << phrase << endl; 
	cout << phrase;
}

#include<iostream>
using namespace std;
            
int main()
{
	string phrase = "Programming in cpp";
	cout << phrase.length() << endl;  //18
	cout << phrase[0] << endl; //p
	phrase[1] = 'i';
	cout << phrase << endl; // Piogramming in cpp
}


