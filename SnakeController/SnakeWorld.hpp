#pragma once

#include <utility>
#include "SnakePosition.hpp"
#include "SnakeDimension.hpp"

namespace Snake
{

class World
{
public:
    World(Dimension dimension, Position food);

    void setFoodPosition(Position position);
    Position getFoodPosition() const;

    bool contains(int x, int y) const;

private:
    Position m_foodPosition;
    Dimension m_dimension;
};

} // namespace Snake
