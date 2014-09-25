/*************************************************
  Function:        delete_char
  Description:     É¾³ý×Ö·û´®ÖÐÖ¸¶¨µÄ×Ö·û    
  Calls:           none          
  Called By:       none      
  Table Accessed:  none 
  Table Updated:   none  
  Input:           char * string ×Ö·û´®
                   char ch ÐèÒªÉ¾³ýµÄ×Ö·û
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