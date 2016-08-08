class Solution {
public:
    string longestPalindrome(string s) {
        unsigned int length = s.length();
        int i,j,k;
        int currentlargest = 0;
        string currentstr;
        int tmplength, maxl; 
        for(i = 0; i < length; i++)
        {
        	maxl = ((length - i - 1)> i)? i : (length - i - 1);
	        for(j = 0; j <= maxl; j++)
	        {
		        if(s[i-j] != s[i+j])
		        {
		        	break;
				}
		    }
		    tmplength = (j - 1)*2+1;
        	if(tmplength > currentlargest)
        	{
        		currentstr = s.substr(i-j +1, tmplength);
        		currentlargest = tmplength;
			}
	    }
	    for(i = 0; i < length - 1; i++)
        {
        	maxl = (i < length - i - 2)?i:(length -i - 2);
        	for(j = 0; j <= maxl; j++)
        	{
        		if(s[i-j] != s[i+1+j])
        		{
        			tmplength = j*2;
		        	if(tmplength > currentlargest)
		        	{
		        		currentstr = s.substr(i-j, tmplength);
		        		currentlargest = tmplength;
					}
        			break;
				}
				else
				{
					tmplength = (j+1)*2;
		        	if(tmplength > currentlargest)
		        	{
		        		currentstr = s.substr(i-j, tmplength);
		        		currentlargest = tmplength;
					}
				}
			}
			
		}
	    
	    return currentstr;
    }  
};