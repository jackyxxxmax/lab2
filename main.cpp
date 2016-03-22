#include"BMI.h"

int main(){
	float hh,ww;
	BMI i;
	ifstream infile("file.in",ios::in);
	if(!infile){
		cerr<<"Failed opening"<<endl;
		exit(1);	
	}
	ofstream outfile("file.out",ios::out);
	
	while(infile>>hh>>ww){
		i.height_set(hh);
		i.weight_set(ww);
		if(hh==0&&ww==0)exit(0);

		i.BMI_calculate();
		i.BMI_attribute();
		outfile<<i.BMI_get()<<"\t"<<i.Level()<<endl;
	}
	infile.close();
	outfile.close();
	return 0;
}
