class Solution {
public:
    int reverse(int x) {
	int ab;
	int yu;
	stack<unsigned short> result;
	bool flag = true;
	if (x < 0)
	{
		ab = 0 - x;
		flag = false;
	}
	else
	{
		ab = x;
	}
	while (ab > 0)
	{
		yu = ab % 10;
		result.push(yu);
		ab /= 10;
	}
	long c = 0;
	long i = 1;
	while (!result.empty())
	{
		yu = result.top();
		result.pop();
		c += (yu * i);
		if (c > (int)0x7fffffff) return 0;
		i *= 10;
	};
	if(flag == false)  
	{
		return 0 - (int)c;
	}
	else
	{
		return (int)c;
	}
}
};