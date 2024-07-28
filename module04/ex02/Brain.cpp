#include "./Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called.\n";
}

Brain::~Brain()
{
	std::cout << "Brain destructor called.\n";
}

Brain::Brain(const Brain &other)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	std::cout << "Brain copy constructor called.\n";
}

Brain& Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
		std::cout << "Brain assignment operator called.\n";
	}
	return (*this);
}

void		Brain::setIdea(int index, const std::string &idea)
{
	if (index >= 0 && index < 100)
		this->ideas[index] = idea;
}

std::string	Brain::getIdea(int index) const
{
	if (index >= 0 && index < 100)
		return (this->ideas[index]);
	return ("");
}
