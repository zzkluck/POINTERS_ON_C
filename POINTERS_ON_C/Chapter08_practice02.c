#ifdef USE_08_02

static float single_tax_standard[] =
{ 0,23350,56550,117950,256500,0xffffffff};

static float tax_fee[] =
{ 0,3502.50,12798.50,31832.50,81710.50 };

static float tax_percentage[] =
{ 0.15,0.28,0.31,0.36,0.396 };

float single_tax(float income) {
	int index;
	for (index = 0;
		single_tax_standard[index + 1] > 0;
		index++){ 
		if (income > single_tax_standard[index] &&
			income <= single_tax_standard[index + 1])
			return 
			tax_fee[index] + tax_percentage[index] * (income - single_tax_standard[index]);
	}
}
#endif // USE_08_02