///* ioVector.h */
//
//#ifndef IOVECTOR_H_
//#define IOVECTOR_H_
//
//#include <iostream>
//#include "Vector.h"
//using namespace std;
//
//istream& operator>>(istream& entra, Vector &v){
//	string descripcion;
//	for(int i=0; i<v.getCapacidad();i++){
//		cout<<"p-"<<i<<" Nombre:"<<endl;
//		entra>>descripcion;
//		v[i].setDescripcion(descripcion);
//	}
//	return entra;
//}
//ostream& operator<<(ostream& sale, Vector &v){
//	sale<<"v [ ";
//	for(int i=0; i<v.getCapacidad();i++)
//		sale<<"("<<v[i].listar()<<") ";
//	sale<<"] "<<endl;
//	return sale;
//}
//#endif /* IOVECTOR_H_ */
