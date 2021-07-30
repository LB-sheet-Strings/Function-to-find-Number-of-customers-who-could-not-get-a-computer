#include<bits/stdc++.h> //OPTIONAL
#include<iostream>
#include<cstring>
#include <unordered_map>

using namespace std;

int runCustomerSimulation (int max_PCs,string str)
{
	int l=str.length(),occupied=0;
	int key,value;
	int frequency=1,ans_count=0;
	
	//store the characters in hash map on the go
	unordered_map<int,int> m;
	
	  //chalte chalte values insert karo map me
    for(int i=0;i<l;i++)
    {
    	key=(int)str[i];
    	value=frequency;   //frequency is always at most 2 as per given in question
    	
    	// if map is empty or Key is not present, insert key and the value and occuppied mark karo
    	if (m.find(key)==m.end())
    	{
    		//pair(mapping) bnaye
    		m.insert(make_pair(key,value));
    		
    		occupied++;
    		
    		//agar computer bache hi nhi to..
    		if(occupied>max_PCs)
    		{
    			ans_count++;
			}
    		
		}
		// Key is already present to matlab customer ab bahar jaa raha hai to PC khaali karo
		else if(m.find(key)!=m.end())
		{
			occupied--;
		}
	}
	
	return ans_count++;
	
}

int main()
{
	string str="ABCBCADEED";
	int max_PCs=1;
	
	cout<<"\nNumber of customers who didn't get any PC => "<<runCustomerSimulation(max_PCs,str);
	
return 0;
}
