#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(int argc, char *argv[])
{
	if(argc == 3){
		setqueue(atoi(argv[1]), atoi(argv[2]));
	}
	exit();
}