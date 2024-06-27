#include <stdio.h>
main()
{
	int zika, ji,hun,byou;
	printf("•b”‚ğ“ü—Í:");
	scanf("%d", &zika);
	if (zika <=5000) {
		ji = zika / 3600;
		hun = (zika - 3600 * ji) / 60;
		byou = zika - (3600 * ji + 60 * hun);
		printf("%dŠÔ%d•ª%d•b‚Å‚·\n",ji,hun,byou);
	} 
	else {
		printf("ƒGƒ‰[\n5000ˆÈ“à‚É‚µ‚Ä‚­‚¾‚³‚¢\n");
	}
}