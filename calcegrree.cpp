#include <iostream>
#include <string>
float degreeCalc(float x, float y)
{
	float minute = y * 6;
	float hours = x*30 + y*0.5;
        float degree = hours - minute;
	if(degree < 0)
	{
		return degree*(-1);
	}	
	return degree;
}
int main()
{	
	std::cout<<"enter hours and minute\n";
	int x , y;
	std::cin>>x>>y;
	std::cout<<"degree: " << degreeCalc(x,y)<<std::endl;
	return 0;
}
