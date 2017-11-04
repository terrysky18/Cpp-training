// sstream-demo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "templateStream.h"

int main()
{
	long bigNumber = 9827401832;
	templateStream<long> ts;
	std::cout << ts.getString(bigNumber) << std::endl;
    return 0;
}

