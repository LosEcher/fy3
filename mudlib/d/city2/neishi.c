//neishi.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long",
	     "\n������һ���յ����ķ��䣬���˵ذ�(floor)��ʲôҲû�С�\n"
	);
	set("exits", ([
		"east" : __DIR__"huichunt",
		"westdown":__DIR__"andao1",
	]));
	set("item_desc", ([
		"floor" : "\n�ذ�ȫ��ľ�Ƶģ��������Щ�ҳ���������һ��ľ��ܸɾ���\n" ,
	]));
	set("no_clean_up", 0);
	setup();
	replace_program(ROOM);
}
