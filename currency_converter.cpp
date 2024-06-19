#include<iostream>

using namespace std;

class CurrencyConvertor{

	private:

		double usdToEuroRate;

		double euroToUsdRate;

		double usdToPakRupeeRate;

		double usdToIndRupeeRate;

        double IndRupeeTousdRate;

	public:

		CurrencyConvertor(double usdToEuro, double euroToUsd,double usdToPak,double usdToInd,double IndTousd){

			usdToEuroRate = usdToEuro;

			euroToUsdRate = euroToUsd;

			usdToPakRupeeRate = usdToPak;

			usdToIndRupeeRate= usdToInd;

            IndRupeeTousdRate= IndTousd;			

		}

		//method to convert USD to Euro

		double usdToEuro(double usdAmount){

			return usdAmount*usdToEuroRate;

		}

		//method to convert Euro to USD

		double euroToUsd(double euroAmount){

			return euroAmount*euroToUsdRate;

		}

		//method to convert USD to Pakistani Rupee

		double usdToPakRupee(double usdAmount){

			return usdAmount*usdToPakRupeeRate;

			}

		//method to converet USD TO Indian Rupee

		double usdToIndRupee(double usdAmount){

			return usdAmount*usdToIndRupeeRate;

		}

        double IndTousd(double usdAmount){

            return usdAmount*IndRupeeTousdRate;
        }

		//Display Exchange Rate Method

		void displayExchangeRate() const{

			cout<<"\n\t--------Current Exchange Rate -----------\n";

			cout<<"1 USD to Euro :"<<usdToEuroRate<<endl;

			cout<<"1 Euro to USD :"<<euroToUsdRate<<endl;

			cout<<"1 USD to Pakistani Rupee :"<<usdToPakRupeeRate<<endl;

			cout<<"1 USD to Inidan Rupee :"<<usdToIndRupeeRate<<endl;

            cout<<"1 Indian Rupee to USD :"<<IndRupeeTousdRate<<endl;

		}	

};

main(){

	const double initialUsdToEuroRate = 0.93;

	const double initialEuroToUsdRate = 1.07;

	const double initialUsdToPakRate = 277.87;

	const double initialUsdToIndRate = 83.48;

    const double initialIndtousdRate = 0.012;

	CurrencyConvertor convertor(initialUsdToEuroRate,initialEuroToUsdRate,initialUsdToPakRate,initialUsdToIndRate,initialIndtousdRate);

	

	int choice;

	double amount;

	do{

		system("cls");

		convertor.displayExchangeRate();

		cout<<"\n\t******* Currency Convertor Main Menu ********\n";

		cout<<"1. Convert USD to Euro \n";

		cout<<"2. Convert Euro to USD \n";

		cout<<"3. Convert USD to Paksitani Rupee\n";

		cout<<"4. Convert USD to Indian Rupee\n";

        cout<<"5. Convert Indian Rupee to USD\n";

		cout<<"0. Exit\n";

		cout<<"Plz Enter Your Choice :";

		cin>>choice;

		switch(choice){

			case 1:

				cout<<"Enter the Amount of USD :";

				cin>>amount;

				cout<<amount<<" USD is Equalent to "<<convertor.usdToEuro(amount)<<" Euro\n";

				system("pause");

				break;

			case 2:

				cout<<"Enter the Amount of Euro :";

				cin>>amount;

				cout<<amount<<" Euro is Equalent to "<<convertor.euroToUsd(amount)<<" USD\n";

				system("pause");

				break;

			case 3:

				cout<<"Enter the Amount of USD :";

				cin>>amount;

				cout<<amount<<" USD is Equalent to "<<convertor.usdToPakRupee(amount)<<" Pakistani Rupee\n";

				system("pause");

				break;

			case 4:

				cout<<"Enter the Amount of USD :";

				cin>>amount;

				cout<<amount<<" USD is Equalent to "<<convertor.usdToIndRupee(amount)<<" Indian Rupee\n";

				system("pause");

				break;

            case 5:

				cout<<"Enter the Amount of Indian Rupee :";

				cin>>amount;

				cout<<amount<<" Indian Rupee is Equalent to "<<convertor.IndTousd(amount)<<" USD\n";

				system("pause");

				break;

			case 0:

				cout<<"Program End";

				

				break;

			default:

				cout<<"Plz Enter Valid Number \n";

				system("pause");

		}

	}while(choice !=0);

} 