// Room: /d/chengdu/tocd.c

inherit ROOM;

void create()
{
	set("short", "ʯ��·");
	set("long", @LONG
������ʯ���̳ɵĴ�������ڿ����ɶ��������������˶���
���������治Զ���ǳɶ���
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"qingshidadao1",
  "east" :"/d/wudang/road3",
]));
set("outdoors","�ɶ�");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
