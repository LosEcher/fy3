// Room: /d/new/huanhua/road6.c

inherit ROOM;

void create()
{
	set("short", "����ɽ��");
	set("long", @LONG
ɽ������ֱ������,���Ƹ���Σ��,ʯ�׽��ݰ��.������,�Բ� 
����,�������.��߰�������,�չ���������.�������,��������.�� 
���˲���"ǰ�޹���,��������"֮̾! 
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 2 */
  "southdown" : __DIR__"road7",
  "northeast" : __DIR__"whitefeng",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/youke.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
