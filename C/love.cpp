#include"stdio.h"
#include"windows.h"
#include"stdlib.h"
int SD=1800; //全局变量 
main()
{
	int a;
	system("title 表白小程序");
 	system("mode con cols=58 lines=32");
 	system("color 0B");
	int like();
	like();
}
int like()
{
		int a1,a2,i;
		char w[20]="欢迎使用表白小程序";
		for(a2=0;w[a2]!='\0';a2+=2)
		{
			Sleep(300);  //在CSND里面找到的最简单的延迟输出语句了，用我们教过的也可以写出来，只是有点难，待我好好研究[尬笑]
			printf("%c%c",w[a2],w[a2+1]);
		}
		printf("\r"); 
	 	Sleep(SD);
	 	printf("我是您的私人智能助手绵洋，接下来我会引导您使用本程序\r");
	 	Sleep(SD);
	 	printf("绵洋：本条语句可能只能输入提示的数字                \r");
	 	Sleep(SD);
	 	printf("输入0继续，输入1结束本程序                          \n");
	 	for(a2=3;a2>0;a2--)
	 	{
	 		scanf("%d",&a1);
	 		printf("\r");
	 		if(a1==0)
	 		{
	 			system("cls");
		 		printf("好嘞嘞，那俺们继续开始啦                    \r");
		 		Sleep(SD);
	 		    system("cls");  //清屏
		 		int ks();
		 		ks();
		 		break;

		 	}
		 	else if(a1==1)
		 	{
	 			printf("俺会按照您的意愿执行                        \r");
	 			Sleep(SD);
	 			printf("see you!             \n");
	 			break;
	 		}
	 		else if(a2>1)
		 		printf("要不再重新输入试试? [剩余次数：%d次]\n",a2-1);
	 		 else
	 		 printf("啊，抱歉啦，没有能够接收正确的命令，要不仔细看看在重新来？\n");
	 	}
}
int ks()
{
	int a1,a2;
	for(a2=5;a2>0;)
	{
		char w[350]="  当你看到这的时候就说明我已经不能再用在校学长的身份跟你见面了，我们的'老位置'也将再也不会见到我。每当我想你抱怨见不到你了的时候，你每次都说：'人嘛，总会有离别的时候，我们的未来是好的'，我当然知道这个呀，但是人嘛，如果真的能够说什么就是什么那就奇怪了。不管怎么样我都会忍不住想念你，想念在学校与你度过的每分每秒，想念跟你在一起干的每一件事情……。";
		for(a1=0;w[a1]!='\0';a1+=2)
		{
		Sleep(120);
		printf("%c%c",w[a1],w[a1+1]);
		}
		a2--;
		char y[550]="  我们在一起有大半年了，这期间我们也跟其他情侣一样也有大大小小的吵架和不愉快的事情，在这对于我之前的无知和不理解你表示道歉，就像我之前给你分享的视频上说的那样'在网上暖心的话大概能传递到50%，而吵架说的话却可以传递到200%，一个拥抱就可以解决的事情会因为距离而被无限放大'，我们马上也要开始异地恋了，虽然说只有一年，但这一年谁也说不准会发生什么事情，而我能做的却只有在聊天软件上安慰你，在几百公里远的地方陪你难受，而这样是我能做的唯一几件事情。接下来的一年里更多的要靠宝宝自己的坚强。我会努力学会理解你、不惹你生气，我也会更加努力学习，让自己变得更好。\n";
		for(a1=0;y[a1]!='\0';a1+=2)
		{
		Sleep(120);
		printf("%c%c",y[a1],y[a1+1]);
		}
		a2--;
		char a[590]="  宝宝接下来时间你要好好学习，争取给我考个好成绩回来让我好好高兴高兴，平时不要给自己太大的压力，可以适当放松，只要不愧对于自己就行，我永远是你坚强的后盾，你的家人和我都期待着你的好消息。不过也不要光想着学习，身体也非常重要，平时一定要按时吃饭，你的身体本来就不是特别好，又还不按时吃饭怎么可以，在学校和在外面一定要保护好自己，学会对一些事情说不，你健健康康、平平安安就是我最开心的事情了。如果你非常想我了，我向你保证，我会尽快出现在你的面前。这几天我也想了很多，到了大学我想尝试专升本，虽然听说也比较难，但我想尝试，希望你可以支持我的想法。宝宝，有句话不在关键的时候我是不会说的，我爱你。\n";
		for(a1=0;a[a1]!='\0';a1+=2)
		{
		Sleep(120);
		printf("%c%c",a[a1],a[a1+1]);
		}
		a2--;
		char x[20]="好好学习，天天向上\n";
		for(a1=0;x[a1]!='\0';a1+=2)
		{
		Sleep(120);
		printf("%c%c",x[a1],x[a1+1]);
		}
		a2--;
		char h[200]="                                                 绵洋\n                                                  2022.3.7";
		for(a1=0;h[a1]!='\0';a1+=2)
		{
		Sleep(120);
		printf("%c%c",h[a1],h[a1+1]);
		}
		a2--;
		if(a2==0)
		break;
	}
}
