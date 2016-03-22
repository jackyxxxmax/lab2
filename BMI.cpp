#include<iostream>
#include"BMI.h"

void BMI::height_set(float h){
	height=h;
}
void BMI::weight_set(float w){
	weight=w;
}
void BMI::BMI_calculate(){
	BMI=(weight/((height/100.0)*(height/100.0)));
}
float BMI::BMI_get(){
	return BMI;
}
void BMI::BMI_attribute(){	
	if(bmi<15)level="Very severely underweight";
	if(bmi<16&&bmi>=15)level="Severely underweight";
	if(bmi<18.5&&bmi>=16)level="Underweight";
	if(bmi<25&&bmi>=18.5)level="Normal";
	if(bmi<30&&bmi>=25)level="Overweight";
	if(bmi<35&&bmi>=30)level="Obese Class I(Moderately obese)";
	if(bmi<40&&bmi>=35)level="Obese Class II(Severely obese)";
	if(bmi>=40)level="Obese Class III(Very severely obese)";
}
string BMI::Level(){
	return level;
}
