#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

#define NCHILD 15

int
main(int argc, char *argv[])
{
	int pid = 3;
	for(int i = 0; i < NCHILD; i++){
		if(pid > 0){
			pid = fork();
			if(pid % 3 == 1){
				setqueue(pid,2);
				setpriority(pid,pid);
			}
			else if(pid % 3 == 2){
				setqueue(pid,1);
			}
			else{
				setqueue(pid,0);
				settickets(pid,pid*5);
			}
		}
	}

	if(pid == 0){
		int sum = 0;
		for(float i = 0; i < 8000000; i+=0.25)
			sum += 3.56 * 9.01;
		if(sum == 1397){
			int j = 0;
			while(j < 3)
				j++;
		}
	}
	else if(pid > 0){
		// graphdata();
		for(int i = 0; i < NCHILD; i++){
			wait();
		}
	}
	processlist();
	exit();

}