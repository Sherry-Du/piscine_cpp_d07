#include "Buzz.h"

Buzz::Buzz(std::string const& name) : Toy(BUZZ, name, "buzz.txt")
{
}

Buzz::Buzz(std::string const& name, std::string const& file) : Toy(BUZZ, name, file)
{
}

Buzz::~Buzz()
{
}

void Buzz::speak(std::string const& statement)
{
  std::cout << "BUZZ: " <<  this->getName() << " \"" << statement << "\"" << std::endl;
}

bool Buzz::speak_es(std::string const& statement)
{
  std::cout << "BUZZ: " <<  this->getName() <<  " senorita \"" << statement << "\" senorita" << std::endl;
  return true;
}
