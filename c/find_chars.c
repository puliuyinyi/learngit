/*************************************************
  Function:       find_char
  Description:    判断source字符串中是否包含有chars字符串中的字符
  Calls:          none
  Called By:      none
  Table Accessed: none
  Table Updated:  none
  Input:          const char * source 源字符串
                  const char * chars 关键字字符串
  Output:         none
  Return:         返回第一个匹配的字符的地址，异常情况返回null
  Others:         none
*************************************************/
char * find_char(const char * source,const char * chars)
{
	char * index = chars;
	
	/* 参数为null */
	if(source == null || chars == null){
		return null;
	}
	
	/* 参数指向空字符串 */
	if(*source == '\0' || chars == '\0'){
		return null;
	}
	
	/* 一般情况 */
	while(*source != '\0'){
		index = chars;
		while(*index != '\0'){
			if(*source == *index){
				return source; 
			}else{
				index++;
			}
		}
		source++;
	}
	/* 所有字符均不匹配 */
	return null;
}