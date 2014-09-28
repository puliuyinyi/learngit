/*************************************************
  Function:        delete_char
  Description:     删除字符串中指定的字符    
  Calls:           none          
  Called By:       none      
  Table Accessed:  none 
  Table Updated:   none  
  Input:           char * string 待处理字符串
                   char ch 要删除的字符
  Output:          string
  Return:          void
  Others:          none
*************************************************/
void delete_char(char * string, char ch)
{
	char * pre_ch;
	char * deleted_ch;
	
	pre_ch = string;
	deleted_ch = string;

	while(*pre_ch != '\0'){
		if(*pre_ch == ch)
			*pre_ch++;
		else
			*deleted_ch++ = *pre_ch++;
	}
	*deleted_ch = '\0';
}