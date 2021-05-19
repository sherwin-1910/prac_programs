#include<iostream>
#include<string>

class Entity
{
public:
	int X,Y;
	void Print()
	{
		std::cout << X << " " << Y << std::endl;
 	}
 	void newPrint();
 	std::string GetName() { return "Entity"; }
};

void Entity::newPrint()
{
	std::cout << X << " Hello " << Y << std::endl;
}

class Player : public Entity
{
private:
	std::string m_Name;
public:
	Player(const std::string& name) : m_Name(name){}

	std::string GetName() { return m_Name; }

};

int main()
{
	Entity* ne = new Entity();
	std::cout << e->GetName() << std::endl;

	
	Entity e;
	e.Print();
	e.newPrint();
	e.X = 5;
	e.Y = 6;
	e.Print();
	e.newPrint();

	Entity e1;
	e1.Print();
	e1.newPrint();
	e1.X = 2;
	e1.Y = 3;
	e1.Print();
	e1.newPrint();	
//	std::cin.get();
}