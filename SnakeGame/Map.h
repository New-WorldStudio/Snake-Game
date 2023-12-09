#ifndef SNAKE_GAME_MAP

namespace SnakeGame
{
	class Map
	{
	public:
		Map(); 
		~Map();
		void printMap(); // ��ӡ��ͼ
		char getMapElement();
		void setMapElement();
	private:
		int rows;
		int cols;
	};
}

#endif // !SNAKE_GAME_MAP
