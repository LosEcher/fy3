// Room: /d/hangzhou/erlou.c

inherit ROOM;

void create()
{
	set("short", "��¥");
	set("long", @LONG
¥��¥�Ķ�����������,�����ĳ���������﹫��,�ָ̼���֮��,
���Ļ�������ī��,ʫ������,����ǽ(wall)�ϼ�ʱ����.��һ��,����
����������.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/daemon/class/gaibang/hong.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "down" : __DIR__"louwai",
]));

	setup();
set("item_desc",([
"wall":"ɽ����ɽ¥��¥,�������輸ʱ��,... ...\n",
]));
"/obj/board/hz_louboard"->foo();
	replace_program(ROOM);
}
