// Room: /d/suzhou/meizhuang/nanzaotang.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
���ò��Ǻܴ��Һ��ķ��ż�����ľͰ������һ��Ĺ��򣬾�����
û�����ٿ�ȴ���۵ľ�ƣ���ߣ����������һ��������������
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"zaotangguodao",
]));
	set("no_clean_up", 0);
	set("bath_room",1);
	set("bath_equipment","��ľͰ");
	setup();
	replace_program(ROOM);
}
