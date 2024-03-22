// CARD HPP CLASS FILE
#ifndef CARD_HPP
#define CARD_HPP

#include <string>

enum class Color {
    RED,
    BLUE,
    GREEN,
    YELLOW
};

enum class ValueType {
    ZERO,
    ONE,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    SKIP,
    REVERSE,
    DRAW_TWO,
    DRAW_FOUR
};

class Card {
private:
    Color color;
    ValueType value;
    
public:
    // Constructor
    Card(Color _color, ValueType _value);

    // Destructor
    ~Card();

    // Getters
    Color getColor() const;
    ValueType getValue() const;

    // Fnction to get str representation of the card
    std::string toString() const;

};

#endif
