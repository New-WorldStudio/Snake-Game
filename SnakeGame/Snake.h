#pragma once
#include<vector>
#include<conio.h>
#include<iostream>
namespace SnakeGame
{
	//����
	class Snake
	{
	public:
		//��ʼ���ߵĳ�����
		void InitSnake();
		//��ͷ��ǰ������
		struct Point
		{
			int x;
			int y;
		};
		//����ߵķ���
		void gitDirection();
		//���ݷ����ƶ���
		void move();
		//�ߵ����壺��άvector����������ÿ���ߵ�����ڵ㡣
		std::vector<Point>Snakes;
		char Direction=' ';
	private:
	};

}