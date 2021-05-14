vector<vector<string> > Anagrams(vector<string>& string_list) 
{
    vector<vector<string> > result;

    // hash map to maintain groups of anagrams
    unordered_map <string,vector<string> > umap; 
    
    for(int i =0; i<string_list.size(); i++ )
    {
        string s = string_list[i];
     
        // sort each string
        sort(s.begin(),s.end());
        
        // add original string to corresponding sorted string in hash map
        umap[s].push_back(string_list[i]);
    }
    for(auto itr= umap.begin(); itr!=umap.end(); itr++)
        result.push_back(itr->second);
    
    return result;
}
