#include "main.h"

/**
  * append_text_to_file -Appends a text to the end of file
  * @filename: a pointer to the file name
  * @text_content: the string to add to the end of file
  * Return: -1 if fails or doesnot exist else 1
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == 0)
		return (-1);
	
	if (text_content != 0)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
