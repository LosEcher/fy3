// Room: /d/huashan/jzroad1.c

inherit ROOM;
void create()
{
	set("short", "������");
	set("long", @LONG
����һƬ�����֡��м�һ��С·�����߶��Ǻ�ɭɭ�ļ��ɸߵ���
�������Ͻ��Ų����ɹ��������Ұ�������ζ�����
LONG );
	set("exits", ([
		"southwest" : __DIR__"path1",
		"east"      : __DIR__"jzroad2",
	]));
	set("objects", ([
"/d/meizhuang/npc/yetu":2,
	]));
	set("outdoors", "huashan");
//        set("no_clean_up", 0);
	setup();
	replace_program(ROOM);
}

