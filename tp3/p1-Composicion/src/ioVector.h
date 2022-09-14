/* ioVector.h */

#ifndef IOVECTOR_H_
#define IOVECTOR_H_

#include <iostream>
#include "Vector.h"
using namespace std;

istream& operator>>(istream& entra, Vector &v){
	for(int i=0; i<v.getCapacidad();i++){
		entra>>v[i];
	}
	return entra;
}
ostream& operator<<(ostream& sale, Vector &v){
	sale<<"v [ ";
	for(int i=0; i<v.getCapacidad();i++)
		sale<<v[i]<<" ";
	sale<<"] "<<endl;
	return sale;
}
#endif /* IOVECTOR_H_ */
