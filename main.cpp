#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	setlocale(0,"");
	char c;		//смещенный символ
	unsigned int k;		//номер символа по таблице ASCII
	char s[256];	//вводимая строка
	cin.getline(s,256);
	
	for(int j=1;j<26;j++)
	{
        	cout<<"Смещение на "<<j<<endl;
        	for (int i=0;i<strlen(s);i++)
		{
           	 	k=(unsigned int)(s[i]);
                 	if(k!=32)			//пропуск пробелов
			{
				if(k>=97 && k<=122)	//для строчных букв
				{
               				if((k+j)>122)
					{
                		  		k=(k-26)+j;
               				 	c=(char)(k);
	        	        	 	cout<<c;
                	 	 	}
         	         		else
					{
                  	     			k=k+j;
                 	      			c=(char)(k);
                 	      			cout<<c;
               		 		}
				}
				if(k>=65 && k<=90) 	//для заглавных букв
				{
                	        	if((k+j)>90)
					{
                        	        	k=(k-26)+j;
                                	 	c=(char)(k);
                               		 	cout<<c;
	       			 	}
					else
					{
               			 		k=k+j;
                		 		c=(char)(k);
                   		 		cout<<c;
               	        		}
           			}
			}
			else
				cout<<s[i];
        	}
		cout<<endl;
	}
	return 0;
}
