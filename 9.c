#include <sys/types.h>
       #include <sys/stat.h>
       #include <stdint.h>
       #include <time.h>
       #include <stdio.h>
       #include <stdlib.h>
       #include <sys/sysmacros.h>

       int
       main(int argc, char *argv[])
       {
           struct stat sb;

           if (argc != 2) {
              printf(" use proper argument \n");
	      return 0;

           }

           if (stat(argv[1], &sb) == -1) {
               perror("lstat");
               return 0;
           }
printf("I-node number:            %ju\n", (uintmax_t) sb.st_ino);

           printf("Mode: %jo (octal)\n",(uintmax_t) sb.st_mode);

           printf("Link count:               %ju\n", (uintmax_t) sb.st_nlink);
           printf("Ownership:                UID=%ju   GID=%ju\n",(uintmax_t) sb.st_uid, (uintmax_t) sb.st_gid);

           printf("Preferred I/O block size: %jd bytes\n",(intmax_t) sb.st_blksize);
           printf("File size:                %jd bytes\n",(intmax_t) sb.st_size);
           printf("Blocks allocated:         %jd\n",(intmax_t) sb.st_blocks);

           printf("Last status change:       %s", ctime(&sb.st_ctime));
           printf("Last file access:         %s", ctime(&sb.st_atime));
           printf("Last file modification:   %s", ctime(&sb.st_mtime));

	   return 0;
       }
     
