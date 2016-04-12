//#define SPACE 0
//#define	QUEEN 1
//#define	ATTACKED 2
//#include<stdio.h>
//
//int find_eight_queens(char chessboard[][8],int x,int y) {
//	int i,queen,result;
//	result = 0;
//	queen = 0;
//
//	for (; y<8; y++) {
//		if (chessboard[x][y] == SPACE) {
//			chessboard[x][y] = QUEEN;
//			queen = 1;
//			break;
//		}
//	}
//
//	if (queen == 0)
//		return -1;
//
//
//	for (i = 1; x + i < 8 ;i++) 
//		chessboard[x + i][y] = ATTACKED;
//	for (i = 1; y + i < 8; i++)
//		chessboard[x][y + i] = ATTACKED;
//	for (i = 1; x + i < 8 && y + i < 8; i++)
//		chessboard[x + i][y + i] = ATTACKED;
//	for (i = 1; x - i >= 0; i++)
//		chessboard[x - i][y] = ATTACKED;
//	for (i = 1; y - i >= 0; i++)
//		chessboard[x][y - i] = ATTACKED;
//	for (i = 1; x - i >= 0 && y - 1 >= 0; i++)
//		chessboard[x - i][y - i] = ATTACKED;
//	for (i = 1; x + i < 8 && y - 1 >= 0; i++)
//		chessboard[x + i][y - i] = ATTACKED;
//	for (i = 1; x - i >= 0 && y + 1 < 8; i++)
//		chessboard[x - i][y + i] = ATTACKED;
//
//
//	while (x < 8&&result!=-1) {
//		x++;
//		result=find_eight_queens(chessboard, x,0);
//	}
//	return result == -1 ? -1 : 0;
//}
//
//int main(void) {
//	char chessboard[8][8] = { 0 };
//	int x = 0, y = 0;
//	int c = -1;
//	int dms2, dms1;
//	char *cp = chessboard;
//
//
//	c = find_eight_queens(chessboard, x, y);
//
//	for (dms2 = 0; dms2 < 8; dms2++) {
//		for (dms1 = 0; dms1 < 8; dms1++) {
//			/*if (*cp == 2)
//			*cp = 0;*/
//			printf("%d ", *cp++);
//		}
//		putchar('\n');
//	}
//
//	printf("%d\n", c);
//
//	getchar();
//}