#include <iostream>
#include <vector>
#include <string>
#include <io.h>
#include <fstream>

 void getFiles( std::string path, std::vector<std::string>& files )  
 {  

    long   hFile   =   0;    
    struct _finddata_t fileinfo;  
    std::string p;  
    if((hFile = _findfirst(p.assign(path).append("\\*").c_str(),&fileinfo)) !=  -1)  
    {  
        do  
        {   
            if((fileinfo.attrib &  _A_SUBDIR))  
            {  
                if(strcmp(fileinfo.name,".") != 0  &&  strcmp(fileinfo.name,"..") != 0)
                files.push_back(fileinfo.name);
                //getFiles( p.assign(path).append("\\").append(fileinfo.name), files );  
            }  
            else  
            {  
                continue; 
            }  
        }
        while(_findnext(hFile, &fileinfo)  == 0);  
        _findclose(hFile);  
     }  
} 


void owf()
{
    std::vector<std::string> tem;
    std::string path = "D:\\Code\\Code\\pytraining";

    getFiles(path,tem);

    for(int i = 0; i < tem.size(); i++)
    {
        std::cout << tem[i] << std::endl;
    }
}

int main ()
{
    owf();

    return 0;
}

