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
	if(BMI<15)level="Very severely underweight";
	if(BMI<16&&BMI>=15)level="Severely underweight";
	if(BMI<18.5&&BMI>=16)level="Underweight";
	if(BMI<25&&BMI>=18.5)level="Normal";
	if(BMI<30&&BMI>=25)level="Overweight";
	if(BMI<35&&BMI>=30)level="Obese Class I(Moderately obese)";
	if(BMI<40&&BMI>=35)level="Obese Class II(Severely obese)";
	if(BMI>=40)level="Obese Class III(Very severely obese)";
}
string BMI::Level(){
	return level;
}
