// Room: /d/suzhou/dongchengmen.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
���ſ��������壬��·���˴󶼴ҴҶ�����˭Ҫ��������̽ͷ̽�Եģ��ǵ�
���سǹٱ�������ȥ�����ߴ������ӵ��������㲻�ɼӿ��˲�����
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"west" :__DIR__"jiaowai",
		"east" :__DIR__"chengxijie1",
]));
	set("objects",([
	__DIR__"npc/bingyong":2,
]));
	set("outdoors","suzhou");

	setup();
}
int valid_leave(object who,string dir)
{
	if(who->query("suzhou")==1 && dir=="west") return 0;
	return 1;
}
