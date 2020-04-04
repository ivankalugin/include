#include <iostream>
#include <csignal>
static void catch_signal_function(int iSIG_NUM)
{
	if (iSIG_NUM == SIGINT)
	{
		std::cout << std::endl << "Interrupted by user.";
	}
	if (iSIG_NUM == SIGTERM)
	{
		std::cout << std::endl << "Terminated.";
	}
	// cout << endl << "catch_sig: " << iSIG_NUM;
	// exit(iSIG_NUM);
	std::cout << std::endl;
	#ifdef BOOL_RUNNING
	Running = false;
	#endif
}
