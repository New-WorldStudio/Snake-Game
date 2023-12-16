#pragma once
#include<random>
#include"Snake.h"
namespace SnakeGame
{
	//¶¹×ÓÀà
	class Beans
	{
	public:
		void InitBeans(std::vector<Snake::Point>* Snakes);
		bool EatBeans(std::vector<Snake::Point>* Snakes);
		int getX();
		int getY();
	private:
		int x;
		int y;
	};
}