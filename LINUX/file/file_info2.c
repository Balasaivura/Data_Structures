#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<time.h>
#include<pwd.h>
#include<grp.h>
char* getUser(uid_t );
char* getGrp(uid_t );
void main(int argc,char *argv[])
{
	struct stat v;
	if(argc!=2)
	{
		printf("Usage:./a.out filename\n");
		return;
	}
	if(stat(argv[1],&v)<0)
	{
		perror("Stat:");
		return;
	}
	printf("%ld\t ",v.st_ino);
	printf( (S_ISDIR(v.st_mode)) ? "d" : "-");
    	printf( (v.st_mode & S_IRUSR) ? "r" : "-");
    	printf( (v.st_mode & S_IWUSR) ? "w" : "-");
    	printf( (v.st_mode & S_IXUSR) ? "x" : "-");
    	printf( (v.st_mode & S_IRGRP) ? "r" : "-");
    	printf( (v.st_mode & S_IWGRP) ? "w" : "-");
    	printf( (v.st_mode & S_IXGRP) ? "x" : "-");
    	printf( (v.st_mode & S_IROTH) ? "r" : "-");
    	printf( (v.st_mode & S_IWOTH) ? "w" : "-");
    	printf( (v.st_mode & S_IXOTH) ? "x" : "-");
	printf("\t");
	printf("%ld\t %s\t %s\t %ld\t %s\n",v.st_nlink,getUser(v.st_uid),getGrp(v.st_gid),v.st_size,ctime(&v.st_atime));
}
char* getUser(uid_t uid)
{
    struct passwd *pws;
    pws = getpwuid(uid);
        return pws->pw_name;
}
char* getGrp(uid_t gid)
{
    struct group *pws;
    pws = getgrgid(gid);
        return pws->gr_name;
}
