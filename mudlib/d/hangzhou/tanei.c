// Room: /d/hangzhou/tanei.c

inherit ROOM;

void create()
{
	set("short", "�׷�����");
	set("long", @LONG
ׯ�Ϻ�ΰ���׷����ڿտ���Ҳ,̧ͷ����,һ����������������« 
�Ŀ���ֱ�����.�ıڵ���ʯ�ϵ���˾���.�����ڻ��н��,������С�� 
��.һ����Ϲ����ŷ���(fajie),�����е����������˸�ɮ��. 
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"leifeng",
]));
	set("item_desc", ([ /* sizeof() == 1 */
  "fajie" : "���మ��,��������!
",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/fahai.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
