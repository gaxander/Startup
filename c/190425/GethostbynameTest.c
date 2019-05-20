#include<stdlib.h>
#include<ctype.h>
#include<netdb.h>
#include<sys/types.h>
#include<stdio.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<string.h>

int main(int argc, char ** argv)
{
	char HOST[1025];
	char ** tmp_c_ptr = NULL, con[33];
	if(argc <2)
	{
		printf("you should specify a hostname\n");
		exit(3);
	}
	strcpy(HOST, argv[1]);
	struct hostent * host = gethostbyname(argv[1]);
#ifdef DEBUG
	printf("%s\n",HOST);
#endif
	if(host == NULL)
	{
		printf("get host by name error\n");
		exit(1);
	}
	printf("name:%s\n",host->h_name);
	printf("alias:%s\n",*(host->h_aliases));
	printf("h_addrtype:%d\n",host->h_addrtype);
	printf("h_length:%d\n",host->h_length);
	char ** pptr = NULL;
	for(pptr = host->h_addr_list; *pptr !=NULL; pptr ++)
	{
		inet_ntop(host->h_addrtype,  *pptr, con, sizeof(con));
		printf("addresses : %s\n", con);
	}
	return EXIT_SUCCESS;
}
