#include "card.hpp"
#include <string>

// Constructor
Card::Card(Color _color, ValueType _value)
    : color(_color)
    , value(_value)
{
}

// Destructor
Card::~Card() {}

// Getters
Color Card::getColor() const {
    return color;
}

ValueType Card::getValue() const {
    return value;
}

