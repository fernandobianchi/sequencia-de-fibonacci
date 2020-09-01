#include<iostream>
#include<locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ptb");
	int fibonacci=0, termo_anterior=0, termo_atual=1, cont, qtdeTermos=0;
	cout<<"Até que termo você gostaria de ver a sequência de fibonacci? ";
	cin>>qtdeTermos;
	cout<<"Os termos são: \n"<<termo_anterior<<"\n"<<termo_atual<<"\n";
	for(cont=0;cont<=qtdeTermos;cont++)
		{
			fibonacci=termo_anterior+termo_atual;
			termo_anterior=termo_atual;
			termo_atual=fibonacci;
			cout<<fibonacci<<"\n";
		}
}