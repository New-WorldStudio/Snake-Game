#pragma once
#include<vector>
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
		//�ߵ����壺��άvector����������ÿ���ߵ�����ڵ㡣
		std::vector<Point>Snakes;
	private:
	};

}