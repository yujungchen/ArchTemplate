#pragma once

#include <stdio.h>



template <class T>
T getMax(T &in0, T &in1){

	if(in0 > in1)
		return in0;
	else
		return in1;
}