#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(int argc, char *argv[])
{
	int pid = fork();
	int sum = 0;
	if(pid == 0){
		for(float i = 0; i < 80000000; i+=0.25)
			sum += 3.56 * 9.01;
		if(sum == 1397){
			int j = 0;
			while(j < 3)
				j++;
		}
	}
	else{
		for(float i = 0; i < 80000000; i+=0.25)
			sum += 3.56 * 9.01;
		if(sum == 1397){
			int j = 0;
			while(j < 3)
				j++;
		}
		wait();
		processlist();
	}
	
	exit();
}
// #include "types.h"
// #include "stat.h"
// #include "user.h"
// #include "fcntl.h"
// int main(int argc, char *argv[])
// {
// 	/*
// 	int pid = getpid();
// 	int sum = 0;
// 	for (int i = 0; i < 10; i++)
// 	{
// 		int newPid = fork();
// 		if (newPid == pid)
// 			wait();
// 		if (newPid)
// 		{
// 			// wait();
// 			break;
// 		}
// 		else{
// 				for (int j = 0 ; j < 100000000; j++)
// 				{
// 					sum += i;
// 					printf(1, "");
// 				}
// 		}
// 	}
// 	sum = sum + 1;
// */
// 	//int pid = 0;
// 	//int tpid = 0;
// 	// if(argc <= 1)
// 	// {
// 	// 	child_num = 1;
// 	// }
// 	// else
// 	// {
// 		// child_num = atoi(argv[1]);
// 		// if(child_num < 0)
// 		// 	child_num = 1;

// 			pid = fork();
// 			if(pid < 0)
// 			{
// 				printf(1 , "falid in process generation\n");
// 				//exit();
// 			}

// 			else if(pid == 0)
// 			{
// 				tpid = getpid();
// 				int z = 0;
// 				printf(1 , "process child %d generated\n", tpid);
// 				for (int i = 0; i < 100000000; i++) {
// 						z += i;
// 				}
// 				// int temp = 1;
// 				// for(int j=1; j<2000000; j++)
// 				// {
// 				// 	temp = j + temp;
// 				// }
// 			}
// 			else
// 			{
// 				tpid = getpid();
// 				printf(1 , "process parent %d generated process child %d\n", tpid , pid);
// 				wait();
// 			}
// 		// }

//  int pid;
//  int k, n;
//  int x, z;
//  if (argc != 2) 
//  {
//  	printf(2, "usage\n",argv[0]);
//  }
//  n = atoi(argv[1]);
//  for (k = 0; k < n; k++)
//  {
//  	pid = fork();
// 	if (pid <0)
// 	{
// 		exit();
// 	}
// 	else if(pid == 0)
// 	{
// 		//printf(1, "child", getpid());
// 		for (z = 0; z < 1000.0; z += 1)
// 		{
// 			x = x + 3.14 * 89.64;
// 		}
// 		printf(1, "making child\n");
// 		exit();
// 	}
//  }

// for (k = 0; k < n; k++) 
// {
// 	printf(1,"here %d\n", k);
// 	wait();
// }


// 	exit();

// }