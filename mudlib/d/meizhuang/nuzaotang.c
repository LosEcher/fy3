// Room: /d/suzhou/meizhuang/nuzaotang.c

inherit ROOM;

void create()
{
	set("short", "Ů����");
	set("long", @LONG
���ò��Ǻܴ󣬼�����ľͰ����ķ�ɢ�����ڡ�Ů������ߴߴ������
��ͷ�����ˣ����������Ҹ�û�˵�ľͰ�úõ�����һ��ϴ�����Ȥ�ɡ�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"zaotangguodao",
]));
	set("no_clean_up", 0);
	set("bath_room",1);
	set("bath_equipment","��ľͰ");
	setup();
	replace_program(ROOM);
}
