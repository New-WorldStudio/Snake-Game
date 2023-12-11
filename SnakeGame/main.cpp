#include <iostream>
#include "Map.h"
#include<Windows.h>
#include"beans.h"
#include"tool.h"
int main()
{
	// 初始化地图
	SnakeGame::Map map(25, 60);
	//创建豆子
	SnakeGame::Beans beans;
	//定义蛇
	SnakeGame::Snake snake;
	//初始化蛇
	snake.InitSnake();
	//传出蛇的身体坐标
	std::vector<SnakeGame::Snake::Point>* SNAKES = &snake.Snakes;
	//显示地图
	map.ShowMap();
	//生成第一个豆子
	beans.InitBeans(SNAKES);
	// 游戏主循环
	while (true) 
	{
		//判断是否失败
		Defeat(SNAKES);
		// 更新方向
		snake.gitDirection();
		// 移动蛇
		snake.move();
		// 更新地图
		map.UpMap(SNAKES,beans.x,beans.y);
		//判断豆子是否被吃掉
		snake.grow = beans.EatBeans(SNAKES);
		// 暂停一段时间，让蛇的移动可见
		Sleep(rand()%300+5); 
	}

	return 0;
}