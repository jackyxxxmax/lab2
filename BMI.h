#include<iostream>
#include<fstream>
#include<string>
#include<cstdio>
#include<cstdlib>
using namespace std;

class BMI{
	public:
		void height_set(float h);
		void weight_set(float w);
		void BMI_calculate();
		float BMI_get();
		void BMI_attribute();
		string Level();
	private:
		float height;
		float weight;
		float BMI;
		string level;
};
