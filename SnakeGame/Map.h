#pragma once
#include<Windows.h>
#include <iostream>
#include<vector>
#include"Snake.h"
namespace SnakeGame
{
	//��ͼ��
	class Map
	{
	public:
		Map(int cols,int rows); 
		~Map();
		//��ʾ��ͼ
		void ShowMap();
		//ˢ�µ�ͼ
		void UpMap(std::vector<Snake::Point>* Snakes);
	private:
		int rows;
		int cols;
		char** map;
	};
}

