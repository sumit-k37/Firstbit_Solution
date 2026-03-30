struct time
{
	int hr,min,sec;
	int thr,tminhr;

};
 
void main()
{
	struct time a1;
	a1.hr=200;
	a1.min=320;
	a1.sec=500;
	printf(" hr= %d min=%d sec=%d \n",a1.hr,a1.min,a1.sec);
	
	int tsec=a1.hr*3600+a1.min*60+a1.sec;
	
	a1.hr=tsec/3600;
	a1.min=tsec%3600;
	a1.sec=a1.min%60;
	a1.min=a1.min/60;
	
//	hr=tsec/3600;
//	min=tsec%3600;
//	sec=min%60;
//	min=min/60;
	
	printf("tsec=%d hr=%d min=%d sec=%d\n",tsec,a1.hr,a1.min,a1.sec);

	 
	
	
//	a1.tminhr=a1.min/60;
//	a1.tsec=a1.sec/3600;
//	a1.thr=a1.hr + a1.tsec + a1.tminhr;
//	printf("Total hr is %d min=%d sec=%d \n",a1.thr,a1.tminhr,a1.tsec);
}