// Room: /d/huanggon/taihedian.c

inherit ROOM;

void create()
{
	set("short", "̫�͵�");
	set("long", @LONG
̫�͵�ǰ�Ǹ����������˵Ĺ㳡,��������ʹ��.�������㺺����
���˻�����8�׵�̨��.̫�͵��35��,���и�������.�˵��ֳƽ��ǵ 
�ϱ�������,�������к͵�.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/yuqianshiwei.c" : 2,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"zhonghedian",
  "south" : __DIR__"wumen",
]));

	setup();
	replace_program(ROOM);
}
