#include<iostream>
#include<string>
using namespace std;

class point {
private:
	string color;
	string name;
protected:
	point();
	~point();
	void set_color(string entered_color);
	void set_name(string entered_name);
	void get_color();
	void get_name();
};

class figure :public point {
private:
	double length;
	double width;
	void finding_perimetr();
	void finding_area();
public:
	figure();
	~figure();
	void set_size2D(double entered_length, double entered_width);
	void get_size2D();
	void get_perimetr2D();
	void get_area2D();
};

class body :public figure {
private:
	int  height;
	//должны перегрузить мериметр и площадь поэтому
	void finding_perimetr();
	void finding_area();
	void finding_volume();
public:
	body();
	~body();
	void set_height();
	void comprasion();
	void get_perimetr3D();
	void get_area3D();
	void get_volume3D();
};



int main()
{

}