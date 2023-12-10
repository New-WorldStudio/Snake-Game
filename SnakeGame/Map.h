#ifndef SNAKE_GAME_MAP

#include <iostream>
#include <Windows.h>

namespace SnakeGame
{
	class Map
	{
	public:
		Map(int cols,int rows); 
		~Map();
		char getMapElement(int cols,int rows);
		void setMapElement(int cols,int rows,char element);
		void initializationMap();
		void update();
	private:
		int rows;
		int cols;
		char** map;
	};
}

#endif // !SNAKE_GAME_MAP
