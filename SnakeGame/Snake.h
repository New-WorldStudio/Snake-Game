#pragma once
#include<vector>
#include<conio.h>
#include<iostream>
namespace SnakeGame
{
	//蛇类
	class Snake
	{
	public:
		//初始化蛇的出生点
		void InitSnake();
		//蛇头当前的坐标
		struct Point
		{
			int x;
			int y;
		};
		//获得蛇的方向
		void gitDirection();
		//根据方向移动蛇
		void move();
		//蛇的身体：二维vector容器，储存每个蛇的身体节点。
		std::vector<Point>Snakes;
		char Direction=' ';
	private:
	};

}