//Noah Hathout

#include "MaxProduct.h"

long MaxProductClass::MaxProduct(string file){	
	ifstream inputFile(file);

	vector<vector<long>> numMatrix;
	vector<long> numsPerLine;
	vector<long> maxProductPerLine;
	long currProduct = 1;
	int lines = 0;
	
	int num;
	
	while(inputFile >> num){
		numsPerLine.push_back(num);
		
		if(num == -999999){
			numsPerLine.pop_back();
			lines++;
			numMatrix.push_back(numsPerLine);
			numsPerLine.clear();
		}
	}

	for(int i = 0; i < numMatrix.size(); i++){
		numsPerLine = numMatrix[i];
		currProduct = 1;

		long maxProduct = LONG_MIN;
		for(int k = 0; k < numsPerLine.size(); k++){
			currProduct = 1;

			for(int j = k; j < min((int)numsPerLine.size(), k + 3); j++){
				currProduct *= numsPerLine[j];
				maxProduct = max(maxProduct, currProduct);
			}
		}
		cout << maxProduct << endl;
		maxProductPerLine.push_back(maxProduct);
	}		

	long totalMaxProduct = *max_element(maxProductPerLine.begin(), maxProductPerLine.end());

	return totalMaxProduct;
};