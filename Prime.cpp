//Compute the n th prime
int GetNthPrime(int n){
	list<int> primes(1,2)//init list:length 1,value 2(first prime)
	int number=3;
	while(primes.size()!=n){
		bool isPrime=true;
		for(auto it=primes.begin();it!=primes.end()&&(*it)*(*it)<=number;i++){
			if(number%(*it)==0){
				isPrime=false;
			}
		}
		if(isPrime){
			primes.push_back(number);
		}
		number+=2;
	}
	return *(primes.rbegin());
}
