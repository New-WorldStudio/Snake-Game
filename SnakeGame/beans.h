#pragma once
#include<random>
#include"Snake.h"
namespace SnakeGame
{
	//������
	class Beans
	{
	public:
		//����һ������
		void InitBeans(std::vector<Snake::Point>* Snakes);
		int x;
		int y;
		//�ж϶����Ƿ����
		void EatBeans(std::vector<Snake::Point>* Snakes);
	};
}