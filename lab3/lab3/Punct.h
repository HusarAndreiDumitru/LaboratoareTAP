#pragma once

class Punct {
private:
	
	int x;
	int y;

public:

	Punct(int x, int y);
	Punct(const Punct& c);
	Punct();
	~Punct();
};
