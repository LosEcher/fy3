// Room: /d/hangzhou/nanping.c

inherit ROOM;

void create()
{
	set("short", "��������");
	set("long", @LONG
�ش���ʯ���ϣ���������,�����������ɽ.ɽ´֮��һ����Ժ 
��������ǰ�Ĵ���.������������ĺ�����ֳ��ص���ɽ�ȹ��������� 
"��������ĺ�̷ɣ�礵��������΢��. 
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/man.c" : 2,
]));
	set("outdoors", "/d/hangzhou");
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "northdown" : __DIR__"xiaolu1",
  "south" : __DIR__"jingci.c",
  "westup" : __DIR__"shilu.c",
]));

	setup();
	replace_program(ROOM);
}
