#include <iostream>
#include "Map.h"
#include<Windows.h>
#include"beans.h"
#include"tool.h"
int main()
{
	SnakeGame::Map map(25, 60);
	SnakeGame::Beans beans;
	SnakeGame::Snake snake;
	snake.InitSnake();
	std::vector<SnakeGame::Snake::Point>* SNAKES = &snake.Snakes;
	map.ShowMap();
	beans.InitBeans(SNAKES);
	while (true) 
	{
		Defeat(SNAKES);
		snake.gitDirection();
		snake.move();
		map.UpMap(SNAKES,beans.getX(), beans.getY());
		snake.grow = beans.EatBeans(SNAKES);
		Sleep(rand()%300+5); 
	}

	return 0;
}