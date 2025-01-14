#include "get_next_line.h"

char *get_next_line(int fd)
{
    int         n;
    int         read_no;
    char        *temp;
    char        *line;
    static char *keep;
    char        *buff;

    
    // Check input and test if can read from fd
    // if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, NULL, 0) == -1)
    if (fd < 0 || BUFFER_SIZE <= 0) // All read() must have BUFFER_SIZE parameter 
        return (NULL);
    

    buff = (char *)malloc(BUFFER_SIZE + 1);

    // Check if previous kept string have newline
    // If it's the first pass, the keep variable is NULL
    // n = 0 (Not found)
    // n > 0 (Found)
    n = found_newline(keep);
    if (n)
    {
        line = extract(keep, n);
        temp = trim(keep,n);
        free(keep);
        keep = temp;
        free(buff);
        return (line);
    }    
    else
    {
        while (TRUE)
        {
            // read_no  > 0 (Read something)
            // read_no <= 0 (EOF or Error)
            read_no = read(fd, buff, BUFFER_SIZE);
            if (read_no <= 0)
            {
                line = keep;
                keep = NULL;
                free(buff);
                return (line);
   
            }
            else
            {
                buff[read_no] = '\0';
                n = found_newline(buff);
                // n > 0 (Found), break, return line and keep balance
                // n = 0 (Not found), continue looping and read fd
                if (n)
                {
                    temp = extract(buff, n);
                    line = join(keep, temp);
                    free(temp);
                    if (keep)
                        free(keep);
                    keep = trim(buff, n);
                    free(buff);
                    return (line);
                }
                else
                {
                    temp = join(keep, buff);
                    if (keep)
                        free(keep);
                    keep = temp;
                }
            }
        }
    }
}

/*  
int main()
{
	int fd;
	char *line;
	int lineNo = 1;

	fd = open("1.txt", O_RDONLY);
	while (TRUE)
	{
		line = get_next_line(fd);
		if (line)
		{
			printf("#%d -> %s\n\n", lineNo, line);
            free (line);
			lineNo++;
		}
		else
			break;
	}
	close(fd);
}
*/
