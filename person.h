#ifndef PERSON_H
#define PERSON_H

class Person
{
    private:
	int age;
    public:
	Person(int age);
	void setAge(int age);
	int getAge() {return age;}
};

#endif
