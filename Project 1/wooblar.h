#ifndef WOOBLAR
#define WOOBLAR

class Wooblar{
	public:
		Wooblar(){
			foo = 5;
			bar = false;
		}
		~Wooblar(){}
		
		int getFoo(){return foo;}
		bool getBar(){return bar;}
		
	protected:
		int foo;
		bool bar;
};

#endif