// comparator to sort vector<pair<int,int>> such tha it sort in ascending order according to first element and in descending order according to the 
// second element is first elements are equal

bool comp(pair<int, int> p1, pair<int, int> p2) 
{ 
    if (p1.first > p2.first)
	{
		return false;
	}
	else if (p1.first < p2.first)
	{
		return true;
	}
	else 
	{
		if (p1.second > p2.second)
		{
			return true;
		}
		else 
		{
			return false;
		}
	}
	
}
