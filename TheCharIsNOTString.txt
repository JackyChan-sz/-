void  CopyStr(const unsigned char* pStr, int len)
{
	char objStr[64];
	int i;
	
	for(i=0; i<len; i++)
	{
		objStr[i] = *pStr++;
	}
}

int main()
{
	CopyStr((const unsigned char*)(' '), 1);// 错误代码
	CopyStr((const unsigned char*)(" "), 1);// 可以运行
	return 0;
}
