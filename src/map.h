#ifndef MAP_H
#define MAP_H
#include "position.h"

class Map
{
public:
	Map(Position size, Position start, Position stop);
	virtual ~Map();

private:
	Position m_size;
	Position m_start;
	Position m_stop;
};

#endif // MAP_H
