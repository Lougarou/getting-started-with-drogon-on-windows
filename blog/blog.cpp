// blog.cpp : Defines the entry point for the application.
//

#include "blog.h"
#include <drogon/drogon.h>


//using namespace std;
using namespace drogon;

int main()
{
    app().setLogPath("./")
        .addListener("0.0.0.0", 1234)
        .run();
	return 0;
}
