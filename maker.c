#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
  int fd = open("image.ppm", O_CREAT | O_RDWR, 0644);
  char msg[256] = "P3\n500 500 \n255\n";
  write(fd, msg, sizeof(msg));
  //char gradient[2800] = "";
  int x, y;
  for (x = 0; x < 500; x ++){
    for(y = 0; y < 500; y ++){
      int r, g, b;
      r = 255;
      g = b;
      b = 255 - y/2;
      char line[32];
      sprintf(line, "%d %d %d ", r, g, b);
      //printf("%s\n", line);
      write(fd, line, sizeof(line));
      sprintf(line, "%s", "");
    }
  }
  close(fd);

}
