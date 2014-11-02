/*************************************************
  Function:        substr
  Description:     截断字符串    
  Calls:           none          
  Called By:       none      
  Table Accessed:  none 
  Table Updated:   none  
  Input:           char dst[] 存储截断的字符串
                   char src[] 源字符串
				   int start  截取开始下标
				   int len    截取长度
  Output:          char dst[] 存储截断的字符串
  Return:          int 目标字符串的长度
  Others:          none
*************************************************/
int substr(char dst[], const char src[], int start, int len)
{	
	int i = 0;
	int src_lenth = strlen(src);
	
	if(start < src_lenth && start >= 0 && len > 0)
	{
		for(;i < len;i++)
		{
			if(src[i + start] == '\0')
				break;
			dst[i] = src[i + start];
		}
	}
	dst[i] = '\0';
	return i;
}