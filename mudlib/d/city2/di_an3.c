inherit ROOM;

void create()
{
	set("short", "�ذ��������");
	set("long", @LONG
����һ����������Ĵ��������ͨ���ذ��š�����ͨ�����ġ�
��֪��Ϊʲô�����������������壬�������������ˡ�
LONG );
        set("outdoors", "city2");
	set("exits", ([
		"east" : __DIR__"di_anmen",
		"west" : __DIR__"di_an4",
	]));
	set("objects", ([
"/d/yangzhou/npc/liumang":2,
	]));
//	set("no_clean_up", 0);
	setup();
	replace_program(ROOM);
}


