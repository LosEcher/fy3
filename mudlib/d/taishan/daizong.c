// Room: /d/taishan/.c
// Date: CSWORD 96/03/25

inherit ROOM;

void create()
{
	set("short", "��ڷ�");
	set("long", @LONG
λ��̩���س��Ա�Լһ��˴��ǵ�̩ɽ����ڡ��ഫ�����
ϼԪ����������ϷŪ������Ͷ���廨Ь�Զ�̩ɽ�ؽ磬�����ϼԪ
��ֻ�ܰ��廨Ь��ɽ�������˴����Ӵ�̩ɽ���Դ�Ϊ��㡣
LONG );
	set("exits", ([
		"northup" : __DIR__"baihe",
		"south"   : __DIR__"taishanjiao",
	]));
	set("objects", ([
	]));
//	set("no_clean_up", 0);
	set("outdoors", "taishan");
	setup();
}
int valid_leave(object me,string dir)
{
	if(!userp(me) && (int)me->query("ts_xl") && dir=="south")
	return 0;
	return ::valid_leave(me,dir);
}

