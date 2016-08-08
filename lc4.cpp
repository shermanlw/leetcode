class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int length1 = nums1.size();
        int length2 = nums2.size();
        int i = 0;
		int j = 0;
		int totalindex = 0;
        bool ifodd = ((length1 + length2)%2 != 0);
        int midindex = (length1 + length2)/2;
        int tmp,oldtmp;
        while(1)
        {
        	if(i >= length1 && j < length2)
        	{
        		if(totalindex == 0)
        		{
					oldtmp = nums2[j];
				}
				else
				{
					oldtmp = tmp;
				}
				tmp = nums2[j];
        		j++;
        		totalindex++;
			}
			else if(j >= length2 && i < length1)
			{
				if(totalindex == 0)
        		{
					oldtmp = nums1[i];
				}
				else
				{
					oldtmp = tmp;
				}
				tmp = nums1[i];
				i++;
				totalindex++;
			}
			else if(j < length2 && i < length1)
			{
				if(nums1[i] > nums2[j])
	        	{
	        		if(totalindex == 0)
	        		{
						oldtmp = nums2[j];
					}
					else
					{
						oldtmp = tmp;
					}
					tmp = nums2[j];
	        		j++;
	        		totalindex++;
				}
				else
				{
					if(totalindex == 0)
	        		{
						oldtmp = nums1[i];
					}
					else
					{
						oldtmp = tmp;
					}
					tmp = nums1[i];
					i++;
					totalindex++;
				}
		    }
			
			if (totalindex > midindex) 
			{
				if (ifodd)
				{
					return (double)tmp;
				}
				else
				{
					return (double)(tmp+oldtmp)/2;
				}
			}
		}
        
    }
};