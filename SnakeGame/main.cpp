#include <iostream>
#include "Map.h"
#include<Windows.h>
int main()
{
	// 初始化地图
	SnakeGame::Map map(25, 60);
	//定义蛇
	SnakeGame::Snake snake;
	//初始化蛇
	snake.InitSnake();
	std::vector<SnakeGame::Snake::Point>* SNAKES = &snake.Snakes;
	//显示地图
	map.ShowMap();
	// 游戏主循环
	while (true)
	{
		//更新地图
		map.UpMap(SNAKES);
	}
	// 释放内存
	return 0;
}