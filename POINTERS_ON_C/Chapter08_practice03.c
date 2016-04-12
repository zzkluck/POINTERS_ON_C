#ifdef USE_08_03

#define MAX 10
#define TRUE 1
#define	FALSE 0
int identity_matrix(int *matrix[][MAX]) {
	int dms_1,dms_2;		//dms:dimensionÎ¬Êý

	for (dms_2 = 0; dms_2 < MAX; dms_2++) 
		for (dms_1 = 0; dms_1 < MAX; dms_1++) 
				if (matrix[dms_1][dms_2] != (dms_1==dms_2)
					return FALSE;
	return TRUE;
}

#endif // USE_08_03