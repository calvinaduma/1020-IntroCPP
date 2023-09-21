#include <iostream>
using namespace std;

class CRectangle {
		int x, y;
	public:
		void set_values(int x, int y);

		int area(void){
			return x*y;
		}
};


int main(void) {
	
	CRectangle recta, rectb;
	recta.x = 3;
	recta.y = 4;
	
	CRectangle.set_values(3,4);
	cout << CRectangle.area() << endl;

	return 0;
}


