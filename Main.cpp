#include <iostream>

class Example
{
public:
	Example()
	{
		std::cout << "Created Entity!" << std::endl;
	}
	Example(int x)
	{
		std::cout << "Created Entity with " << x << std::endl;
	}
};

class Entity
{
public:
	Entity()
		: m_Score(), m_Name("Unknown"), m_Example(){}

	Entity(const std::string& name, int score, Example examp)
		: m_Name(name), m_Score(score), m_Example(examp) {}

	const std::string& GetName() const
	{
		return m_Name;
	}
	int GetScore()
	{
		return m_Score;
	}

private: 
	Example m_Example;
	int m_Score;
	std::string m_Name;
};

int main()
{
	Entity e0;
	std::cout << e0.GetName() << std::endl;

	Entity e1("Player", 3, 80);
	std::cout << e1.GetName() << " = " << e1.GetScore() << std::endl;

	std::cin.get();
}