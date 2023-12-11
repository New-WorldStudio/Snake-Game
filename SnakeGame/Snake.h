#pragma once
#include<vector>
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
		//蛇的身体：二维vector容器，储存每个蛇的身体节点。
		std::vector<Point>Snakes;
	private:
	};

}