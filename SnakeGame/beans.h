#pragma once
#include<random>
#include"Snake.h"
namespace SnakeGame
{
	//豆子类
	class Beans
	{
	public:
		//生成一个豆子
		void InitBeans(std::vector<Snake::Point>* Snakes);
		int x;
		int y;
		//判断豆子是否噶掉
		void EatBeans(std::vector<Snake::Point>* Snakes);
	};
}