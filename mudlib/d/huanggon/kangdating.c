// Room: /d/huanggon/kangdating.c

inherit ROOM;

void create()
{
	set("short", "��������");
	set("long", @LONG
���������ǿ�����ƽʱ�Ӽ������ĵط�,�����а˸��������ӳ�
���ݶ�,���Ӽ��ǰ�ɴ����,һ�ű������絲ס�������,�������ΰ���
��λ�ֱ�ڷ�.
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/qiyuankai.c" : 1,
  __DIR__"npc/shzhshangren.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"tingyuan",
  "north" : __DIR__"tianjin",
]));

	setup();
	replace_program(ROOM);
}
