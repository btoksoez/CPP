#!/bin/bash

if [ -z "$1" ]; then
	echo "Usage: $0 {class_name}"
	exit 1
fi

CLASS_NAME=$1
HEADER_FILE="./${CLASS_NAME}.hpp"
SOURCE_FILE="./${CLASS_NAME}.cpp"
UPPER_CLASS_NAME=$(echo "$CLASS_NAME" | tr '[:lower:]' '[:upper:]')

# Create the header file
cat <<EOL > $HEADER_FILE
#ifndef ${UPPER_CLASS_NAME}_HPP
# define ${UPPER_CLASS_NAME}_HPP

#include <iostream>

class $CLASS_NAME
{
	protected:
		std::string type;

	public:
		$CLASS_NAME();
		virtual ~$CLASS_NAME();
		$CLASS_NAME(const $CLASS_NAME& other);

		$CLASS_NAME& operator=(const $CLASS_NAME &other);
};

#endif // ${UPPER_CLASS_NAME}_HPP
EOL

# Create the source file
cat <<EOL > $SOURCE_FILE
#include "$HEADER_FILE"

$CLASS_NAME::$CLASS_NAME() : type("default")
{
	std::cout << this->type << " $CLASS_NAME constructor called.\n";
}

$CLASS_NAME::~$CLASS_NAME()
{
	std::cout << this->type << " $CLASS_NAME destructor called.\n";
}

$CLASS_NAME::$CLASS_NAME(const $CLASS_NAME &other)
{
	this->type = other.type;
	std::cout << this->type << " $CLASS_NAME copy constructor called.\n";
}

$CLASS_NAME& $CLASS_NAME::operator=(const $CLASS_NAME &other)
{
	if (this != &other)
	{
		this->type = other.type;
		std::cout << this->type << " $CLASS_NAME assignment operator called.\n";
	}
	return (*this);
}
EOL

echo "Files $HEADER_FILE and $SOURCE_FILE have been created."
