// Room: /d/huanggon/qianfengyin.c

inherit ROOM;

void create()
{
	set("short", "ǰ��Ӫ");
	set("long", @LONG
ǰ��Ӫ�Ǿ�ʦ�����֮һ,ͳ�찢��̩,�ξ�����,����������������
Ҫ��С����,������Ӫͳ����ס�˰ѱ�,������������.Ӫ�о�ʿ����Ѳ��
�����������.
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/qianfengying.c" : 2,
  __DIR__"npc/aertai.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"wdajie",
]));
	set("outdoors", "/d/huanggon");

	setup();
	replace_program(ROOM);
}
