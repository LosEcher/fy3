// Room: /d/suzhou/chengzhong.c

inherit ROOM;

void create()
{
	set("short", "���й㳡");
	set("long", @LONG
�㳡�����������񣬵��Ǹ���Ϣ�ĺõط��������������У����Ǹ����С���
����Щ��ָ�����լԺ���Ե���԰���Щ���㳡����һ��Ȫ���������ð��Ȫˮ��
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"west" :__DIR__"chengxijie3",
		"north" :__DIR__"chengbeijie1",
		"south" :__DIR__"chengnanjie1",
		"east" :__DIR__"chengdongjie1",
]));
	set("objects",([
		__DIR__"npc/xunbu" :4,
]));
	set("resource/water",1);
	set("outdoors","suzhou");
	set("no_clean_up",0);

	setup();
	replace_program(ROOM);
}
