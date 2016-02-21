// Room: /d/hangzhou/hongying.c

inherit ROOM;

void create()
{
	set("short", "��Ӱ��");
	set("long", @LONG
��Ӱ����ԽŮ����,�ʺ��Բ�,��������,�������ƵͰ�,��˵��������
��Խ����,����֮���ο̻���,�����쳣.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"shuangf",
  "north" : __DIR__"baidi3",
]));
	set("outdoors", "/d/hangzhou");

	setup();
	replace_program(ROOM);
}
